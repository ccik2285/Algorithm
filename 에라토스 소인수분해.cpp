#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    long long N;
    cin >> N;
    vector<long long> arr;
    if (N == 1) return 0;
 
    for (long long i = 2; i <= N; i++) {
        while (N % i == 0) {
            arr.push_back(i);
            N /= i;
        }
    }
    if(arr.size() == 2) cout << arr[0] << ","  << arr[1];
    else  cout << -1 << "," << -1;
 
}