#include<bits/stdc++.h>
#define isin(i,j,h,w) (!((i<0||i>=h||j<0||j>=w))?true:false)
using namespace std;
using let=long long;
using P = pair<let,let>;
using vecs = vector<string>;
using vec1 = vector<let>;
using vec2 = vector<vector<let>>;
using Graph = vector<vector<let>>;

vec1 dx4={1,0,-1,0};
vec1 dy4={0,1,0,-1};
vec1 dx8={1,1,1,0,0,-1,-1,-1};
vec1 dy8={1,0,-1,1,-1,1,0,-1};
int main(void){

    let n,m,p,q;
    cin>>n>>m;
    vec2 mp(n,vec1(m+1,-1));
    for(int i=0;i<n;i++){
        let k,a;
        cin>>k;
        for(int j=0;j<k;j++){
            let x;
            cin>>x;
            mp[i][x]=1;
        }
    }
    cin>>p>>q;
    vec1 b(p);
    let ans=0;
    for(int i=0;i<p;i++) cin>>b[i];
    for(int i=0;i<n;i++){
        let res=0;
        for(int j=0;j<p;j++){
            if(mp[i][b[j]]==1) res++;
        }
        if(res>=q) ans++;
    }
    cout<<ans<<endl;
    return 0;
}