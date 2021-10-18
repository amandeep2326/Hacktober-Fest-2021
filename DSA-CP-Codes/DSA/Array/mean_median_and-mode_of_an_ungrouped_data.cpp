#include <bits/stdc++.h> 
using namespace std;

//finding mean of the ungrouped data in array
float mean(float arr[], int n){
    float sum = 0;

    for(int i = 0;i < n; i++)
        sum += arr[i];
    
    return sum/n;
}

//finding median of the ungrouped data in the array
float median(float arr[], int n){

    //sort the array
    sort(arr, arr + n);

    if(n % 2 == 0)
        return (arr[n/2 - 1] + arr[n/2])/2;

    return arr[n/2];
}

//finding mode of ungrouped data
float mode( float arr[], int n){

    // Sort the array 
    sort(arr, arr + n); 
  
    //finding max frequency  
    int max_count = 1, res = arr[0], count = 1; 

    for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) 
            count++; 
        else { 
            if (count > max_count) { 
                max_count = count; 
                res = arr[i - 1]; 
            } 
            count = 1; 
        } 
    } 
  
    // when the last element is most frequent 
    if (count > max_count) 
    { 
        max_count = count; 
        res = arr[n - 1]; 
    } 
    
    return res;
}

int main(){
    int n;
    float arr[50];

    cout<<"Enter the size of array: ";
    cin>>n;

    //input in the array
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    //print mean, median and mode of ungrouped data in array
    cout<<"\nMean = "<<mean(arr, n);
    cout<<"\nMedian = "<<median(arr, n);
    cout<<"\nMode = "<<mode(arr, n);
    
    return 0;
}