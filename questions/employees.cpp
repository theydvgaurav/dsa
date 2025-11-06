#include<bits/stdc++.h>
#define vector<int> vi;
using namespace std;

class Employee{
    public:
        vi child;
        int salary;
        int empId;
    Employee(){
        this->empId = 0;
        this->salary = 0;
        this->child = {};
    }
};

int main(){
    int no_of_edges, no_of_nodes;
    cin >> no_of_edges >> no_of_nodes;
    vi salaries(no_of_nodes+1,0);
    vector<vi> edges(no_of_edges);
    for(int i=1; i<=no_of_nodes; i++){
        cin >> salaries[i];
    }
    for(int i=1; i<=no_of_nodes; i++){
        cin >> salaries[i];
    }

    return 0;
}
