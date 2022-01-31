#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(5, 10);       //{10,10,10,10,10}
    v.push_back(20);            //{10,10,10,10,10,20}
    v.emplace_back(30);         //{10,10,10,10,10,20,30}

    cout<<v.size()<<endl;       //7
    
    v.insert(v.begin()+1, 5);   //{10,5,10,10,10,10,20,30}

    v.insert(v.begin()+1, 2, 100);  //{10,100,100,5,10,10,10,10,20,30}

    v.insert(v.end(), 40);          //{10,100,100,5,10,10,10,10,20,30,40}

    vector<int> v1(5, 100);         //{100,100,100,100,100}

    //v.swap(v1);
    
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;



    return 0;
}