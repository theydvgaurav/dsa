#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>

int fib(int n){
    if(n<=1)
        return n;
    return fib(n-1) + fib(n-2);
}


int main() {
    cout << fib(3);
	return 0;
}
