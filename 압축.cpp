#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<string> arr = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
vector<int> solution(string msg){
    int cur =0;
    int sec;
    int nextptr = 1;
    vector<int> answer;
    for(int i=0; i<msg.size();){
        int find =0;
        while(true){
            int size = arr.size();
            string cmp = msg.substr(i,nextptr);
                for(int j=0; j<size; j++){
                if(cmp == arr[j]){
                    sec = j+1;
                    nextptr++; 
                    find = 1;
                }
                   if(j==size-1) find =0;
                }
                if(!find){
                    i += nextptr -1;
                    cout << cmp << endl;              
                    arr.push_back(cmp);
                    answer.push_back(sec);
                    nextptr = 1;
                    find = 2;
                }
                if(find==2) break;
        }
    }
    return answer;
}
int main() {
    string s= " KAKAO";	
    vector<int> arr = solution(s);   
    for(int i=0; i< arr.size(); i++){
        cout << arr[i] << " ";
    }
}