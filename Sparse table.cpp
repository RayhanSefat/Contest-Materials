/*Rabbi Zidni Eilmaa*/

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

typedef  long long int          ll;
typedef  long double            ld;
typedef  string                 str;
typedef  vector<ll>             vll;
typedef  vector<string>         vs;
typedef  vector<pair<int,int>>  vpi;
typedef  set<ll>                sll;
typedef  map<ll,ll>             mll;
typedef  pair<int,int>          pint;
typedef  pair<ll,ll>            pll;
double   pi = 3.14159265359;
#define  debug(x)              cerr<<#x<<" "<<x<<endl;
#define  loop                   for(ll i=1; i<=n; i++)

ll n, q;
ll a[25][200003];

void solve(void){
    cin>>n>>q;
    loop cin>>a[0][i];


    // Building up the sparse table
    ll limit=n;
    ll j=1;
    while(j<=25){
        ll range=1<<(j-1);
        if(range>n) break;

        for(ll i=1; i<limit; i++){
            a[j][i] = min(a[j-1][i], a[j-1][i+range]);
        }

        limit-=2*range;
        j++;
    }


    // Doing range query for q times
    while(q--){
        ll l, r; cin>>l>>r;

        stack<ll>parts;
        ll temp=0;

        ll range=r-l+1;

        while(range>0){
            if(range%2==1){
                parts.push(temp);
            }

            range/=2;
            temp++;
        }

        ll ans=a[0][l];

        while(!parts.empty()){
            ll x=parts.top();
            parts.pop();

            ans=min(ans, a[x][l]);
            l+=1<<x;
        }

        cout<<ans<<endl;
    }

    printf("\n");
    return;
}

int main(){
    //freopen("input1.txt", "r", stdin);
    //ll t; cin>>t; while(t--)
                        solve();

    return 0;
}
