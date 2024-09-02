/*
//D
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    string s;
    cin>>s;
    string t;
    cin>>t;
    int i=0; int j=0; string ans="";
    while(i<s.length() && j<t.length()){
        if(s[i]==t[j] || s[i]=='?'){
            ans+=t[j];
            j++;
            i++;
        }else{
            ans+=s[i];
            i++;
        }
    }
    if(i==s.length() && j<t.length()){
        cout<<"NO"<<endl;
        return;
    }
    for(int k=i; k<s.length(); k++){
        if(s[k]=='?'){
            ans+="a";
        }else{
            ans+=s[k];
        }
    }
    if(ans.length()==s.length()){
        cout<<"YES"<<endl;
        cout<<ans<<endl;
    }
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
/*
//C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n,s,m;
    cin>>n>>s>>m;
    vector<pair<ll,ll>>a;
    a.push_back({0,0});
    ll maxlen=0;
    for(int i=0; i<n; i++){
        ll l,r;
        cin>>l>>r;
        a.push_back({l,r});
    }
    a.push_back({m,m});
    sort(a.begin(),a.end());
    for(int i=1; i<a.size(); i++){
        maxlen=max(maxlen,a[i].first-a[i-1].second);
    }
    if(maxlen>=s){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
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
/*
//B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    ll c=0;
    if((a1>b1 && a2>=b2)||(a1>=b1 && a2>b2)){
        c++;
    }
    if((a1>b2 && a2>=b1)||(a1>=b2 && a2>b1)){
        c++;
    }
    cout<<2*c<<endl;
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
/*
//A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    string n;
    cin>>n;
    ll sum=(n[0]-'0')+(n[1]-'0');
    cout<<sum<<endl;
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