#include<bits/stdc++.h>
#include<string.h>
using namespace std;

long long int binary_searching(long long int a[], long long int n, long long int key)
{
    sort(a, a+n);
    long long int s=0;
    long long int e=n-1;
    long long int mid;

    do{
        mid = (s+e)/2;
        if(a[mid]>key)
            e=mid-1;
        else if(a[mid]<key)
            s=mid+1;
    }while(a[mid]!=key);

    return mid;
}

int main (){
    long long int n, i;
    cin>>n;
    long long int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    long long int key;
    cin>>key;

    long long int index = binary_searching(a, n, key);
    cout<<index+1;

    return 0;
}
