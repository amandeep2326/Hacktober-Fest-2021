#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    vector <char> v1;

    char*v="shiv";
    for(int i=0;v[i]!='\0';i++)
    {
        v1.push_back(v[i]);

    }
    while(next_permutation(v1.begin(),v1.end()))
    {
        for(int i=0;i<v1.size();i++)
        cout<<v1[i];

        cout<<endl;
    }
    return 0;

    
}