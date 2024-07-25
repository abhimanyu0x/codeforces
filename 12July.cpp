// OnlyPluses
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int a; int b; int c;
        cin >> a >> b >> c;
        for(int i=0; i<5; i++){
            if(c<=a && c<=b){
                c++;
            }else if(b<=a && b<= c){
                b++;
            }else{
                a++;
            }
        }
        cout<<a*b*c<<endl;
    }
    return 0;
}

/*
// Gorilla&Permutation
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

*/

/*
// AngryMonk

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

*/