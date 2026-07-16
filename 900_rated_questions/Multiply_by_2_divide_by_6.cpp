#include <bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;
  while(t--){
    int n; 
    cin>>n;
    int count_of_2=0;
    int count_of_3=0;
    while(n>0 && n%2==0){
       count_of_2++;
       n/=2;
    }
    while(n>0 && n%3==0){
         count_of_3++;
         n/=3;
      }
    if(n>1 || count_of_2>count_of_3) cout<<-1<<endl;
    else{
      cout<<count_of_3+(count_of_3-count_of_2)<<endl;
    }
 }
  return 0;
}
