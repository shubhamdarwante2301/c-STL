//nesting in vectors
//vector of vector
//it works like 2d array
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N = 3;
    vector<vector<int>> v;

    for(int i=0; i<N; i++)
    {
        vector<int> temp;
        for(int j=0; j<3; j++)
        {
            temp.push_back(j);
        }
        v.push_back(temp);
    }

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}