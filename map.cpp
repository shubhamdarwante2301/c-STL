//map in cpp

#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "srd";               //time complexity O(log n)
    m[5] = "gfg";
    m[3] = "rrr";
    m.insert({4,"shu"});        //time complexity O(log n)

    auto i = m.find(2);                  //time complexity O(log n)
    if(i == m.end())                    //if key is not found iterator points to the end
    {
        cout<<"No Value"<<endl;
    }
    else
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    
    m.erase(3);                 //it delete the key 3 and its value //time complexity O(log n)
    map<int, string>::iterator it;

    for(it = m.begin(); it!=m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }


    return 0;
}