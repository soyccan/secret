#include <bits/stdc++.h>
#define int long long
#define MS(s,v) memset(s,v,sizeof(s))
#define FOR(i,st,en) for (int i=st; i<=en; ++i)
#define RFOR(i,st,en) for (int i=st; i>=en; --i)
using namespace std;
const int N = 1e6+5;
int n,k,q,v;
int x[N],w[N];
bool find(int v) {
    int i=upper_bound(x,x+k,v)-x-1;
    if (i<0 || i>=k) return 0; //// when no found
    return x[i]<=v && v<x[i]+w[i];
}
main() {
#ifndef XD
    ios::sync_with_stdio(0);
    cin.tie(0);
#endif
    while (cin>>n>>k>>q) {
        FOR(i,0,k-1) {
            cin>>x[i]>>w[i];
            if (i>0 && x[i]+w[i]<x[i-1]+w[i-1]) w[i]=x[i-1]+w[i-1]-x[i];
        }
        while (q--) {
            cin>>v;
            cout<<find(v)<<'\n';
        }
    }
    return 0;
}
