#include <iostream>

using namespace std;
void back(int n,int start,int temp,int end){
    if(n==1){
        cout << start << " " << end << '\n';
    }
    else{
        back(n-1,start,end,temp);
        cout << start << " " << end << '\n';
        back(n-1,temp,start,end);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    cout << (1 << n) - 1 << '\n';
    back(n,1,2,3);
}