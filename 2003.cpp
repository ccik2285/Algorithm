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
    int count =2;
    for(int i=0; i<N; i++){
        int count =2;
        int sum=0;
        if(arr[i] == M){
            ans++; 
            continue;
        }
        do{
            int j=i;

            for(j; j < count+i; j++){
                sum+=arr[j];
            }
            if(sum < M) {count++; sum =0;}
            else if(sum == M){
                ans++;
                sum = 0;
                break;
            }
            else{
                sum = 0;
                break;
            }
            if(count+i > N){
                sum = 0;
                break;
            }
        }while(1);
    }
    cout << ans;
}