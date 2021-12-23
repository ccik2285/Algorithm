#include<iostream>
  
using namespace std;
  
int main(int argc, char** argv)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;
    int T;
  
    cin>>T;
    /*
       여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
    */
    for(test_case = 1; test_case <= T; ++test_case)
    {
  
        int a,b,c,d;
        cin >> a >> b >> c >> d;
  
    
        int ans = min(b,d) - max(a,c) ;
        cout << '#'<<test_case<< ' ';
        if (ans<=0) cout << 0 << '\n';
        else cout << ans << '\n';
  
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}