// pure recusive solution
#include <bits/stdc++.h>
using namespace std;
// here idx and target are changing with function calls. so we need to use both whenever memoizing the function call.
int solve(vector<int> coins, int target, int idx){
    if (target == 0) return 0;
    if (target < 0 || idx >= coins.size()) return 1e9;
    return min(1+solve(coins, target-coins[idx], idx), solve(coins, target, idx+1));
}
int main() {
    vector<int> coins{1,2,5};
    cout << solve(coins, 11, 0);
    return 0;
}
