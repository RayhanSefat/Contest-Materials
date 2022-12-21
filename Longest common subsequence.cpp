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

void lcs(string s, string t){
    ll m=s.size(), n=t.size();
    ll L[m+1][n+1];

    for(ll i=0; i<=m; i++){
        for(ll j=0; j<=n; j++){
            if(i==0 or j==0) L[i][j]=0;
            else if(s[i-1]==t[j-1]) L[i][j]=L[i-1][j-1]+1;
            else L[i][j]=max(L[i-1][j], L[i][j-1]);
        }
    }

    ll index=L[m][n];
    //cerr<<index<<"\n";
    char res[index+1];
    res[index]='\0';

    ll i=m, j=n;
    while(i>0 and j>0){
        if(s[i-1]==t[j-1]){
            res[index-1]=s[i-1];
            i--;
            j--;
            index--;
        }else if(L[i-1][j]>L[i][j-1]) i--;
        else j--;
    }

    cout<<res<<"\n";
}

void solve(){
    string s, t;

    cin>>s>>t;
    lcs(s, t);

    return;
}

int main(){
    //freopen("input1.txt", "r", stdin);
    //ll t; cin>>t; while(t--)
                        solve();

    return 0;
}
