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
int main(void)
{
    let cnt=0,n,k,ans=0;
    cin>>n>>k;
    vec1 c(n),p(n);
    vector<P> q(n);

    vector<bool> f(1e9+1,false);
    for(int i=0;i<n;i++) cin>>q[i].second;
    for(int i=0;i<n;i++) cin>>q[i].first;
    sort(q.begin(),q.end());
    for(int i=0;i<n;i++){
        if(f[q[i].second]==false&&cnt<k){
            ans+=q[i].first;
            f[q[i].second]=true;
            cnt++;
            //cout<<"add"<<q[i].second<<q[i].first<<endl;
        }
    }
    if(cnt<k) puts("-1");
    else cout<<ans<<endl;
    return 0;
}