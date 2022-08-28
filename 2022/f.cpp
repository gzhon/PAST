#include<bits/stdc++.h>
#define isin(i,j,h,w) (!((i<0||i>=h||j<0||j>=w))?true:false)
using namespace std;
using let=long long;
using P = pair<let,let>;
using vecs = vector<string>;
using vec1 = vector<let>;
using vec2 = vector<vector<let>>;
using Graph = vector<vector<let>>;
vec1 dx={1,0,-1,0};
vec1 dy={0,1,0,-1};
int main(void){

    let h,w,n;
    bool flg=true;
    cin>>h>>w>>n;
    vec1 c(n);
    vec2 maps(h,vec1(w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>maps[i][j];
        }
    }
    for(int i=0;i<n;i++) cin>>c[i];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            for(int k=0;k<4;k++){
                int vx=i+dx[k];
                int vy=j+dy[k];
                if(isin(vx,vy,h,w)) if(maps[i][j]!=maps[vx][vy]){
                    if(c[maps[i][j]-1]==c[maps[vx][vy]-1]){
                        flg=false; break;
                    }
                }
            }
        }
    }
    if(flg) puts("Yes");
    else puts("No");
    return 0;
}