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
    vecs ans;
    int n,q;
    cin>>n>>q;
    vec1 t(q+2),u(q+2),v(q+2);
    vec1 nu,uv,vq;
    vector<vector<int>> mp(n+1,vector<int>(n+1,0));
    for(int i=0;i<q;i++){
        cin>>t[i]>>u[i]>>v[i];
        UnionFind uf(n+2);
        if(t[i]==2){
            for(int j=0;j<i;j++){
                int x=u[j],y=v[j];
                if(x<y) swap(x,y);
                if(mp[x][y]==1&&t[j]==1){ uf.unite(x,y);}
            }
            if(uf.issame(u[i],v[i])){
                ans.push_back("Yes");
            }
            else ans.push_back("No");
        }
        else{
            int x=u[i],y=v[i];
            if(x<y) swap(x,y);
            mp[x][y]=mp[x][y]^1;
        }
    }
    for(auto i:ans) cout<<i<<endl;
    return 0;
}