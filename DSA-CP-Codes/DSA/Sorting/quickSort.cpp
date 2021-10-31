#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[],int l,int r){
    int pivot = arr[r];
    int i=l-1,j=l;
    for( ;j<r;j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[r]);
    return i+1;
}

void quick_sort(int arr[], int l,int r)
{
    if(l>=r){ return;}
    int partitionIndex = partition(arr,l,r);
    quick_sort(arr,l,partitionIndex-1);
    quick_sort(arr,partitionIndex+1,r);
}

int main()
{
    int arr[] = {6, 5, 4, 3, 2, 1,10,15,13};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    quick_sort(arr, 0,size-1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}