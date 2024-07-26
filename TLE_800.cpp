/*
// A. Extremely Round
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string n;
    cin >> n;
    cout<<9*(n.length()-1)+n[0]-'0'<<endl;
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
//A. Everybody Likes Good Arrays!

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll ans = 0;
    ll c = 0;
    bool is_even = a[0] % 2 == 0;

    for (int i = 0; i < n; i++) {
        if ((a[i] % 2 == 0) == is_even) {
            c++;
        } else {
            if (c >= 2) {
                ans += c - 1;
            }
            is_even = !is_even;
            c = 1;
        }
    }
    if (c >= 2) {
        ans += c - 1;
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
//A. Make it Beautiful
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
    sort(a.rbegin(),a.rend());
    if(a[0]==a[n-1])cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<a[0]<<" "<<a[n-1]<<" ";
        for(ll i=1; i<n-1; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
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
//A. One and Two
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll twoNo=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==2){
            twoNo++;
        }
    }
    if(twoNo==0){
        cout<<1<<endl;
    }else if(twoNo%2!=0){
        cout<<-1<<endl;
    }else{
        int x=twoNo/2;
        int cnt=0;
        for(int i=0; i<n; i++){
            if(a[i]==2){
                cnt++;
                if(cnt==x)cout<<i+1<<endl;
            }
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
//A. Serval and Mocha's Array
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
        for(ll j=1; j<n; j++){
            ll x=gcd(a[i],a[j]);
            if(x<=2){
                cout<<"YES"<<endl;
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
//C. Prepend and Append

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int i=0; int j=s.length()-1; bool flag=true;
    while(i<=j){
        if(s[i]==s[j]){
            cout<<j-i+1<<endl;
            flag=false;
            break;
        }else{
            i++;
            j--;
        }
    }
    if(flag)cout<<0<<endl;
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
//A. Walking Master

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==c && b==d){
        cout<<0<<endl;
    }else if(a!=c && b==d){
        if(a<c){
            cout<<-1<<endl;
        }else{
            cout<<a-c<<endl;
        }
    }else{
        if(d<b){
            cout<<-1<<endl;
        }else{

            int diff=d-b;
            a=diff+a;
            if(a<c){
                cout<<-1<<endl;
            }else{
                cout<<a-c+diff<<endl;
            }
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
//A. Coins
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n,k;
    cin>>n>>k;
    if(n%2==0){
        cout<<"YES"<<endl;
    }else{
        if(k%2==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
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
//B. Blank Space
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
    int ans=0;int curr=0;
    for(int i=0; i<n; i++){
        if(a[i]==0){
            curr++;
        }else{
            ans=max(ans,curr);
            curr=0;
        }
    }
    ans=max(ans,curr);
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
//A. Unit Array
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll minusOne=0;
    ll sum=0; ll ans=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]==-1){
            minusOne++;
        }
    }
    if(sum>=0 && minusOne%2==0){
        cout<<0<<endl;
    }else{
        while(sum<0){
            sum+=2;
            minusOne--; ans++;
        }
        if(minusOne%2==0){
            cout<<ans<<endl;
        }else{
            cout<<ans+1<<endl;
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
//A. Grasshopper on a Line
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll x,k;
    cin>>x>>k;
    if(x%k!=0){
        cout<<1<<endl;
        cout<<x<<endl;
    }else{
        cout<<2<<endl;
        cout<<1<<" "<<x-1<<endl;
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
//A. Forbidden Integer
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n,k,x;
    cin>>n>>k>>x;
    if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(ll i=0; i<n; i++){
            cout<<1<<" ";
        }
        cout<<endl;
    }else{
        if(k==1){
            cout<<"NO"<<endl;
        }else if(k==2){
            if(n%2==0){
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(ll i=0; i<n/2; i++){
                    cout<<2<<" ";
                }
                cout<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
             if(n%2==0){
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(ll i=0; i<n/2; i++){
                    cout<<2<<" ";
                }
                cout<<endl;
             }else{
                cout<<"YES"<<endl;
                ll a=(n/2)-1;
                cout<<a+1<<endl;
                for(ll i=0; i<a; i++){
                    cout<<2<<" ";
                }
                cout<<3<<endl;
             }
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
//A. Desorting
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
    ll minDiff=INT_MAX;
    ll leftIndex=0;
    ll rightIndex=0;
    ll ans=0;
    for(ll i=1; i<n; i++){
        ll temp=a[i]-a[i-1];
        if(temp<0){
            cout<<0<<endl;
            return;
        }else{
            if(min(temp,minDiff)<minDiff){
                minDiff=min(temp,minDiff);
                leftIndex=i-1;
                rightIndex=i;
            }
        }
    }
    // while(a[rightIndex]>=a[leftIndex]){
    //     a[rightIndex]-=1;
    //     a[leftIndex]+=1;
    //     ans++;
    // }
    ans=minDiff/2+1;
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
//A. Array Coloring
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll oddNo=0;
    ll evenNo=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0){
            evenNo++;
        }
        else{
            oddNo++;
        }
    }
    if(n%2==0 && evenNo>0 && oddNo>0){
        if(oddNo%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else if(n%2!=0 && evenNo>0 && oddNo>0){
        if(oddNo%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else if(n%2!=0 && evenNo==0 && oddNo>0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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
//A. Buttons
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    if(c%2==0){
        if(a>b){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }else{
        if(a>=b){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
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
//A. United We Stand
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
    sort(a.rbegin(),a.rend());
    vector<ll>b;
    vector<ll>c;
    ll temp=a[0];
    c.push_back(temp);
    for(ll i=1; i<n;i++){
        if(a[i]==temp){
            c.push_back(a[i]);
        }else{
            b.push_back(a[i]);
        }
    }
    if(b.size()==0||c.size()==0)cout<<-1<<endl;
    else{
        cout<<b.size()<<" "<<c.size()<<endl;
        for(ll i=0; i<b.size(); i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        for(ll i=0; i<c.size(); i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
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
//B. Sequence Game
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> b;
    for (ll i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        if (i == 0) {
            b.push_back(temp);
        } else {
            if (b.back() > temp) {
                if (temp - 1 > 0) {
                    b.push_back(temp - 1);
                }else{
                    b.push_back(temp); 
                }
                b.push_back(temp);
            } else {
                b.push_back(temp);
            }
        }
    }
    cout << b.size() << endl;
    for (ll i = 0; i < b.size(); i++) {
        cout << b[i] << " "; 
    }
    cout << endl;
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
//A. Ambitious Kid
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll ans=0;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        if(v[i]==0){
            cout<<ans<<endl;
            break;
        }else if(v[i]<0){
            v[i]=-v[i];
        }
    }
    sort(v.begin(),v.end());
    if(v[0]>0)cout<<v[0]<<endl;
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
//C. Target Practice
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n=0;
    vector<vector<char>>v(10,vector<char>(10));
    for(ll i=0; i<10; i++){
        for(ll j=0; j<10; j++){
            cin>>v[i][j];
        }
    }
    ll ans=0;
    for(ll i=0; i<10; i++){
        for(ll j=0; j<10; j++){
            if((i==0||j==0||i==9||j==9) && v[i][j]=='X'){
                ans+=1;
            }else if((i==1||j==1||i==8||j==8) && v[i][j]=='X'){
                ans+=2;
            }else if((i==2||j==2||i==7||j==7) && v[i][j]=='X'){
                ans+=3;
            }else if((i==3||j==3||i==6||j==6) && v[i][j]=='X'){
                ans+=4;
            }else if((i==4||j==4||i==5||j==5) && v[i][j]=='X'){
                ans+=5;
            }
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
/*
//A. Goals of Victory
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin>>n;
    ll sum=0;
    for(ll i=0; i<n-1; i++){
        int eff;
        cin>>eff;
        sum+=eff;
    }
    sum=-sum;
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
/*
// A. How Much Does Daytona Cost?
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    map<int,int>mp;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    if(mp.find(k)==mp.end()){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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