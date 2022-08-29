#include<bits/stdc++.h>
#define isin(i,j,h,w) (!((i<0||i>=h||j<0||j>=w))?true:false)
using namespace std;
using let=long long;
using P = pair<let,let>;
using vecs = vector<string>;
using vec1 = vector<let>;
using vec2 = vector<vector<let>>;
using Graph = vector<vector<let>>;
vec1 dx={1,0,-1,0};
vec1 dy={0,1,0,-1};
int main(void){

    let n;
    cin>>n;
    vector<let> a(n),b(n);
    using X=tuple<let,let,let>; X tp[n+1];
    for(int i=0;i<n;i++){ cin>>a[i]; }
    for(int i=0;i<n;i++){ cin>>b[i]; }
    for(int i=0;i<n;i++) tp[i]={a[i]+b[i],a[i],-i};
    sort(tp,tp+n,greater<X>());
    for(int i=0;i<n;i++){
        let ta,tb,tc;
        tie(ta,tb,tc)=tp[i];
        cout<<-tc+1<<" ";
    }
    return 0;
}