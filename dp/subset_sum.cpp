/*

Given arr[] = [2,3,7,8,10] and a sum = 11, we need to check if there exists a subset whose sum is equal to given sum

*/


// #include<bits/stdc++.h>
// using namespace std;

// bool solve(int arr[], int n, int sum){
//     if (sum==0) return true;
//     if (n==0) return false;
//     if (arr[n-1] > sum)
//         return solve(arr,n-1,sum);
//     return solve(arr,n-1,sum) || solve(arr,n-1,sum-arr[n-1]);
// }

// int main(){
//     int arr[5] = {2,3,7,8,10}, sum = 1;
//     cout << solve(arr,5,sum);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

bool dp[6][15];

int main(){
    int arr[5] = {2,3,7,8,10}, sum = 14;
    for(int i=0; i<6; i++){
        for(int j=0; j<sum+1; j++){
            if(i==0) dp[i][j] = false;
            if(j==0) dp[i][j] = true;
        }
    }
    for(int i=1; i<6; i++){
        for(int j=1; j<sum+1; j++){
            if(arr[i-1] > j)
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
        }
    }
    cout << dp[5][14];
    return 0;
}
