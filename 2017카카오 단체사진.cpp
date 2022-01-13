#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solution(int n,vector<string> data) {
    int answer =0;
    vector<char> arr = {'A','C','F','J','M','N','R','T'};
            do{
                int flag;
                for(auto s:data){
                flag =0;
                char a = s[0];
                char b = s[2];
                int gap = s[4]-'0';
                int id1;
                int id2;
                int ca;
               for(int j=0; j<arr.size(); j++){
                   if(arr[j] == a) id1 = j;
                   if(arr[j] == b) id2 = j;
               }
               ca = abs(id1-id2)-1;
               if(s[3]== '='){
                   if(ca==gap) flag=1;         
               }
               else if(s[3] == '>'){
                   if(ca>gap) flag=1;
               }
               else if(s[3] == '<'){
                   if(ca<gap) flag=1;
               }           
               if(!flag) break;
            }
            if(flag) answer++;
            }while(next_permutation(arr.begin(),arr.end()));
    return answer;
}
int main() {
    vector<string> arr = {"N~F=0","R~T>2"};
    cout << solution(2,arr);
}