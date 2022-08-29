#include<bits/stdc++.h>
#define isin(i,j,h,w) (!((i<0||i>=h||j<0||j>=w))?true:false)
using namespace std;
using let=long long;
using P = pair<let,let>;
using T = tuple<let,let>;
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
    let a,b;
    vecs s(4);
    cin>>a>>b;
    vec2 f(10,vec1(10,0));
    for(int i=0;i<3;i++) cin>>s[i];
    queue<T> q;
    q.push({a,b}); f[a][b]=1;
    while(!q.empty()){
        int x,y;
        tie(x,y)=q.front(); q.pop();
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(s[i][j]=='#'){
                    if(isin(x+i-1,y+j-1,10,10)){
                        if(f[x+i-1][y+j-1]==0)q.push({x+i-1,y+j-1});
                        f[x+i-1][y+j-1]=1;
                    }
                }
            }
        }
    }
    let ans=0;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            ans+=f[i][j];
        }
    }
    cout<<ans<<endl;
    return 0;
}