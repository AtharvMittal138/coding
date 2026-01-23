#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>>t;
while(t--){
int n;
cin >> n;
int arr[n];
int arr2[n];
for(int i=0;i<n;i++)
{ 
cin >> arr[i];
if(i%2==0)
arr2[i]=0;
else
arr2[i]=1;
}
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        { 
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
         temp=arr2[j];
        arr2[j]=arr2[j+1];
        arr2[j+1]=temp;
        }
    }
}
int count=0;
for(int i=0;i<n-1;i++)
{
    if(arr2[i]==arr2[i+1])
    count++;
}
if(count!=0)
cout <<"NO\n";
else
cout <<"YES\n";
}
}