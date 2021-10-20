#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'circularArrayRotation' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER k
 *  3. INTEGER_ARRAY queries
 */

void circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    
    int n=a.size();
    int t;
    int dest=k%n;
     int b[n];
    
    
    for (int i=0;i<n;i++) {
    b[dest++]=a[i];
    if (dest==n) dest=0;
}
    
      for(int i=0;i<queries.size();i++)
    {
        cout<<b[queries[i]]<<endl;
    }
    
  

}

int main()
{
    vector<int > a;
    vector <int > queries;
    int n, k, q,t;
    cin>>n>>k>>q;
    
    for(int i=0;i<n;i++)
    {
        cin>>t;
        a.push_back(t);
        
    }
    for(int i=0;i<q;i++)
    {
        cin>>t;
        queries.push_back(t);
        
    }
    
    circularArrayRotation(a, k, queries);

    return 0;
    
    
}
