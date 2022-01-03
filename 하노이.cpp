#include <iostream>

using namespace std;
void back(int n,int start,int temp,int end){
    if(n==1){
        cout << start << " " << end << endl;
    }
    else{
        back(n-1,start,end,temp);
        cout << start << " " << end << endl;
        back(n-1,temp,start,end);
    }
}

int main() {
    int n;
    cin >> n;
    back(n,1,2,3);
}