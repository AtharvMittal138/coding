#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>>t;
while(t--){
int n,z=0,o=0;
cin >> n;
string s;
cin >> s;
for(int i=0;i<n;i++)
{
    if(s[i]=='0')
    z++;
}
int arr[z],j=0;
for(int i=0;i<z;i++)
{
    if(s[i]=='1')
    {
        o++;
        arr[j]=i;
        j++;
    }
}
for(int i=z;i<n;i++)
{
    if(s[i]=='0')
    {
        arr[j]=i;
        j++;
    }
}
if(z==0 || z==n)
cout<<"Bob\n";
else
{
    cout<<"Alice\n";
    cout<<j<<"\n";
    for(int i=0;i<j;i++)
    cout<<arr[i]+1;
    printf("\n");
}
}

return 0;
}