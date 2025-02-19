#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>

/*
the basic logic is to start from idx 0 (starting idx), and
compare this element with every other elements in the array to find
the smallest element and place it at current idx. Do this for every
other element in the array
*/

vi selection_sort(vi v){
    ll n = v.size();
    for(ll i=0;i<n;i++){
        for(ll j=i;j<n;j++){
            if (v[i]>v[j]){
                swap(v[i],v[j]);
            }
        }
    }
    return v;
}

int main() {
    vi v{4,5,3,2,1};

    for(auto it : selection_sort(v))
        cout << it << " ";

	return 0;
}
