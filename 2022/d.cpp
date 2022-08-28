#include<bits/stdc++.h>
using namespace std;
using let=long long;
using P = pair<int,int>;
using vecs = vector<string>;
using vec1 = vector<let>;
using vec2 = vector<vector<int>>;
using Graph = vector<vector<int>>;

vec1 dxs={1,0,-1,0};
vec1 dys={0,1,0,-1};
int main(void){

    let t,n,x;
    cin>>t>>n;
    vec1 ans,mx(n,0);
    priority_queue<int> q[n+1];
    for(int i=0;i<t;i++){
        int res=0;
        for(int j=0;j<n;j++){ 
            cin>>x;
            q[j].push(x);
            res+=q[j].top();
        }
        ans.push_back(res);
    }
    for(auto i:ans) cout<<i<<endl;
    return 0;
}