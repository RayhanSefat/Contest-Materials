#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pi;
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define forn(i, n) for (int i = 1; i <= int(n); i++)
#define sz(v) (int)v.size()
ll const mx=1e6+5;
int sv[mx+5];
int cnt[mx+5];

ll gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

void siv()
{
    for(ll i=2;i<mx;i++)
    {
        if(sv[i]<=1)
        for(ll j=i*2LL;j<mx;j+=i)
        {
            sv[j]=max(sv[j], sv[i]+1);
        }
        if(i<=100) cerr<<i<<" "<<sv[i]<<"\n";
    }
    for(int i=1;i<mx;i++)
    {
        cnt[i]=cnt[i-1];
        if(sv[i]<=1) cnt[i]++;
        if(i<=100) cerr<<i<<" "<<cnt[i]<<"\n";
    }
}

void solve()
{
    ll N; cin >> N;
    ll num=cnt[N]; ll den=N;
    ll g=gcd(num, den);
    num/=g; den/=g;
    cout << num << "/" << den << "\n";
}

int main()
{
    siv();
    int T; T=1;
    cin >> T;
    forn(i, T)
    {
        cout << "Case " << i << ": ";
        solve();
    }
}
