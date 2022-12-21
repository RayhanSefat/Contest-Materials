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

struct edge{
    int u, v, w;
};

bool cmp1(edge A, edge B){
    return A.w < B.w;
}

bool cmp2(edge A, edge B){
    return A.w > B.w;
}

vector<edge> G;

int n;
int parent[105];

int Find(int u){
    if(u==parent[u]) return u;
    return parent[u] = Find( parent[u] );
}

//Find minimum spanning tree
ll minST(){
    for(int i=0; i<=n; i++) parent[i]=i;

    ll cost=0;

    for(auto ed:G){
        int u=ed.u;
        int v=ed.v;
        int w=ed.w;

        int p=Find(u);
        int q=Find(v);
        if(p!=q){
            cost+=w;
            parent[q]=p;
        }
    }

    return cost;
}

void solve(){
    G.clear();
    cin>>n;
    while(true){
        ll u, v, w; cin>>u>>v>>w;
        if(u==0 and v==0 and w==0) break;
        G.push_back({u, v, w});
    }

    printf("Case %lld: ", ++cs);

    sort(G.begin(), G.end(), cmp1);
    ll cost1 = minST();
    sort(G.begin(), G.end(), cmp2);
    ll cost2 = minST();

    ll cost = cost1 + cost2;

    (cost%2==0)? cout<<cost/2<<"\n":cout<<cost<<"/2\n";

    return;
}

int main(){
    //freopen("input1.txt", "r", stdin);

//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    init();
    ll t; cin>>t; getchar(); while(t--)
                        solve();

    return 0;
}
