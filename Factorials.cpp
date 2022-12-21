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


int main (){
    int a;
    cin>>a;

    cout<<fact(a);

    return 0;
}
