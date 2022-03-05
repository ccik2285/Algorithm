#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int ans=0;
    int N,M;
    vector<int> arr;
    cin >> N >> M;
    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int sum = arr[0];
    int start=0;
    int end=0;
    while(end <=N && start <=N){
        if(sum==M){
            ans++;
            sum-=arr[start++];
        }
        else if(sum < M){
            sum+=arr[++end];
        }
        else{
            sum-=arr[start++];
        }
    }
    cout << ans;
}