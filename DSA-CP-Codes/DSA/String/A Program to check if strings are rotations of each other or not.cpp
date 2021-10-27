#include <bits/stdc++.h>
using namespace std;

int areRotations(string str1,string str2){
    if(str1.length()!=str2.length())
        return 0;
    
    string temp=str1+str1;
    if(str1.find(str2)){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{   
   string str1 = "ABACD", str2 = "CDABA";
   if (areRotations(str1, str2))
     cout<<"it's rotational";
   else
      cout<<"it's not rotational";
   return 0;
}