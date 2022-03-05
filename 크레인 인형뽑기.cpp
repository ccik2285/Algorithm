#include <iostream>
#include <string>
#include <vector>
using namespace std;
int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> bsk;
    board[1][1] -
    int idx = 0;
    int ar_size = board[0].size();
    for(int i=0; i<moves.size(); i++){
        for(int j=0; j<ar_size; j++){
            if(board[j][moves[i]]){
                bsk.push_back(board[j][moves[i]]);
                if(idx > 1){
                   if(bsk[idx] == bsk[idx-1]){
                       answer++;
                       bsk.erase(bsk.begin()+idx,bsk.begin()+idx-1);
                   }
                }
                idx++;
                board[j][moves[i]] = 0;
            }
        }
    }
    return answer;
}
int main() {

}