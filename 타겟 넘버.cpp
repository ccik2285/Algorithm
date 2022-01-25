#include <iostream>
#include <vector>
using namespace std;
int cnt =0;
void dfs(vector<int> numbers,int idx,int cur, int target){
    if(idx == numbers.size()){
       if(cur==target) cnt++;
       return ;
    }
    dfs(numbers,idx+1,cur+numbers[idx],target);
    dfs(numbers,idx+1,cur-numbers[idx],target);
}
int solution(vector<int> numbers, int target){
    int answer = 0;
     dfs(numbers,0,0,target);
    answer = cnt;
    return answer;
}
