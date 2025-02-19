#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>

bool check_palindrome(string str){
    int n = str.size();
    if (n<=1)
        return true;
    return str[0]==str[n-1] && check_palindrome(str.substr(1,n-2));
}


int main() {
   string str = "MADAM";
   string st = "MADDM";
    cout << check_palindrome(str) << "\n";
    cout << check_palindrome(st) << "\n";
	return 0;
}