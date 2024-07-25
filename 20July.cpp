//Codeforces Round 960 (Div. 2)

//Question A
/*
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    map<int,int>mp;
    for (int i = 0; i < n; i++) {
        int temp;
        cin>>temp;
        mp[temp]++;
    }
    for(auto a:mp){
       if(a.second%2!=0){
        	cout<<"YES"<<endl;
        	return;
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

//Question B

/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin>>t;
	while(t--){
		int n,x,y;
		cin>>n>>x>>y;
		vector<int>v(n,1);
		for(int i=y-2; i>=0; i-=2)v[i]=-1;
		for(int i=x; i<n; i+=2)v[i]=-1;
		for(auto a:v){
			cout<<a<<" ";
		}
		cout<<endl;
	}
	return 0;
}

*/

//Question C, TLE
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(vector<int>&v){
	int sum=0;
	for(int i=0; i<v.size(); i++){
		sum+=v[i];
	}
	return sum;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0; i<n; i++){
			cin>>v[i];
		}
		int ans=solve(v);
		while(true){
			map<int,int>mp;
			int x=0;
			for(int i=0; i<n; i++){
				mp[v[i]]++;
				if(mp[v[i]]>=2){
					x=max(x,v[i]);
					v[i]=x;
				}
				v[i]=x;
			}
			int curr_sum=solve(v);
			if(curr_sum==0)break;
			ans+=curr_sum;
		}
		cout<<ans<<endl;
	}
	return 0;
}
*/

//Question C
/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(const vector<ll>& v) {
    ll sum = 0;
    for (ll i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    return sum;
}

void doTask() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll ans = solve(v);
    map<ll,ll> mp;
    ll x = 0;
    for (ll i = 0; i < n; i++) {
        mp[v[i]]++;
        if (mp[v[i]] >= 2) {
            x = max(x, v[i]);
            v[i] = x;
        } else {
            v[i] = x;
        }
    }
    mp.clear();
    for (auto k : v) {
        mp[k]++;
    }
    int prev = 0;
    for (ll i = 0; i < n; i++) {
        ans += v[i];
        if (mp[v[i]] > 1) {
            prev = v[i];
            ans += (n - i - 1) * v[i];
        } else {
            ans += (n - i - 1) * prev;
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        doTask();
    }
    return 0;
}
*/