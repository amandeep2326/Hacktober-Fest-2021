//Problem Link
//https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1/?track=DSASP-DP&batchId=154


/*Example
N = 3
W = 4
values[] = {1,2,3}
weight[] = {4,5,1}
Output: 3
*/

//Solution

#include <iostream>
#include <string.h>
#include <limits.h>
using namespace std;


  // Returns the maximum value that
// can be put in a knapsack of capacity W     
  int knapSack(int W, int wt[], int val[], int n) 
{ 
  
    
    int i, j; 
    int dp[n + 1][W + 1];  //declaring 2d DP array
  
   for(int i=0; i<=W; i++)
   {
       dp[0][i] = 0;    
   }
   
   for(int i=0; i<=n; i++)
   {
       dp[i][0] = 0;
   }
    
    for (i = 1; i <= n; i++) {  
        for (j = 1; j <= W; j++) { 
           if (wt[i - 1] > j) // finding the maximum value
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);  
        } 
    } 
  
    return dp[n][W]; // returning the maximum value of knapsack
} 
    

int main() {

int n;
cin>>n;  //number of items 
int W;    
cin>>W;   //W is max weight of knapstack and n1 refers to the number of items
int val[n],wt[n];	
for(int i=0;i<n;i++)
{
    cin>>val[i];  //taking input of val array or Itemsvalue
}
for(int i=0;i<n;i++)
{
    cin>>wt[i];     //taking input of weight of each item in an array
}
cout<<knapSack(W, wt, val, n); //calling function
	

}