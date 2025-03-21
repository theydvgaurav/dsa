#include<bits/stdc++.h>

using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2){
    if (p1.second > p2.second) return true;
    if (p1.second < p2.second) return false;
    if (p1.first < p2.first) return true;
    return false;
}

int main(){
    vector<pair<int,int>> v = {{2,1},{3,1},{2,5}};
    /*sort based on second in dsc order and if second value matches, then on first asc */
    sort(v.begin(),v.end(),comp);
    for(auto it: v)
        cout << it.first << " " << it.second << "\n";
    return 0;
}
