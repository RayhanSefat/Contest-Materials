#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int fact(int a)
{
    int pod=1;

    for(; a>1; a--)
        pod *= a;

    return pod;
}

int nCr(int n, int r)
{
    return (fact(n) / (fact(r) * fact(n-r)));
}

int PascalTriangle(int n)
{
    for (int i=0; i<=n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<nCr(i, j)<<" ";
        }
        cout<<endl;
    }
}

int main (){
    int n;
    cin>>n;

    PascalTriangle(n);

    return 0;
}
