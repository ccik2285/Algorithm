#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int arr[100001];
int main() {
    ios_base::sync_with_stdio(0);
    int n;
    stack<int> s;
    vector<int> ar, ans(n+1,0);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> ar[i];
    }
    for(int i=n; i>=1; i--){
        while(s.empty() && ar[i] > ar[s.top()]){
            ans[s.top()] = i;
            s.pop(); 
        }
        s.push(i);
    }
    for(int i=1; i<=n; i++){
        
        cout << ans[i] << " ";
    }

}