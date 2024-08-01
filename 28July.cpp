//B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    vector<ll>b(n);
    for(int i=0;i<n-1;i++){
        cin>>b[i];
    }
    vector<ll>temp;
    temp.push_back(b[0]);
    for(int i=0;i<n-2;i++){
        temp.push_back(b[i]|b[i+1]);
    }
    temp.push_back(b[n-2]);
    for(int i=0;i<temp.size()-1;i++){
        ll x=temp[i]&temp[i+1];
        if(x!=b[i]){
            cout<<-1<<endl;
            return;
        }
    }
    for(auto it: temp){
        cout<<it<<" ";
    }
    cout<<endl;
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

/*
//A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll ans=0;
    for(ll i=0; i<n; i+=2){
        if(ans<a[i]){
            ans=a[i];
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