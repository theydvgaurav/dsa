#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>

void rev(vi &arr, int i){
    if(i>=arr.size()/2)
        return;
    swap(arr[i],arr[arr.size()-1-i]);
    rev(arr, i+1);
}

int main() {
    vi  res = {1,4,5,6,7};
    rev(res,0);
    for(auto it: res)
        cout << it << " ";
	return 0;
}