#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l;
    list<int> l1(5,10); //list of size 5 with all elements as 10
    list<int> l2{1,2,3,4,5}; //list of size 5 with elements 1,2,3,4,5
    list<int> l3(l2.begin(),l2.end()); //list of size 5 with elements 1,2,3,4,5
    list<int> n(l); //copy list l to list n
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    cout<<"Size of list: "<<l.size()<<endl;
    cout<<"Elements of list: ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.pop_back();
    cout<<"Size of list after pop_back: "<<l.size()<<endl;
    l.pop_front();
    cout<<"Size of list after pop_front: "<<l.size()<<endl;
    cout<<"front element: "<<l.front()<<endl;
    cout<<"back element: "<<l.back()<<endl;

    cout<<"Is list empty? "<<(l.empty()?"Yes":"No")<<endl;
    
    cout<<"Before erase, size of list: "<<l.size()<<endl;
    auto it = l.begin();
    advance(it, 1); // Move iterator to the second element
    l.erase(it); // Erase the second element
    cout<<"After erase, size of list: "<<l.size()<<endl;
    
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    
    cout<<"Size of list before clear: "<<l.size()<<endl;
    cout<<"Clearing list..."<<endl;
    l.clear();
    cout<<"Size of list after clear: "<<l.size()<<endl;
}