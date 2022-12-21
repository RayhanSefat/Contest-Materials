#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void Merge(int arr[], int s, int mid, int e)
{
    int n1=mid-s+1;
    int n2=e-mid;

    int a[n1], b[n2];

    for(int i=0; i<n1; i++)
    {
        a[i]=arr[s+i];
    }

    for(int i=0; i<n1; i++)
    {
        b[i]=arr[mid+1+i];
    }

    int i=0, j=0, k=s;

    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;
            i++;
        }

        else
        {
            arr[k]=b[j];
            k++;
            j++;
        }
    }

    while(i<n1)
    {
        arr[k]=a[i];
        k++;
        i++;
    }

    while(i<n1)
    {
        arr[k]=b[j];
        k++;
        j++;
    }

    return;
}

void merge_sort(int arr[], int s, int e)
{
    if(s<e)
    {
        int mid = s + (e-s)/2;
        merge_sort(arr, s, mid);
        merge_sort(arr, mid+1, e);
        Merge(arr, s, mid, e);
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
    merge_sort(arr, 0, n-1);
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}
