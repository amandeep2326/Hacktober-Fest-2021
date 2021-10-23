// problem link  https://practice.geeksforgeeks.org/problems/b6b608d4eb1c45f2b5cace77c4914f302ff0f80d/1
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long smallestpositive(vector<long long> array, int n)
    { sort(array.begin(), array.end());
    long long re=1;
    for(int i=0; i<n && array[i]<=re; i++){
        re+=array[i];
    }
    return re;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long> array(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>array[i];
        }
        Solution ob;
        cout<<ob.smallestpositive(array,n)<<"\n";
    }
    return 0;
}
