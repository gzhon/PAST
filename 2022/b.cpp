#include<bits/stdc++.h>
using namespace std;
using let=long long;
using P = pair<int,int>;
using vecs = vector<string>;
using vec1 = vector<int>;
using vec2 = vector<vector<int>>;
using Graph = vector<vector<int>>;

vec1 dxs={1,0,-1,0};
vec1 dys={0,1,0,-1};
int main(void){

    int a,b,x,y;
    cin>>a>>b>>x>>y;
    cout<<min(x/a,y/b)<<endl;
    return 0;
}