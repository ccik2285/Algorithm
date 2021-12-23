#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string a;
    cin >> a;
    int ans,res=0;
    for(char &s : a) {
        if(isdigit(s)){
            res =res*10 + (s-48);//res + s-48;
     //       cout << res << " ";
        }
        else{
            ans +=res;
            res = 0;
        }
    }
    cout << ans + res;
}