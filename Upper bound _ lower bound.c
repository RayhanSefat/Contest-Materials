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
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)))
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)))

ll cases=0;

ll lower_bound(ll arr[], ll N, ll X){
	ll mid;
	ll low = 0;
	ll high = N;

	while (low < high) {
		mid = low + (high - low) / 2;

		if (X <= arr[mid]) {
			high = mid;
		}else {
			low = mid + 1;
		}
	}

	if(low < N && arr[low] < X) {
        low++;
	}

	return low;
}

ll upper_bound(ll arr[], ll N, ll X){
	ll mid;
	ll low = 0;
	ll high = N;

	while (low < high) {
		mid = low + (high - low) / 2;

		if (X >= arr[mid]) {
			low = mid + 1;
		}else {
			high = mid;
		}
	}

    if(low < N && arr[low] <= X){
        low++;
	}

	return low;
}

void solve(){
    cases++;
    ll n, q; cin>>n>>q;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }

    printf("Case %lld:\n", cases);

    while(q--){
        ll l, r; cin>>l>>r;

        cout<<upper_bound(a, n, r)-lower_bound(a, n, l)<<endl;
    }

    return;
}

int main(){
    //freopen("input1.txt", "r", stdin);
    ll t; cin>>t; while(t--)
                        solve();

    return 0;
}
