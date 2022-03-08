#include <iostream>
#include <vector>
using namespace std;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
// . -> 빈칸  * -> 벽
int x;
int y;
bool isgood(int m,int n){
    if(m >=0 && m<=x-1 && n >=0 && n <= y-1) return true;
    else return false;
}
string solution(int m,int n, vector<string> board){
    x = m;
    y = n;
    string answer = "";
    int flag; // 수평 or 수직
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
           for(int d=0; d<4; d++){
               if(isgood(i+dx[d],j+dy[d])){
                   
               }
           }
        }
    }

    return answer;
}

int main(){
    vector<string> board = {"DBA", "C*A", "CDB"};
    cout << solution(3,3,board);
}