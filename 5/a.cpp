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
vec1 dx8={1,0,1,0,0,-1,-1,-1};
vec1 dy8={1,0,-1,1,-1,1,0,-1};
int main(void){

    bool o=false;
    bool x=false;
    string s;
    cin>>s;
    for(int i=2;i<=4;i++){
        if(s[i]=='o'&&s[i-1]=='o'&&s[i-2]=='o') o=true;
        if(s[i]=='x'&&s[i-1]=='x'&&s[i-2]=='x') x=true;
    }
    string ans;
    if(x) ans="x";
    else if(o) ans="o";
    else ans="draw";
    cout<<ans<<endl;
    return 0;
}