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

    vector<pair<int,char>> s(3);
    s[0].second='A'; s[1].second='B'; s[2].second='C';
    for(int i=0;i<3;i++){ cin>>s[i].first; }
    sort(s.begin(),s.end());
    cout<<s[1].second<<endl;
    return 0;
}