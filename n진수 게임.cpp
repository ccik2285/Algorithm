#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
char list[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
string invert(int num,int n){
    string temp = "";
    if(num ==0) temp += '0';
    while(num > 0){
        temp += list[num % n];
        num /=n;
    }
    reverse(temp.begin(),temp.end());
    return temp;

}
string solution(int n, int t, int m, int p){ //n진수 t개의 갯수 m명의 사람 p번째 순서
    string answer;
    string temp = "";
    for(int i=0; temp.size() <= m*t; i++){
        temp +=invert(i,n);
    }
    for(int i=p-1; answer.size() < t; i+=m){
        answer += temp[i]; 
    }
    return answer;
}

int main(){
    string a = solution(2,4,2,1);
    cout << a;
}