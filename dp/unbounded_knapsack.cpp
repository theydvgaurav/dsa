#include <bits/stdc++.h>
using namespace std;

int dp[5][8];

int main() {
    int wt[4] = {1,3,4,5};
    int val[4] = {1,4,5,7};
    int W = 7;
    for(int i=0; i<5; i++){
        for(int j = 0; j<8; j++){
         if (i==0 || j==0){
             dp[i][j] = 0;
         }
        }
    }

    for(int i=1; i<5; i++){
        for(int j = 1; j<8; j++){
            if (wt[i-1] > j)
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]],dp[i-1][j]);
        }
    }
    cout << dp[4][7];

    return 0;
}
