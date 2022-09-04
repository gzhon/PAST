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
    let l,r,q;
    bool f=false;
    string s;
    cin>>s>>l>>r;
    for(int i=0;i<s.size();i++){
        let x=s[i]-'0';
        
    }
    if(s.size()!=1&&s[0]!='0'){
        if(s.size()<=90){
            let x=stoi(s);
            if(l<=x&&x<=r){
                f=true;
            }
        }
    }
    else {
        if(s[0]!=0&&s.size()==1){
            let x=stoi(s);
            if(l<=x&&x<=r){
                f=true;
            }
        }
    }
    if(f) puts("Yes");
    else puts("No");
    return 0;
}