#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   while(n>0)
  {
      int x,y;
     cin>>x>>y;
    if((x-y)>=0){
        cout<<(x-y);
    }
    else if((x-y)<0){
        cout<<(y-x);
    }
    n--;
  }
  
     return 0;
}