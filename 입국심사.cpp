#include <iostream>
#include <vector>
#include <algorithm>
typedef long long int lt;
using namespace std;
long long solution(int n, vector<int> times){
    long long answer = 0;
    sort(times.begin(),times.end());
    lt start = 1;
    lt end = times[times.size()-1]*n;
    while(start <= end){
        lt mid = (start+end)/2;
        lt cnt = 0;
        for(int i=0; i<times.size(); i++){
            cnt += mid/times[i];
        }
        if(cnt < n){
            start = mid + 1;
        }
        else{
            if(mid <= end) answer = mid;
            end = mid - 1;
        }
    }
    return answer;
}

int main() {
    vector<int> t = {7,10};
    cout << solution(6,t);
}