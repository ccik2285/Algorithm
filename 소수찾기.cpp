#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
bool sosu(int num) {
	if (num < 2) return false;
	int a = (int) sqrt(num);
	for (int i = 2; i <= a; i++) if (num % i == 0) return false;
	return true;
}
int solution(string numbers){
    int answer = 0;
    vector<char> arr;
    vector<int> arr2;
    for(auto a : numbers){
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
        do{
            string tmp = "";
            for(int i=0; i<arr.size(); i++){
                tmp +=arr[i];
                arr2.push_back(stoi(tmp));
            }
        } while(next_permutation(arr.begin(),arr.end()));
    sort(arr2.begin(),arr2.end());
    arr2.erase(unique(arr2.begin(),arr2.end()),arr2.end());
    for(int i=0; i<arr2.size(); i++){
        if(sosu(arr2[i])) answer++;
    }
    return answer;
}

int main() {
    string s = "17";
    cout << solution(s);

}