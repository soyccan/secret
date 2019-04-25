#include <bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k,q;
    cin>>n>>k>>q;
    vector<pair<int,int> >intv,last;
    for(int i=0;i<k;i++){
        int f,t;
        cin>>f>>t;
        t=f+t-1;
        intv.push_back({f,t});
    }
    sort(intv.begin(),intv.end());
    int l=intv[0].first,r=intv[0].second;
    for(int i=1;i<k;i++){
        if(intv[i].first>r){
            last.push_back({l,r});
            l=intv[i].first,r=intv[i].second;
        }else{
            r=max(r,intv[i].second);
        }
    }
    last.push_back({l,r});
    for(int i=0;i<q;i++){
        int grid;
        cin>>grid;
        pair<int,int> re;
        vector<pair<int,int> >::iterator pt
            =lower_bound(intv.begin(),intv.end(),pair<int,int>(grid,INT_MAX));
        if(pt==intv.begin()){
            cout<<0<<"\n";
            continue;
        }else{
            re=*(pt-1);
        }
        if(re.second>=grid&&re.first<=grid){
            cout<<1<<"\n";
        }else{
            cout<<0<<"\n";
        }
    }
}
