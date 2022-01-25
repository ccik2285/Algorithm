#include <iostream>
#include <vector>
using namespace std;
int visited[201] = {0,};
void dfs(vector<vector<int>> &arr,int node,int n){
    visited[node] = 1;
    for(int i=0; i<n; i++){
        if(arr[node][i]&& !visited[i]) dfs(arr,i,n);
    }

}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            dfs(computers,i,n);
            answer++;
        }
    }
    return answer;
}