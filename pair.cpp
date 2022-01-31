//pair in cpp
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    cout<<"simple pair"<<endl;
    pair<int, int> p = {10,20};
    cout<<p.first<<" "<<p.second<<endl;

    //vector of pair
    cout<<"vector of pair"<<endl;
    vector<pair<int,int>> v;
    v.push_back(make_pair(100,200));
    v.push_back({1,2});
    v.push_back({2,3});
    v.push_back({3,4});

    for(auto i:v)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    //array of pair
    cout<<"array of pair"<<endl;
    pair<int, int> arr[] = {{10,20}, {20,30}, {30,40}};
    for(int i=0; i<3; i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
}