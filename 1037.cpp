#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int b;
        cin >> b;
        a.push_back(b);
    }
    sort(a.begin(),a.end());
    cout << a[a.size()-1]*(a[0]) << endl;
}   