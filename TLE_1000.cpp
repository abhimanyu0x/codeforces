#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    vector<ll>s(n);
    vector<ll>ans;
    ll index=0;
    unordered_map<ll,ll>freq_of_size;
    for(ll i=0; i<n; i++){
        cin>>s[i];
        freq_of_size[s[i]]++;
    }
    for(auto i:freq_of_size){
        if(i.second==1){
            cout<<-1<<endl;
            return;
        }
    }
    for(ll i=1; i<n; i++){
        if(s[i-1]==s[i]){
            ans.push_back(i+1);
        }else{
            ans.push_back(index+1);
            index=i;
        }
    }
    ans.push_back(index+1);
    for(auto index:ans){
        cout<<index<<" ";
    }
    cout<<endl;
    return;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
/*
//B. Luke is a Foodie
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);
    for(ll i=0; i<n; i++)cin>>a[i];
        ll a1=a[0]-x;
        ll b1=a[0]+x;
        ll ans=0;
    for(ll i=1; i<n; i++){
        ll a2=a[i]-x;
        ll b2=a[i]+x;
        if(a2>b1 || b2<a1){
            ans++;
            a1=a2;
            b1=b2;
        }else{
            a1=max(a1,a2);
            b1=min(b1,b2);
        }
    }
    cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
*/
/*
//B. Basketball Together
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n,d;
    cin>>n>>d;
    vector<ll>a(n);
    for(ll i=0; i<n; i++)cin>>a[i];
    sort(a.rbegin(),a.rend());
    ll ans=0; ll i=0; ll j=n-1; ll c=1;
    while(i<=j){
        if(a[i]*c>d){
            ans++;
            i++;
            c=1;
        }else{
            j--;
            c++;
        }
    }
    cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
*/
/*
//C. Traffic Light
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    if(c=='g'){
        cout<<0<<endl;
        return;
    }
    s=s+s;
    ll ans=0;
    ll g_index=-1;
    for(ll i=2*n-1; i>=0; i--){
        if(s[i]=='g'){
            g_index=i;
        }
        if(s[i]==c && g_index!=-1){
            ans=max(ans,g_index-i);
        }
    }
    cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
*/
/*
//D. Distinct Split
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,ans=0;
    string s;
    map<char,int>mp1,mp2;
    cin>>n>>s;
    for(int i=0;i<n;i++) mp1[s[i]]++;
    ans=mp1.size();
    for(int i=0;i<n;i++){
        mp1[s[i]]--;
        if(mp1[s[i]]==0) mp1.erase(s[i]);
        mp2[s[i]]++;
        ans=max(ans,int(mp1.size()+mp2.size()));
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}
*/
/*
//B. Array merging
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n),b(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    for(ll i=0; i<n; i++){
        cin>>b[i];
    }
    ll i=0;
    vector<ll>fa(2*n+1);
    while(i<n){
        ll j=i;
        while(j<n && a[i]==a[j]){
            j++;
        }
        ll len=j-i;
        fa[a[i]]=max(fa[a[i]],len);
        i=j;
    }
    i=0;
    vector<ll>fb(2*n+1);
    while(i<n){
        ll j=i;
        while(j<n && b[i]==b[j]){
            j++;
        }
        ll len=j-i;
        fb[b[i]]=max(fb[b[i]],len);
        i=j;
    }
    ll ans=0;
    for(ll i=0; i<2*n+1; i++){
        ans=max(fa[i]+fb[i],ans);
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
/*
//C. Ski Resort
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll>a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll i=0; ll ans=0;
    while(i<n){
        while(i<n && a[i]>q){
            i++;
        }
        if(i==n)break;
        ll j=i;
        while(j<n && a[j]<=q){
            j++;
        }
        ll len=j-i;
        if(len>=k){
            ll z=len-k+1;
            ans+=z*(z+1)/2;
        }
        i=j;
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
/*
//Monsters
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>>a(n+1);
    for(ll i=1; i<=n; i++){
        ll x;
        cin>>x;
        if(x%k==0){
            a[i]={k,i};
        }else{
            a[i]={x%k,i};
        }
    }
    sort(a.rbegin(),a.rend(),[](pair<ll,ll>x,pair<ll,ll>y){
        if(x.first==y.first){
            return x.second>y.second;
        }
        return x.first<y.first;
    });
    for(ll i=0; i<n; i++){
        cout<<a[i].second<<" ";
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
*/
/*
//B. Monsters
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    ll ans=0;
    ll mini=INT_MAX;
    vector<ll>min_ele;
    for(ll i=0; i<n; i++){
        ll m;
        cin>>m;
        vector<ll>a(m);
        for(ll j=0; j<m; j++){
            cin>>a[j];
        }
        sort(a.begin(),a.end());
        mini=min(mini,a[0]);
        min_ele.push_back(a[1]);
    }
    ans=mini+accumulate(min_ele.begin(),min_ele.end(),0ll)-*min_element(min_ele.begin(),min_ele.end());
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
/*
//A. Helmets in Night Light
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n,p;
    cin>>n>>p;
    vector<ll>a(n);
    vector<ll>b(n);
    vector<pair<ll,ll>>c;
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    for(ll i=0; i<n; i++){
        cin>>b[i];
    }
    c.push_back({p,n+1});
    for(ll i=0; i<n; i++){
        c.push_back({b[i],a[i]});
    }
    sort(c.begin(),c.end());
    ll ans=p; ll i=0; ll total=1;
    while(total<n){
        ll left=n-total;
        if(c[i].second<=left){
            total=total+c[i].second;
            ans=ans+(c[i].second*c[i].first);
        }else{
            total=n;
            ans=ans+(left*c[i].first);
        }
        i++;
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
/*
//C. Raspberries
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll d=k-1;
    ll e_cnt=0; ll ans=0;
    for(ll i=0; i<n; i++){
        if(a[i]%2==0)e_cnt++;
        if(a[i]%k==0){
            d=0;
        }else{
            d=min(d,k-a[i]%k);
        }
    }
    if(k!=4){
        cout<<d<<endl;
        return;
    }else{
        if(e_cnt>=2){
            cout<<0<<endl;
            return;
        }else if(e_cnt==1){
            cout<<min(d,(long long)1)<<endl;
            return;
        }else{
            cout<<min((long long)2,d)<<endl;
            return;
        }
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
//B. Swap and Delete
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    string s;
    cin>>s;
    ll one=0; ll zero=0;
    for(ll i=0; i<s.length(); i++){
        if(s[i]=='0'){
            zero++;
        }else{
            one++;
        }
    }
    ll i;
    for(i=0; i<s.length(); i++){
        if(s[i]=='0'){
            if(one>0){
                one--;
            }else{
                break;
            }
        }else{
            if(zero>0){
                zero--;
            }else{
                break;
            }
        }
    }
    cout<<s.length()-i<<endl;
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