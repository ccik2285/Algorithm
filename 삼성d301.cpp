#include <iostream>
#include <algorithm>
using namespace std;
 
int main(void) {
 
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int n;
        cin >> n;
 
        int a[7];
        for (int i = 0; i < 7; i++) cin >> a[i];
        int ret = 700000;
        for (int i = 0; i < 7; i++) {
            int check = 0, idx = 0;
            while (check != n) {
                if (a[(i + idx) % 7]) check++;
                idx++;
            }
            ret = min(ret, idx);
        }
        cout << "#" << tc << " " << ret << endl;
    }
    return 0;
}