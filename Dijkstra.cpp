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
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)))
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)))

ll cs=0;

void init(){

}

void solve(){
    ll n, m; cin>>n>>m;
    vector<pll> G[n+4];

    while(m--){
        ll u, v, w; cin>>u>>v>>w;
        G[u].push_back({v, w});
        G[v].push_back({u, w});
    }

    ll source=1;

    //printf("Case %lld:\n", ++cs);

    ll INF = 1e9+7;

    vll distance(n+4, INF);
    vll visited(n+4, 0);
    vll path[n+4];

    set<pll>st;

    st.insert({0, source});
    distance[source] = 0;

    while(!st.empty()){
        auto node = *st.begin();
        ll u=node.second;
        ll currDis = node.first;

        st.erase(st.begin());
        if(visited[u]==1) continue;
        //cerr<<"Visited "<<u<<" "<<currDis<<"\n";
        visited[u]=1;

        for(pll child : G[u]){
            ll v=child.first;
            ll w=child.second;

            if(distance[u]+w < distance[v]){
                distance[v] = distance[u]+w;
                //cerr<<"Inserted: "<<v<<" "<<distance[v]<<"\n";
                st.insert({distance[v], v});

                path[v].clear();

                for(auto a:path[u]) path[v].push_back(a);
                path[v].push_back(u);
            }
        }
    }

    for(ll a: path[n]) cout<<a<<" ";
    cout<<n;

    return;
}

int main(){
    //freopen("input1.txt", "r", stdin);

//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    init();
    //ll t; cin>>t; getchar(); while(t--)
                        solve();

    return 0;
}
