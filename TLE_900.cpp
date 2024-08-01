//B. Permutation Swap

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n,a;
    cin>>n;
    ll k=0;
    for(int i=1; i<=n; i++){
        cin>>a;
        k = __gcd(k,abs(a-i));
    }
    cout<<k<<endl;
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

//B. Comparison String
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=1;
    ll temp=1;
    for(ll i=1; i<n; i++){
        if(s[i-1]!=s[i]){
            ans=max(temp,ans);
            temp=1;
        }else{
            temp++;
        }
    }
    ans=max(temp,ans);
    cout<<ans+1<<endl;
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
//D. Balanced Round
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll ans=1;
    ll temp=1;
    for(ll i=1; i<n; i++){
        if(a[i]-a[i-1]<=k){
            temp++;
        }else{
            ans=max(temp,ans);
            temp=1;
        }
    }
    ans=max(temp,ans);
    cout<<n-ans<<endl;
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
//B. Longest Divisors Interval
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    ll ans=0;
    for(int i=1; ;i++){
        if(n%i!=0){
            cout<<i-1<<endl;
            break;
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
//A. Jellyfish and Undertale
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll a,b,n;
    cin>>a>>b>>n;
    ll ans=b;
    vector<ll>x(n);
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    for(int i=0; i<n; i++){
        ans=ans+(min(x[i]+1,a)-1);
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
//C. Vasilije in Cacak
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n,k,x;
    cin>>n>>k>>x;
    ll low=(k*(k+1))/2;
    ll high=(n*(n+1))/2-((n-k)*(n-k+1))/2;
    if(low<=x && x<=high){
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
//B. Chemistry
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char, ll> mp;
    for (ll i = 0; i < n; i++) {
        mp[s[i]]++;
    }
    ll oddOne = 0;
    for (auto i=mp.begin(); i!=mp.end(); i++){
        if (i->second % 2 != 0) {
            oddOne++;
        }
    }
    if(k>=oddOne-1){
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
//A. Forked!
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll a,b;
    cin>>a>>b;
    ll xk,yk;
    cin>>xk>>yk;
    ll xq,yq;
    cin>>xq>>yq;
    vector<pair<ll,ll>>direction={{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};
    set<pair<ll,ll>>set1,set2;
    for(auto x:direction){
        ll x1=xk+x.first;
        ll y1=yk+x.second;
        set1.insert(make_pair(x1,y1));
        ll a1=xq+x.first;
        ll b1=yq+x.second;
        set2.insert(make_pair(a1,b1));
    }
    ll ans=0;
    for(auto x:set1){
        if(set2.find(x)!=set2.end()){
            ans++;
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