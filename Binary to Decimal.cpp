#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int b2d(int n)
{
    int ans = 0;
    int x=1;

    while(n)
    {
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /= 10;
    }

    return ans;
}

int main (){
    int n;
    cin>>n;

    cout<<b2d(n);

    return 0;
}
