#include <bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;
  while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b || (a==b && c%2==1)) cout<<"first"<<endl;
    else if(b>a || (a==b && c%2==0)) cout<<"second"<<endl;
  }
  return 0;
}
