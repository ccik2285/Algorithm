#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a,string b) {
    if(a.length() == b.length()){
        return  a < b;
    }
    return a.length() < b.length();
}

int main() {
    int n;
    vector<string> a;
    cin >> n;
    for(int i=0; i<n; i++){
        string b;
        cin >> b;
        if(find(a.begin(),a.end(),b) == a.end()) a.push_back(b);
    }
    sort(a.begin(),a.end(),cmp);
    for(int i=0; i<a.size(); i++){
        cout << a[i] << "\n";
    }
}