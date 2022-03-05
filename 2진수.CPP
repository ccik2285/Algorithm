#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n,m;
    stack<int> ans;
    cin >> n >> m; // n을 m진수로
    int tmp1 = n;
    while(tmp1 >= m){
       int tmp = tmp1 % m; // n을 m으로 나눈 나머지
       tmp1 =  tmp1 / m;
       ans.push(tmp);
    }
    ans.push(tmp1);
    int size = ans.size();
    for(int i=0; i<size; i++){
        int tmp = ans.top();
        cout << tmp;
        ans.pop();
    }
}