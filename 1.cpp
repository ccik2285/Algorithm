#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int prime_arr[1000001]; 
typedef long long ll; 
map <int, int> m; 
void prime_check(){    
    for(int i=2; i<=100000; i++){
        if(prime_arr[i])continue; 
        else{
            m[i]++;  
            for(int j=i; j<=1000000; j+=i)prime_arr[j]=1; 
        }        
    }   
}
int solution(int n, int k) {
    prime_check(); 
    int answer = 0;
    string s=""; int prev=0; 
    while(n){
        s+=(n%k)+'0';  
        n/=k; 
    }
    reverse(s.begin(),s.end());
    string temp ="";
    vector <ll> prime;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='1'&&s[i]<='9')temp+=s[i];         
        else{
            if(temp.size())prime.push_back(stoll(temp)); 
            temp=""; 
        }
    }
    if(temp.size())prime.push_back(stoll(temp));     
    for(int i=0; i<prime.size(); i++) if(m[prime[i]]==1) answer++ ;      
    return answer;
}
int main() {
    cout << solution(3,4);
}