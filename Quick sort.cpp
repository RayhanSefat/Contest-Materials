#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void Swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int Partition(int arr[], int s, int e)
{
    int pivot = arr[e];
    int i=s-1;
    int j=s;
    for(;j<e; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            Swap(arr, i, j);
        }
    }

    Swap(arr, i+1, e);
    return i+1;
}

void quick_sort(int arr[], int s, int e)
{
    if(s<e)
    {
        int pi = Partition(arr, s, e);
        quick_sort(arr, s, pi-1);
        quick_sort(arr, pi+1, e);
    }

    return;
}

int main()
{
    int n, i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    quick_sort(arr, 0, n-1);    //r=n-1
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}
