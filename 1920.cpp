#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N;
    cin >> N;
    vector<int> arr;

    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    int M;
    cin >> M;
    for(int i=0; i<M; i++){
        int a;
        cin >> a;
        cout << binary_search(arr.begin(),arr.end(),a) << "\n";
    }
}