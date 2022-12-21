#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int d2b(int n)
{
    int ans = 0;
    int x=1;
    int LastDigit;

    while(x<=n)
        x *= 2;
    x /= 2;

    while(x>0)
    {
        LastDigit = n/x;
        n -= x*LastDigit;
        x /= 2;
        ans = ans*10 + LastDigit;
    }

    return ans;
}

int main (){
    int n;
    cin>>n;

    cout<<d2b(n);

    return 0;
}
