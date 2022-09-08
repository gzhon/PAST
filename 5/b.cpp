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

    let n;
    string s,ans;
    cin>>n>>s;
    map<char,bool> mp;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<ans.size();j++){
            if(s[i]==ans[j]){
                ans.erase(ans.begin()+j);
            }
        }
        ans+=s[i];
    }
    cout<<ans<<endl;
    return 0;
}