#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>

void fn(int n){
    if(n < 1)
        return;
    cout << n << " ";
    fn(n-1);
}

void fun(int n){
    if(n < 1)
        return;
    fun(n-1);
    cout << n << " ";
}   

int main() {
    fn(5);
    cout << "\n";
    fun(5);
	return 0;
}