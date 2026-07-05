#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int T;
    cin>>T;
    while(T--){
        long long x,n;
        cin>>x>>n;
        
        if(x%2==0){
            if(n%4==0) x+=0;
            else if(n%4==1) x+=-n; 
            else if(n%4==2) x++;
            else if(n%4==3) x+=n+1;
        }
        else{
            if(n%4==0) x+=0;
            else if(n%4==1) x+=n; 
            else if(n%4==2) x--;
            else if(n%4==3) x+=-(n+1);
        }
        
        cout<<x<<endl;
    }
    return 0;
}