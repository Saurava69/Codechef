#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--)
    {
    int M,N,K;
    cin>>M>>N>>K;
    if(N+K<=M)
    cout<<"Yes\n";
    else
    cout<<"No\n";
    }
     return 0;
}