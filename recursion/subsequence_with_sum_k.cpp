#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vs vector<string>

vector<vi> res;

void solve(int idx, vi temp, int curr_sum, int sum, vi inp)
{

    if (idx >= inp.size())
    {
        if (sum == curr_sum)
        {
            res.push_back(temp);
        }
        return;
    }
    temp.push_back(inp[idx]);
    solve(idx + 1, temp, curr_sum + inp[idx], sum, inp);
    temp.pop_back();
    solve(idx + 1, temp, curr_sum, sum, inp);
}

int main()
{
    res.clear();
    vi inp{1, 2, 1, 3};
    vi temp;
    temp.clear();
    solve(0, temp, 0, 5, inp);
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