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
    let a=0,b=0;
    let x,y;
    cin>>x>>y;
    for(int i=1;i*i<=x;++i){
        if(x%i==0){
            a++;
            if(x/i!=i) a++;
        }
    }
    for(int i=1;i*i<=y;++i){
        if(y%i==0){
            b++;
            if(y/i!=i) b++;
        }
    }
    if(a==b) puts("Z");
    else if(a<b) puts("Y");
    else puts("X");
    return 0;
}