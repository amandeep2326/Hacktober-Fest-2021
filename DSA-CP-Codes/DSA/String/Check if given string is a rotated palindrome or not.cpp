#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin>>str;
    int end = str.size()-1;
    int start = 0;
    int flag=0;
    while(start<end){
        if(str[start]==str[end]){
            start++;
            end--;
        }
        else{
            flag = 1;
            break;
        }
    }
    if(flag==0)
        cout<<"palindrome"<<endl;
    else
        cout<<"not palindrome";
}
    
