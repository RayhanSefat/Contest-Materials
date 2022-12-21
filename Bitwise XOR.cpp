#include<bits/stdc++.h>
using namespace std;

long long int d2b(long long int n)
{
    long long int ans = 0;
    long long int x=1;
    long long int LastDigit;

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

//XOR operation starts here...
long long int rev (long long int a)
{
    long long int ans = 0;

    while(a>0)
    {
        long long int digit = a%10;
        ans = ans*10 + digit;
        a /= 10;
    }

    return ans;
}

long long int bitwise_xor(long long int a, long long int b)
{
    long long int ans=0;
    int op=0;
    long long int p=a;
    long long int q=b;

    while(p>0 || q>0)
    {
        long long int a_last_digit = p%10;
        long long int b_last_digit = q%10;

        p /= 10;
        q /= 10;

        if(a_last_digit==0 && b_last_digit==0)
            op++;
        else if(a_last_digit==1 && b_last_digit==1)
            op++;
        else
            break;
    }

    while(a>0 || b>0)
    {
        long long int a_last_digit = a%10;
        long long int b_last_digit = b%10;

        a /= 10;
        b /= 10;

        if(a_last_digit==0 && b_last_digit==0)
            ans = ans*10;
        else if(a_last_digit==1 && b_last_digit==1)
            ans = ans*10;
        else
            ans = ans*10 + 1;
    }

    ans = rev(ans);

    for(int i=1; i<=op; i++)
        ans *= 10;

    return ans;
}
//XOR operation ends here...

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

int main()
{
    long long int a, b;
    cin>>a>>b;

    a=d2b(a);
    b=d2b(b);

    int p = bitwise_xor(a, b);

    p = b2d(p);

    cout<<p;

    return 0;
}
