#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
struct name{
    string head,org;
    int number;
};
bool cmp(name a,name b) {
    if(a.head != b.head){
        return a.head < b.head;
    }
    else
        return a.number < b.number;
}
vector<string> solution(vector<string> files){
    vector<string> answer;
    vector<name> ans(files.size());
    for(int i=0; i<files.size(); i++){ 
        string temp = files[i];
        int index,index2;
        for(int j=0; j<temp.size(); j++){
            if(isdigit(temp[j])){
                index = j; //숫자일때 멈춤
                break;
            }
        }
        for(int j=index; j<temp.size(); j++){
            if(!isdigit(temp[j])){
                index2 = j;
                break;
            }
        }
        if(index-index2 >=5) break;
        ans[i].org = files[i];
        transform(files[i].begin(), files[i].begin() + index, files[i].begin(), ::toupper); 
        ans[i].head = files[i].substr(0,index);
        ans[i].number = stoi(files[i].substr(index,index2));

    }
    stable_sort(ans.begin(),ans.end(),cmp);
    for(int i=0; i<ans.size(); i++){
        answer.push_back(ans[i].org);
    }
    return answer;
}

int main() {
    vector<string> arr  = {"img12.png", "img10.png", "img02.png", "img1.png", "IMG01.GIF", "img2.JPG"};
    vector<string>ans = solution(arr);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
}