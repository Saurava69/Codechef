#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--)
{
int n,m;
cin>>n>>m;
if(m>=n)
{
  cout<<n<<"\n";
}
else if(m<n)
cout<<n+(n-m)<<"\n";
}
    return 0;
}