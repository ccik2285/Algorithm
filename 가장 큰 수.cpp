#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// string solution(vector<int> numbers) {
//     string answer = "";
//     sort(numbers.begin(),numbers.end());
//     long long max_number = 0;
//     long long temp_i;
//     do{
//         string temp = "";
//         for(int i=0; i<numbers.size(); i++){
//             temp += to_string(numbers[i]);
//             cout << temp << endl;
//         }
//         temp_i = stoll(temp);
//         max_number = max(temp_i,max_number);

//     }while(next_permutation(numbers.begin(),numbers.end()));
//     answer = to_string(max_number);
//     return answer;
// }
bool cmp(const string& a,const string& b){
    return a+b > b+a;
}
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> arr;
    for(int i=0; i<numbers.size(); i++){
        string temp = "";
        temp += to_string(numbers[i]);
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end(),cmp);
    for(int i=0; i<arr.size(); i++){
        answer+=arr[i];
    }
    return answer;
}
int main() {
    vector<int> num = {6,10,10,100,222,55555555,55555555,55555555,55555555,55555555,55555555};
    cout << solution(num);
}

