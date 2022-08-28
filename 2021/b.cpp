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

    let n,a,b,ans=0;
    vec1 m={500,100,50,10,5,1};
    vec1 q={0,0,1,0,1,0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        let s=b-a;
        for(int i=0;i<6;i++){
            while(s>=m[i]){
                s-=m[i];
                ans+=q[i];
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}