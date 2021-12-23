#include <iostream>
#include <vector>
using namespace std;
bool cmp(string a,string b) {
    if(a.length() == b.length()) return a < b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    vector<string> arr;
    string a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        arr[i] = a;
        int min = 0;
        int min_size = a.size();
        for(int j=1; j<i; j++){ 
            if()
        }
    }

}