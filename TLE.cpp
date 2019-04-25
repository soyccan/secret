#include <bits/stdc++.h>
#define int long long
#define MS(s,v) memset(s,v,sizeof(s))
#define FOR(i,st,en) for (int i=st; i<=en; ++i)
#define RFOR(i,st,en) for (int i=st; i>=en; --i)
using namespace std;
const int N = 1e8+5;
int n,k,q,x,w;
bool A[N];
main() {
#ifndef XD
    ios::sync_with_stdio(0);
    cin.tie(0);
#endif
    while (cin>>n>>k>>q) {
        MS(A,0);
        while (k--) {
            cin>>x>>w;
            FOR(j,x,x+w-1) A[j]=1;
        }
        while (q--) {
            cin>>x;
            cout<<A[x]<<'\n';
        }
    }
    return 0;
}
