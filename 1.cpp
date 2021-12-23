#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

string solution(string phone_number){
    string answer ="*";
    int str_length = phone_number.size();
    for(int i =0; i < str_length-4; i++){
        phone_number[i] = *"*";      
    }
    cout << phone_number << endl;
    return answer;


}
int main()
{
    string ans;
    cin >> ans;
    solution(ans);
    cout << ans;
}
