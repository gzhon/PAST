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
int main(void){

    bool flg=true;
    string s;
    cin>>s;
    if(s[3]=='-'){
        for(int i=0;i<8;i++){
            if(i!=3){
                let x=s[i]-'0';
                bool f=false;
                for(int j=0;j<=9;j++){
                    //cout<<x<<" "<<j<<endl;
                    if(j==x) f=true;
                }
                if(f==false){ flg=false; goto end;}
            }
        }
    }
    else flg=false;
    end:;
    cout<<(flg?"Yes":"No")<<endl;
}