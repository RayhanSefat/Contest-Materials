/*Rabbi Zidni Eilmaa*/

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

typedef  long long int          ll;
typedef  long double            ld;
typedef  string                 str;
typedef  vector<ll>             vll;
typedef  vector<string>         vs;
typedef  vector<pair<ll, ll>>   vpl;
typedef  set<ll>                sll;
typedef  map<ll,ll>             mll;
typedef  pair<int,int>          pint;
typedef  pair<ll,ll>            pll;
double   pi = 3.14159265359;
#define  debug(x)              cerr<<#x<<" "<<x<<endl;
#define  loop                   for(ll i=1; i<=n; i++)
#define  all(a)                 (a).begin(), (a).end()
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)))
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)))

const ll MOD = 1e9 + 7;
const ll MSS = 1e7 + 10;
vector <ll> Sie;
ll Spf[MSS + 7];

void init() {
    for (ll i = 2; i < MSS; ++i) {
        if (Spf[i] == 0) {
            Spf[i] = i;
            Sie.push_back(i);
        }
        for (ll j = 0; j < Sie.size() && i * Sie[j] <= MSS && Sie[j] <= Spf[i]; ++j) {
            Spf[i * Sie[j]] = Sie[j];
        }
    }
}

void solve(){


    return;
}

int main(){
    //freopen("input1.txt", "r", stdin);

//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    init();
    ll t; cin>>t; while(t--)
                        solve();

    return 0;
}
