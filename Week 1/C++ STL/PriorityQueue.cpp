#include <iostream>
#include <queue>

using namespace std;

int main() {
    //Max Heap
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(15);
    cout << "Top Element-> " << pq.top() << endl;
    pq.pop();
    cout << "Top Element-> " << pq.top() << endl;
    cout << "Size of priority queue-> " << pq.size() << endl;
    cout << "Empty or not-> " << pq.empty() << endl;

    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int,vector<int> , greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout << "size-> " << maxi.size() << endl;

    int n = maxi.size();
    for(int i=0;i<n;i++) {
        cout << maxi.top() << " ";
        maxi.pop();
    }cout << endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    int m = mini.size();
    for(int i=0;i<m;i++) {
        cout << mini.top() << " ";
        mini.pop();
    }cout << endl;
}