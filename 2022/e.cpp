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
let kazu(int a,int b,int c){

    int ans=0;
    vec1 kazua(10,0),kazub(10,0),kazuc(10,0);
    if(b<10||c<10) kazua[0]=1; 
    while(a>0){kazua[a%10]=1;a/=10;}
    while(b>0){kazua[b%10]=1;b/=10;}
    while(c>0){kazua[c%10]=1;c/=10;}
    return count(kazua.begin(),kazua.end(),1);
}
int main(void){

    int y,m,d,ay=4000,am=13,ad=23;
    scanf("%d/%d/%d",&y,&m,&d);
    for(int i=y;i<=3000;i++){
        for(int j=1;j<=12;j++){
            for(int k=1;k<=22;k++){
                if(kazu(i,j,k)<=2){
                    if(i>y){
                        ay=i; am=j; ad=k; goto E; 
                    }
                    else {
                        if(j>m){
                            ay=i; am=j; ad=k; goto E;
                        }
                        else {
                            if(k>=d){
                                ay=i; am=j; ad=k; goto E;
                            }
                        }
                    }
                }
            }
        }
    }
    E :;
    printf("%d/%02d/%02d",ay,am,ad);
    return 0;
}