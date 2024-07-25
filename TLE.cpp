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