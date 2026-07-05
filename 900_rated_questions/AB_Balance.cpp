#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int n=s.size();
        if(s[0]!=s[n-1]){
            s[0]=s[n-1];
        }
        
        for(int i=0;i<n;i++){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}