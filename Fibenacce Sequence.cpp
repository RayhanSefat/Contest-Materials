#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void FibNum(int a, int b, int limit)
{
    cout<<a<<" "<<b<<" ";

    while(a+b<=limit)
    {
        cout<<a+b<<" ";
        int t = a+b;
        a = b;
        b = t;
    }
}

int main (){
    int a, limit;
    cin>>a>>limit;


    FibNum(a, a+1, limit);

    return 0;
}
