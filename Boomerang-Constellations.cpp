#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>

#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;
int x[2001],y[2001];

int dis(int i,int j){
    int d1 = (x[i]-x[j])*(x[i]-x[j]);
    int d2 = (y[i]-y[j])*(y[i]-y[j]);
    return d1+d2;
}

int main(){

int i,j,k,t,n,s=1;
cin>>t;
string st;
vector<int> v;
while(t--){
    cin>>n;
    st = "";
    int c=0;
    FOR(i,n){
        cin>>x[i]>>y[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                c += (dis(i,j)==dis(j,k)) +
                (dis(i,j)==dis(i,k)) +
                (dis(i,k)==dis(j,k));
            }
        }
    }
    v.push_back(s);
    v.push_back(c);
    s++;
}
for(i=0;i<v.size();i+=2){
    cout<<"Case #"<<v[i]<<": "<<v[i+1]<<endl;
}
return 0;
}






