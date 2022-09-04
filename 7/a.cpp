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
    let l=0,r=0,cnt=0;
    string s;
    cin>>s;
    for(int i=0;i<=13;i+=2){
        let x=s[i]-'0';
        cnt+=x;
    }
    cnt*=3;
    for(int i=1;i<=13;i+=2){
        let x=s[i]-'0';
        cnt+=x;
    }
    let q=s[14]-'0';
    if(cnt%10==q) puts("Yes");
    else puts("No");
    return 0;
}