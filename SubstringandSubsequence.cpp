#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int m=a.length(); int n=b.length();
        int ans=m+n;
        for(int i=0; i<n; i++){
            int index=i;
            for(int j=0; j<m; j++){
                if(index<n && b[index]==a[j]){
                    index++;
                }
            }
            ans=min(ans,m+n-index+i);
        }
        cout<<ans<<endl;
    }
    return 0;
}