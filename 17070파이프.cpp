#include <iostream>
#include <vector>
using namespace std;
int arr[18][18];
int ans =0;
int type =0;
int n;
int dx[] = {0,1,1}; // 가로 대각선 세로
int dy[] = {1,1,0};
// type 0 가로 1 대각 2세로
//대각선의 최종 위치 (1,2) -> (2,2) , (2,3) (1,3) 차지
//가로로 누웠을때는 오른쪽 또는 대각선 
//세로일때는 
//갯수찾기 backtrack ?
bool can(int dir,int x, int y){
    if(dir == 0){ // 가던 진행방향이 가로 세로 대각선 가로는 2곳으로 갈 수 있고
        for(int i=0; i< 1; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(arr[nx][ny] == -1 || arr[nx][ny] ==1) return false;
        }
    }
    else if(dir == 1){
        for(int i=0; i <3; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(arr[nx][ny] == -1 || arr[nx][ny] == 1) return false;
        }
    }
    else if(dir == 2){
        for(int i=2; i <3; i++){
            
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(arr[nx][ny] == -1 || arr[nx][ny] == 1) return false;
        }
    }
    return true;

}
void back(int dir,int x, int y){
    if(x==n && y==n) {
        ans++;
        return;
    }
    
    if(dir == 0){ // 가던 진행방향이 가로 세로 대각선 가로는 2곳으로 갈 수 있고
        for(int i=0; i< 2; i++){
            if(can(i,x,y)){
                back(i,x + dx[i],y + dy[i]);
            }
        }
    }
    else if(dir == 1){
        for(int i=0; i <3; i++){
            if(can(i,x,y)){
              back(i,x + dx[i],y + dy[i]);
            }
        }
    }
    else if(dir == 2){
        for(int i=1; i <3; i++){
            if(can(i,x,y)){
              back(i,x + dx[i],y + dy[i]);
            }
        }
    }

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    fill(&arr[0][0],&arr[17][17],-1);
    for(int i=1; i <= n; i++){
        for(int j=1; j <= n; j++){
            cin >>  arr[i][j];
        }
    }
    back(0,1,2);
    cout << ans << endl;
}