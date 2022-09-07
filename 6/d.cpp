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
vec1 dx8={1,0,1,0,0,-1,-1,-1};
vec1 dy8={1,0,-1,1,-1,1,0,-1};
int main(void){

    let n,k,x;
    cin>>n>>k;
    vec1 res(n,0),ans;
    res[0]=0;
    for(int i=1;i<=n;i++){
        cin>>x;
        res[i]=res[i-1]+x; //O(1)で＼(^o^)／ｵﾜㇼ
        if(i>=k) ans.push_back(res[i]-res[i-k]);
    }
    for(auto i:ans) cout<<i<<endl;
    return 0;
}