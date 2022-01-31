//iterator in cpp

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<int>::iterator it = v.begin();       //iterator creation
    cout<<*it;                                  //10
    cout<<endl;
    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;

    for(auto it = v.begin(); it!=v.end();it++)
    {
        cout<<*it<<" ";
    }

}