#include <iostream>
#include<queue>
using namespace std;
int main() {
    queue<string> q;
    q.push("Welcome");
    q.push("to");
    q.push("C++");
    cout << "Front Element-> " << q.front() << endl;
    cout << "Back Element-> " << q.back() << endl;
    q.pop();
    cout << "Front Element-> " << q.front() << endl;
    cout << "Size of queue-> " << q.size() << endl;
    cout << "Empty or not-> " << q.empty() << endl;
}