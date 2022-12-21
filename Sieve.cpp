/*Rabbi Zidni Eilmaa*/

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

typedef  long long int          ll;
typedef  long double            ld;
typedef  string                 str;
typedef  vector<ll>             vll;
typedef  vector<string>         vs;
typedef  vector<pair<int,int> >  vpi;
typedef  set<ll>                s;
typedef  map<ll,ll>             mll;
typedef  pair<int,int>          pint;
typedef  pair<ll,ll>            pll;
double   pi = 3.14159265359;
#define  FOR(n,v)              for(ll i=0;i<n;i++) cin>>v[i];
#define  REP(i,n)              for(int i=0;i<n;i++)
#define  pb                    push_back
#define  Mp                    make_pair
#define  nl                    cout<<"\n";
#define  sort_a(v)             sort(v,v+n);
#define  msort(a)              sort(a+1, a+n+1);
#define  loop                  for(ll i=1; i<=n; i++)
#define  all(v)               v.begin(),v.end()
#define  sort_d(v)             sort(v.begin(),v.end(),greater<ll>() );
#define  input                 for(ll i=1; i<=n; i++)cin>>a[i]
#define  py                    printf("YES\n");
#define  pn                    printf("NO\n");
#define  pmone                 printf("-1\n");
#define  debug(x)              cerr<<#x<<" "<<x<<endl;

bitset<1000005>siv;
void sieve(ll n){
    for(ll i=4; i<=n; i+=2) siv[i]=1;

    for(ll i=3; i*i<=n; i+=2){
        if(siv[i]==0){
            for(ll j=i*i; j<=n; j+=2*i){
                siv[j]=1;
            }
        }
    }

    return;
}

void solve(void){
    ll n;
    cin>>n;
    cout<<siv[n]<<endl;

    return;
}

int main(){
    sieve(100000);
    ll t; cin>>t; while(t--)
                        solve();

    return 0;
}
