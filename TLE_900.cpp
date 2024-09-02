/*
//B. Make it Divisible by 25
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int help(string lastNumber, string s) {
    char x = lastNumber[0];
    char y = lastNumber[1];
    int steps = 0;
    bool foundY = false;

    for (int i = s.length() - 1; i >= 0; i--) {
        if (!foundY) {
            if (s[i] == y) {
                foundY = true;
            } else {
                steps++;
            }
        } else {
            if (s[i] == x) {
                return steps;
            } else {
                steps++;
            }
        }
    }

    return INT_MAX;
}

void solve() {
    string s;
    cin >> s;
    int ans = INT_MAX;
    vector<string> a = {"00", "25", "50", "75"};

    for (string &lastNumber : a) {
        int minVal = help(lastNumber, s);
        ans = min(ans, minVal);
    }

    cout << ans << endl;
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
//B. Luntik and Subsequences
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll zero=0; ll one=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==0){
            zero++;
        }else if(a[i]==1){
            one++;
        }
    }
    if(one==0){
        cout<<0<<endl;
    }else{
        cout<<one*(1ll<<zero)<<endl;
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
//A. AB Balance
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    string s;
    cin>>s;
    int n=s.length();
    if(s[0]==s[n-1]){
        cout<<s<<endl;
    }else{
        s[n-1]=s[0];
        cout<<s<<endl;
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
//A. Exciting Bets
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<" "<<0<<endl;
    }else{
        if(a<b)swap(a,b);
        ll d=a-b;
        cout<<d<<" "<<min(b%d,d-b%d)<<endl;
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
//B. Bad Boy
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n,m,i,j;
    cin>>n>>m>>i>>j;
    cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
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
//A. Strange Partition
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll maxAns=0; ll minAns=0;
    ll sum=accumulate(a.begin(),a.end(),0ll);
    minAns=sum/x+(sum%x!=0);//calculate ceil value as ceil function deals with double
    for(ll i=0; i<n; i++){
        maxAns+=a[i]/x+(a[i]%x!=0);
    }
    cout<<minAns<<" "<<maxAns<<endl;
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
//B. Sum of Medians
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n, k;
    cin >> n >> k;
    ll size = n * k;
    vector<ll> a(size);
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    ll sum = 0;
    ll i=n*k;
    while(k--) {
        i=i-(n/2+1);
        sum+=a[i];
    }   
    cout << sum << endl;
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
//A. Odd Divisor
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin >> n;
    if (n % 2 != 0) {
        cout << "YES" << endl;
        return;
    }
    while (n % 2 == 0) {
        n /= 2;
    }
    if (n > 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
//A. Three Indices
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    vector<ll>p(n);
    for(ll i=0; i<n; i++){
        cin>>p[i];
    }
    for(ll i=0; i<n-2; i++){
        if(i+1<n && i+2<n){
            if(p[i]<p[i+1] && p[i+1]>p[i+2]){
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2<<" "<<i+3<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
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
// B. 01 Game
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    string s;
    cin>>s;
    ll zero=count(s.begin(),s.end(),'0');
    ll one=count(s.begin(),s.end(),'1');
    ll p=0;
    if(zero>one){
        p=one;
    }else{
        p=zero;
    }
    if(p%2==0){
        cout<<"NET"<<endl;
    }else{
        cout<<"DA"<<endl;
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
//B. Multiply by 2, divide by 6
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    ll ans=0;
    while(n>1){
        if(n%6==0){
            ans++;
            n=n/6;
        }else{
            n=n*2;
            ans++;
        }
    }
    if(n==1){
        cout<<ans<<endl;
    }else{
        cout<<-1<<endl;
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
//B. Odd Grasshopper
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll x,n;
    cin>>x>>n;
    ll d=0;
    if(n%4==0)d=0;
    else if(n%4==1)d=-n;
    else if(n%4==2)d=1;
    else if(n%4==3)d=n+1;
    if(x%2==0){
    cout<<x+d<<endl;   
    }else{
       cout<<x-d<<endl; 
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
//B. Make AP
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    if(b-a==c-b){
        cout<<"YES"<<endl;
    }else{
        int x=2*b;
        if(((a+c)%x==0)||((x-a)%c==0 && x-a>0)||((x-c)%a==0 && x-c>0)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
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
//B. Array Cloning Technique
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    map<ll,ll>mp;
    for(ll i=0; i<n; i++){
        ll temp;
        cin>>temp;
        mp[temp]++;
    }
    ll maxi=INT_MIN;
    for(auto i:mp){
        maxi=max(maxi,i.second);
    }
    ll ans=0;
    while(maxi<n){
        ll d=min(maxi,n-maxi);
        ans=ans+1+d;
        maxi=maxi+d;
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
//D. Deletive Editing
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    string s,n;
    cin >>s>>n;
    if(s==n){
        cout<<"YES"<<endl;
        return;
    }
    string temp="";
    unordered_map<char,int>mp_s;
    for(auto x:s){
        mp_s[x]++;
    }
    unordered_map<char,int>mp_n;
    for(auto x:n){
        mp_n[x]++;
    }
    for(int i=0; i<s.length(); i++){
        if(mp_n.find(s[i])!=mp_n.end()){
            if(mp_s[s[i]]==mp_n[s[i]]){
                temp+=s[i];
                mp_s[s[i]]--;
                mp_n[s[i]]--;
            }else{
                mp_s[s[i]]--;
            }
        }
    }
    if(temp==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
//B. Make It Increasing
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ll operation = 0;
    for (ll i = n - 1; i >= 1; i--) {
        while (a[i] >= a[i + 1] && a[i] != 0) {
            a[i] = a[i] / 2;
            operation++;
        }
        if(a[i]==a[i+1]){
            cout<<-1<<endl;
            return;
        }
    }
    cout << operation << endl;
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
//A. AvtoBus
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    if(n%2!=0||n<=3){
        cout<<-1<<endl;
    }else{
        n=n/2;
        if(n%3==0){
            cout<<n/3<<" "<<n/2<<endl;
        }else{
            cout<<n/3+1<<" "<<n/2<<endl;
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
//B. NIT Destroys the Universe
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n+1);
    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }
    ll len=0; ll ans=0;
    for(ll i=1; i<=n; i++){
        if(a[i]!=0)len++;
        else if(a[i]==0 && len>0){
            ans++;
            len=0;
        }
    }
    if(len>0){
        ans++;
        len=0;
    }
    if(len==0 && ans==0){
        cout<<0<<endl;
    }else if(ans==1){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
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
//A. Mainak and Array
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n+1);
    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }
    ll ans=a[n]-a[1];
    for(ll i=2; i<=n; i++){
        ans=max(ans,a[i]-a[1]);
    }
    for(ll i=1; i<=n-1; i++){
        ans=max(ans,a[n]-a[i]);
    }
    for(ll i=1; i<=n-1; i++){
        ans=max(ans,a[i]-a[i+1]);
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
//B. Not Dividing
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
    for(ll i=0; i<n; i++){
        a[i]++;
    }
    for(ll i=1; i<n; i++){
        if(a[i]%a[i-1]==0){
            a[i]++;
        }
    }
    for(auto i:a){
        cout<<i<<" ";
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
//D. Odd Queries
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n+1,0);
    for(ll i=1; i<=n; i++){
        ll temp;
        cin>>temp;
        a[i]=temp+a[i-1];
    }
    ll sum=a[n];
    for(ll i=0; i<q; i++){
        ll l,r,k;
        cin>>l>>r>>k;
        l--;
        r--;
        ll tempSum=a[r+1]-a[l];
        ll newSum=sum-tempSum+((r-l+1)*k);
        if(newSum%2!=0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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
*/
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