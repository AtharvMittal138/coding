#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin>>t;
while(t--){
 long long s,k,m;
 cin>>s;
 cin>>k;
 cin>>m;
 int up=s;
 int n=m/k;
 int count=0,count2=0;
 for(int i=1;i<=n;i++){
    if (k>=s || count>count2)
    { 
    up=s;
    count2++;
    }
    else
    { 
    up=k;
    count++;
    }
    m=m-k;
 }
 if(up-m <=0 )
 cout<< 0 <<"\n";
 else 
 cout << up-m << "\n";
}
return 0;
}