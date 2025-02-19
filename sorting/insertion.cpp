#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>

/*
the basic logic is to start from idx 0 (starting idx), assuming
that from 0 to 0 idx is a sorted array. Now from the right of this
element(idx 1). pick an element and try to compare it with the
elements present in the sorted array. and place the element at a
proper place. Do this until you exhaust the right side elements.
*/


vi insertion_sort(vi v){
    ll n = v.size();
    for(ll i=1;i<n;i++){
        for(ll j=i;j>=0;j--){
            if(v[j]<v[j-1]){
                int temp = v[j];
                v[j]=v[j-1];
                v[j-1]=temp;
            }
        }
    }
    return v;
}

int main() {
    vi v{1,5,2,4,3};

    for(auto it : insertion_sort(v))
        cout << it << " ";

	return 0;
}
