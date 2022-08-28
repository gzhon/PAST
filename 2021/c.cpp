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

    let n;
    map<char,int> mp;
    cin>>n;
    for(int i=0;i<n;i++){
        char q; string isac;
        cin>>q>>isac;
        if(isac=="AC"&&mp.find(q)==mp.end()){
            mp[q]=i+1;
        }
    }
    for(char i='A';i<='F';i++) cout<<mp[i]<<endl;
    return 0;
}