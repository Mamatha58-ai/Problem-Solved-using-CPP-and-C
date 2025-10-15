#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main()
{
    //pair dicleration
    vector<int>vet ;
    vet.push_back(10);
    vet.push_back(20);
    vet.push_back(30);
    vet.push_back(40);
    
    vector<int>::iterator it = vet.begin();
    cout<<*(it) << endl ;
}
