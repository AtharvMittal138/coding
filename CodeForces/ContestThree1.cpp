#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>>t;
while(t--){
int n,h,l,k;
cin>>n;
cin>>h;
cin>>l;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int m= max(h,l),a=0,z=0;
for(int i=0;i<n;i=z)
{
    z++;
    if(arr[i]>m)
    { 
        a++;
    for(int j=i;j<n-1;j++)
    {
        arr[j]=arr[j+1];
    }
    z=0;
    n=n-a;
    a=0;
    }
    if(n==0)
    break;

}
if(n%2==0)
k=n/2;
else
k=(n-1)/2;
int sum;
int nw[k][2];
int count=0;
for(int i=0;i<n;i++)
{
    if(arr[i]<=min(h,l))
    {
        nw[i][0]=arr[i];
        arr[i]=0;
        count++;
    }
    if(count==k)
    break;
}
int ans=0;
for(int i=0;i<n;i++)
{

    if(arr[i]!=0)
    {
        nw[i][1] = arr[i];
        ans++;
    }
    if(ans==count)
    break;
    
}
if(n==0)
cout<< 0<<"\n";
else
cout<<ans<<"\n";
}

return 0;
}