#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct A{
    int data;
    int pos;
};

struct cmp{
    bool operator()(const A a,const A b){
        return a.data > b.data;    
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n,l;
    cin >> n >> l;
    vector<int> arr(n);
    for(int i=0;i < n; i++){
        cin >> arr[i];
    }
    priority_queue<A,vector<A>,cmp> pq;
    for(int i=0; i<n; i++){
        pq.push({arr[i],i});
        int pos = pq.top().pos;
        while(pos < i-l+1){
            pq.pop();
            pos = pq.top().pos;
        }
        cout << pq.top().data << " ";
    }       

}