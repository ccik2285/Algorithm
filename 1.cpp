#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll; 
bool is_prime(ll n) {
    if(n < 2) return false;
        
    for(int i=2; i<=sqrt(n); ++i) {
        if(n % i == 0) return false;
    }
    
    return true;
}
int solution(int n, int k) { 
    int answer = 0;
    string s=""; int prev=0; 
    while(n){
        s+=(n%k)+'0';  
        n/=k; 
    }
    reverse(s.begin(),s.end());
    cout << s << endl;
    string temp ="";
    vector <ll> prime;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='1'&&s[i]<='9')temp+=s[i];         
        else{
            if(!temp.empty()){
                prime.push_back(stoll(temp)); 
                temp=""; 
            }
        }
    }
    if(temp.size())prime.push_back(stoll(temp));     
    for(int i=0; i<prime.size(); i++) if(is_prime(prime[i])) answer++ ;      
    return answer;
}
// #include <string>
// #include <cmath>
// #include <iostream>

// using namespace std;

// typedef long long ll;

// bool prime(ll n) { // 소수 판별
//     if(n < 2) return false;
        
//     for(int i=2; i<=sqrt(n); ++i) {
//         if(n % i == 0) return false;
//     }
    
//     return true;
// }

// string convert_num(int n, int k) { // k진수로 변환
//     string ret = "";
    
//     while(n) {
//         ret += to_string(n % k);
//         n /= k;
//     }
    
//     return string(ret.rbegin(), ret.rend());
// }

// int get_answer(string num) { // 0을 기준으로 parsing하여 소수이면 count
//     string tmp = "";
//     int ret = 0;
    
//     for(int i=0; i<num.length(); ++i) {
//         if(num[i] == '0' && !tmp.empty()) {
//             ll n = stoll(tmp);
//             if(prime(n)) ret++;
//             tmp = "";
//         }
//         else tmp += num[i];
//     }
    
//     if(!tmp.empty()) {
//         ll n = stoll(tmp);
//         if(prime(n)) ret++;
//     }
    
//     return ret;
// }

// int solution(int n, int k) {
//     int answer = 0;
    
//     string num = convert_num(n, k);
    
//     return get_answer(num);
// }
int main() {
    cout << solution(3,4);
}