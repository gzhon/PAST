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
    let n;
    bool flg=false;
    cin>>n;
    vector<pair<int,int>> v(n);
    let i=0;
    input:;
    let d,s,t;
    cin>>d>>s>>t;
    v[i]={s+d*24,t+d*24};
    i++;
    if(i!=n) goto input;
    sort(v.begin(),v.end());
    i=1;
    check:;
    if(v[i].first<v[i-1].second) goto end;
    i++;
    if(i!=n) goto check;
    cout<<"No"<<endl;
    return 0;
    end:;
    cout<<"Yes"<<endl;
    return 0;
}