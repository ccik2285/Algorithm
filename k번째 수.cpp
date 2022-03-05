#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> tmp;
    for(int i=0; i< commands.size(); i++){
        int x = commands[i][0];
        int y = commands[i][1];
        int idx = commands[i][2];

        for(int i=x-1; i<y; i++){
            tmp.push_back(array[i]);
            sort(tmp.begin(),tmp.end());
        }
        answer.push_back(tmp[idx-1]);
        tmp.clear();
    }

    return answer;
}

int main() {

}