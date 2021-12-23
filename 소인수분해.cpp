#include <iostream>
#include <vector>

using namespace std;

vector<int> factor (int n){
    if(n == 1) return vector<int> (1,1);
    vector<int> ret;
    for(int div =2; n > 1; div++){
        while(n % div==0){
            cout << n << endl;
            n /= div;
            ret.push_back(div);
        }
    }
    return ret;

}
int main()
{
    vector<int> a;
    a = factor(10);
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " " << i << " ";
    }
}