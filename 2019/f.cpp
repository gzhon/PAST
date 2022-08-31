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
    let n;
    cin>>n;
    str s;
    cin>>s;
    vec1 ans(n),res;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            ans[i]=i+1;
        }
        else {
            res.push_back(i+1);
        }
    }
    int p=1,size=res.size();
    if(p==size) goto end;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            if(i+1!=res[p]) ans[i]=res[p++];
            else goto end;
        }
        if(p==size) p=0;
    }
    for(auto i:ans) cout<<i<<" ";
    puts("");
    return 0;
    end:;
    cout<<"-1"<<endl;
    return 0;
}