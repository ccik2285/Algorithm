#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <sstream>

using namespace std;
string solution(int n, int k, vector<string> cmd) {
    string answer = "";
    for(int i=0; i<n; i++){
        answer+="O";
    }
    stringstream ss;
    int current = k;
    string s1,s2;
    stack<int> deleted_r;
    for(auto c : cmd){
        ss.str(c);
        ss >> s1 >> s2;
        int r = stoi(s2);
        if(s1 == "D"){
            current+=r;
        }
        else if(s1 == "U"){
            current-=r;
        }
        else if(s1 == "C"){
            cout << current << endl;
            deleted_r.push(current); //index값
            answer.erase(current,1); //index값 제거
            if(current!=0) current -=1;
        }
        else if(s1 == "Z"){
            int idx = deleted_r.top();
            cout << idx << endl;
            deleted_r.pop();
            answer.insert(idx,"O");

        }
        ss.clear();
    }
    while(!deleted_r.empty()){
            int idx = deleted_r.top();
            deleted_r.pop();
            answer.insert(idx,"X");
    }
    return answer;
}
int main() {
    vector<string> cmd = {"D 2","C","U 3","C","D 4","C","U 2","Z","Z"};
    cout << solution(8,2,cmd);
}