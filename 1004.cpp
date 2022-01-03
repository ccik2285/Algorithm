#include <iostream>

using namespace std;

int main() {
    int tc;
    int ans = 0;
    cin >> tc;
    for(int i=0; i < tc; i++){
        int ans = 0;
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int n;
        cin >> n;
        for(int j=0; j<n; j++){
            int x,y,r;
            int d;
            int isin1 =0;
            int isin2 =0;
            cin >> x >> y >> r;
            d = (x1-x)*(x1-x) + (y1-y)*(y1-y);
            if(d < r*r) isin1 = 1; 
            d = (x2-x)*(x2-x) + (y2-y)*(y2-y);
            if(d < r*r) isin2 = 1; 
            if(isin1 != isin2) ans++;
        }
        cout << ans << "\n";
    }
}