#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int>v;
        for(int i=0; i<k; i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0; i<k-1; i++){
            if(v[i]==1){
                ans=ans+1;
            }else{
                ans=ans+(v[i]-1)+v[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}