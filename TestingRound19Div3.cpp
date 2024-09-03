/*
//C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    string t;
    cin>>t;
    ll n=t.size(); int l=n/2+1;
    string x="";
    for(ll i=l; i<n; i++){
        if(t.substr(0,i)==t.substr(n-i,i)){
            x=t.substr(0,i);
            break;
        }
    }
    if(x=="")cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<x<<endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
*/
/*
//B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll a,b;
    cin>>a>>b;
    if(abs(a-b)==2){
        cout<<2<<endl;
    }else if(a==1||b==1){
        cout<<3<<endl;
    }else{
        cout<<1<<endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
*/
/*
//A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0; i<n; i++)cin>>a[i];
    ll ans=0;
    for(ll i=0; i<n; i++){
        if(i%2==0){
            ans+=a[i];
        }else{
            ans-=a[i];
        }
    }
    cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
*/