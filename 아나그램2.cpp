#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {

    unordered_map<char,int> a,b;
    string s,t;
    cin >> s >> t;
    for(auto &s : t) b[s]++;
    int lt =0;
    int ans=0;
    int rt =t.size()-1;
    for(int i=0; i<rt; i++) a[s[i]]++;
    for(int right=rt; right<s.size(); right++){
        a[s[right]]++;
        if(a == b) ans++;
        
        a[s[lt]]--;
        lt++;
    }`
}