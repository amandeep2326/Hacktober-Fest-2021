#include <bits/stdc++.h>
using namespace std;

void duplicates(string s){

    int arr[26]={0};

    for(char i='a'; i<='z'; i++){
        for(int j=0; j<s.length(); j++){
            if(s[j]==i){
                arr[s[j]-'a']++;
            }
        }
    }

    for(char i='a'; i<='z'; i++){
        if(arr[i-'a']>1){
            cout<<i<<" "<<arr[i-'a']<<endl;
        }
    }
}
int main(){
    string s;
    cin>>s;
    duplicates(s);
    return 0;
}