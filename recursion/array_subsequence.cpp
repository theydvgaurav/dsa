#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>

vector<vi> res;
void solve(ll idx, vi v, vi arr)
{
    if (idx >= arr.size())
    {
        res.push_back(v);
        return;
    }
    v.push_back(arr[idx]);
    solve(idx + 1, v, arr);
    v.pop_back();
    solve(idx + 1, v, arr);
}

int main()
{
    vi temp;
    res.clear();
    vi arr{3, 2, 1};
    temp.clear();
    solve(0, temp, arr);
    for (auto vect : res)
    {
        for (auto it : vect)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
    return 0;
}
