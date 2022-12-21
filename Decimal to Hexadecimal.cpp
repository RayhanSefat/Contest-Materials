#include<bits/stdc++.h>
#include<string.h>
using namespace std;

string d2b(int n)
{
    string ans = "";
    int x=1;
    int LastDigit;

    while(x<=n)
        x *= 16;
    x /= 16;

    while(x>0)
    {
        LastDigit = n/x;
        n -= x*LastDigit;
        x /= 16;

        if(LastDigit<=9)
            ans = ans + to_string(LastDigit);
        else
        {
            char c = 'A' + LastDigit - 10;
            ans.push_back(c);
        }
    }

    return ans;
}

int main (){
    int n;
    cin>>n;

    cout<<d2b(n);

    return 0;
}
