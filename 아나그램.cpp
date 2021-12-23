// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
//     int ans = 0;
//     string x,y;
//     cin >> x >> y;
//     vector<int> a,b;
//     vector<int> check2;
//     int check =0;
//     for(auto &s : y){
//         b.push_back(s);
//         check2.resize(b.size()+1,0);
//     }
//     for(auto &s : x) {
//         a.push_back(s);
//     }
//     for(int i=0; i<a.size()-b.size()+1; i++){
//         for(int j=i; j < i+b.size(); j++){
//             for(int z=0; z<b.size(); z++){
//                 if(a[j] == b[z] && check2[z] != 1){
//                     check++;
//                     check2[z] =1;
//                 }
//                 if(check == b.size()){
//                     ans++;
//                     check =0;         
//                     for(int i=0; i < check2.size(); i++){
//                         check2[i] =0;
//                     }
//                 }
//                 if(j-i == b.size() && check < b.size()){
//                     for(int i=0; i < check2.size(); i++){
//                         check2[i] =0;
//                     }
//                 }
//             }
//         }
//     }
//     cout << ans;
// }
