#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void selection_sort(int arr[],int n)
{
    int i,j,k;
    for( i=0; i<n-1; i++){
        j=i,k=i;
        for( ;j<n;j++){
            if(arr[j]<arr[k]){
                k=j;
            }
        }
        swap(&arr[i],&arr[k]);
    }
}

int main()
{
    int arr[] = {6, 5, 4, 3, 2, 1,10,15,13,90,45,78,24};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    selection_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}