#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;


string solution(vector<int> numbers, string hand) {
    string answer = "";
    int lefthand = 10;
    int righthand = 12;
    int tmp_l;
    int tmp_r;
    for(int i=0; i < numbers.size(); i++){
        if(numbers[i]==0) numbers[i] = 10;
        if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7 || numbers[i] == 10){
            lefthand = numbers[i];
            answer+="L";
        }
        else if(numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9 || numbers[i] == 12 ){
            righthand = numbers[i];
            answer+="R";
        }
        else{
            tmp_l =abs(numbers[i] - lefthand);
            tmp_l =abs(numbers[i] - righthand);
            int dist_l = (tmp_l % 3) + (tmp_l / 3);
            int dist_r = (tmp_r % 3) + (tmp_r / 3);
            if(dist_l > dist_r) {answer += "R"; righthand = numbers[i];}
            else if(dist_l < dist_r) {answer += "L"; lefthand = numbers[i];}
            else {
                  if(hand == "right") {answer += "R"; righthand = numbers[i];}
                  else {answer += "left"; lefthand = numbers[i];}
            }
        }
    }
    return answer;
}