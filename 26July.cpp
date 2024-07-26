
// Codeforces Round 962 (Div. 3)

/*
//Question A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin>>n;
    ll ans=0;
    while(n>=4){
        ans++;
        n-=4;
    }
    if(n!=0)ans+=n/2;
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
//Question B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }
    
    int new_size = n / k;
    vector<string> reduced_grid(new_size, string(new_size, ' '));
    
    for (int i = 0; i < new_size; ++i) {
        for (int j = 0; j < new_size; ++j) {
            reduced_grid[i][j] = grid[i * k][j * k];
        }
    }
    
    for (const string& row : reduced_grid) {
        cout << row << endl;
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
//Question C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    vector<vector<ll>> freq_a(n + 1, vector<ll>(26, 0));
    vector<vector<ll>> freq_b(n + 1, vector<ll>(26, 0));
    for (ll i = 0; i < n; ++i) {
        if (i > 0) {
            for (int j = 0; j < 26; ++j) {
                freq_a[i + 1][j] = freq_a[i][j];
                freq_b[i + 1][j] = freq_b[i][j];
            }
        }
        freq_a[i + 1][a[i] - 'a']++;
        freq_b[i + 1][b[i] - 'a']++;
    }

    while (q--) {
        ll l, r;
        cin >> l >> r;
        ll c = 0;
        for (int i = 0; i < 26; ++i) {
            ll count_a = freq_a[r][i] - freq_a[l - 1][i];
            ll count_b = freq_b[r][i] - freq_b[l - 1][i];
            c += max(0LL, count_a - count_b);
        }
        
        cout << c << endl;
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
//D - Fun
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n, x;
    cin >> n >> x;
    ll count = 0;
     for (ll a = 1; a <= x; a++) {
        int max_b = min(n / a, x - a); 

        for (ll b = 1; b <= max_b; b++) {
            ll re_n = n - a * b; 
            ll re_x = x - a - b; 
            if (re_n < 0 || re_x <= 0) {
                break;
            }
            ll max_c = min(re_n / (a + b), re_x);
            count += max_c; 
        }
    }
    cout << count << endl;
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