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

    let bk=0,nk=0,bh=0,nh=0,ans=500;
    string s;
    cin>>s;
    bk=s[0]-'0';
    if(bk==6||bk==7||bk==8||bk==9||bk==0) bh=1;
    else bh=0;
    vec1 left={6,7,8,9,0};
    for(int i=1;i<s.size();i++){
        nk=s[i]-'0';
        if(nk==6||nk==7||nk==8||nk==9||nk==0) nh=1;
        else nh=0;
        if(nk==bk) ans+=301;
        else if(nh==bh) ans+=210;
        else ans+=100;
        bk=nk;
        bh=nh;
    }
    cout<<ans<<endl;
    return 0;
}