#include<bits/stdc++.h>
#define isin(i,j,h,w) (!((i<0||i>=h||j<0||j>=w))?true:false)
using namespace std;
using let=long long;
using str=string;
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
    let u,n,a,ct=0;
    cin>>n;
    priority_queue<let> q;
    for(int i=0;i<n;i++){
        cin>>a;
        let xt=0;
        while(a%2==0){ a/=2; xt++; }
        q.push(a);
        cout<<a<<" ct:"<<ct<<" xt:"<<xt<<endl;
        ct=max(ct,xt);
    }
    cout<<q.top()*ct<<endl;
    return 0;
}