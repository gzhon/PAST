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
    cin>>n;
    //生数字,0の個数
    vector<pair<let,let>> v(n);
    for(int i=0;i<n;i++){
        let q=0;
        string s,m;
        cin>>s;
        bool f=true;
        for(int j=0;j<s.size();j++){
            if(s[j]!='0'){
                f=false;
            }
            else { q++; }
        }
        v[i].first=i;
        v[i].second=q;
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}