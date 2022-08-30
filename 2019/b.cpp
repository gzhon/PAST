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
    let n,m;
    cin>>n>>m;
    vec1 ans;
    vector<pair<let,bool>> a(n),b(m);
    for(int i=0;i<n;i++){cin>>a[i].first; a[i].second=true;}
    for(int i=0;i<m;i++){cin>>b[i].first; b[i].second=true;}
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]&&a[i].second==true&&b[j].second==true){
                ans.push_back(a[i].first);
                a[i].second=false;
                b[j].second=false;
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(auto i:ans) cout<<i<<" ";
    return 0;
}