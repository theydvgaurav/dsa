class Solution {
public:
    vector<long long int> dp;
    Solution(){
        dp = vector<long long int>(10001,-1);
    }
    long long int solve(vector<int> coins, long long tgt, long long int curr_sum, long long int count){
        if(curr_sum >= tgt){
            if (curr_sum==tgt) return count;
            return 1e9;
        }

        if (dp[curr_sum]!=-1) return dp[curr_sum];
        long long int temp = 1e9;
        for(auto it: coins){
            long long int x = solve(coins,tgt,curr_sum+it,count+1);
            temp = min(temp, x);
        }
        return dp[curr_sum] = temp;

    }
    int coinChange(vector<int>& coins, int amount) {
        long long int res = solve(coins, amount, 0, 0);
        return res==1e9?-1:res;
    }
};
