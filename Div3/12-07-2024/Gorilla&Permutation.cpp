#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int i=1;
        while(n>m || i<=m){
            if(n>m){
                cout<<n<<" ";
                n--;
            }else{
                cout<<i<<" ";
                i++;
            }
        }
        cout<<endl;
    }
    return 0;
}