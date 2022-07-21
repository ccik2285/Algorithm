#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

vector<int> a;
bool arr[121];
int main() {
    int n;
    cin >> n;
    a.resize(n,0);
    for(int i=0; i <= n; i++){
        a[i] = i;
    }
    for(int i=2; i <= sqrt(n); i++){
        if(a[i] == 0){
            continue;
        }

        for(int j=i*i; j <= n; j += i)
        {
            a[j] = 0;
        }       

    }
     for (int i = 2; i <=  n; i++)
    {
        if (a[i] != 0)
            printf("%d\n", a[i]);
    }
}