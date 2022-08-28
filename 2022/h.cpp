#include<bits/stdc++.h>
#define isin(i,j,h,w) (!((i<0||i>=h||j<0||j>=w))?true:false)
using namespace std;
using let=long long;
using P = pair<int,int>;
using vecs = vector<string>;
using vec1 = vector<int>;
using vec2 = vector<vector<int>>;
using Graph = vector<vector<int>>;

vec1 dx={1,0,-1,0};
vec1 dy={0,1,0,-1};
struct UnionFind
{   
    vec1 par,size;
    UnionFind(int n):par(n,-1),size(n,1) {
    }
    //根
    int root(int q){
        if(par[q]==-1) return q;
        else {
            return par[q]=root(par[q]);
        }
    }
    //A,Bは同一か?
    bool issame(int a,int b){
        return root(a)==root(b);
    }
    //Aを含むやつとBを含むやつくっっける
    bool unite(int a,int b){
        a=root(a);
        b=root(b);
        if(a==b) return false;
        if(size[a]<size[b]){
            swap(a,b);
        }
        par[b]=a;
        size[a]+=size[b];
        return true;
    }
    //Qを含むやつの大きさ
    int w_size(int q){ return size[root(q)]; }
};
int main(void)
{
    let n,q,t,u,v;
    cin>>n>>q;
    Graph G(n);
    UnionFind uf(n);
    for(let i=0;i<q;i++){
        cin>>t;
        if(t==1){
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
            uf.unite(u,v);
        }
        else {
            cin>>u;
            cout<<uf.root(u);
        }
    }
    return 0;  
}