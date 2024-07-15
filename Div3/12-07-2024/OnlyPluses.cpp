#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int a; int b; int c;
        cin >> a >> b >> c;
        for(int i=0; i<5; i++){
            if(c<=a && c<=b){
                c++;
            }else if(b<=a && b<= c){
                b++;
            }else{
                a++;
            }
        }
        cout<<a*b*c<<endl;
    }
    return 0;
}