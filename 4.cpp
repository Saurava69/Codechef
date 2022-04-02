#include<bits/stdc++.h>
using namespace std;
bool allCharactersSame(string s)
{
    int n = s.length();
    for (int i = 1; i < n; i++)
        if (s[i] != s[0])
            return false;
 
    return true;
}

int main(){
int t;
cin>>t;
while(t--)
{
 int n,x,y;
 cin>>n>>x>>y;
string s;
cin>>n;
 if (allCharactersSame(s))
 cout<<"0";
 else
 {
if(x>y)
cout<<y;
else if(y>x)
cout<<x;
 }
}

    return 0;
}