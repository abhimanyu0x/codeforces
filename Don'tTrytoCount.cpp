#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		string x,s;
		cin>>x>>s;
		bool flag=false;
		int i=0;
		while(i<=5){
			if(x.find(s)!=string::npos){
				cout<<i<<endl;
				flag=true;
				break;
			}
			x+=x;
			i++;
		}
		if(!flag){
			cout<<-1<<endl;
		}
	}
	return 0;
}