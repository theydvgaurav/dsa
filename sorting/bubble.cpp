#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>

vi bubble_sort(vi v){
    ll n = v.size();
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n-i-1; j++){
            if(v[j]>v[j+1])
                swap(v[j],v[j+1]);
        }   
    }
    return v;
}

int main() {
    ll n; cin >> n;
    vi v(n,0);
    
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    
    for(auto it : bubble_sort(v))
        cout << it << " ";
        
	return 0;
}