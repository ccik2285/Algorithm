#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>
using namespace std;
vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size(), 0);

    map<string,int> idx;
    for(int i=0; i<id_list.size(); i++) idx[id_list[i]] = i; // 인덱스 저장
    stringstream s;
    stringstream s;
    map<string,set<string>> singo;
    for(auto repo : report){
        s.str(repo);
        string from,to; s >> from >> to;
        singo[to].insert(from);
        s.clear();
    }
    for(auto it : singo){
        if(it.second.size() >= k){
            for(auto up : it.second){
                int index = idx[up];
                answer[index]++;
            }
        }

    }   
    return answer;
}
int main() {
    
}