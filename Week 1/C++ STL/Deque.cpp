#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    cout<<"First Index element: "<<d.at(0)<<endl; 
    cout<<"Size of deque: "<<d.size()<<endl;
    cout<<"Elements of deque: ";
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    d.pop_back();  
    cout<<"Size of deque after pop_back: "<<d.size()<<endl;
    d.pop_front();
    cout<<"Size of deque after pop_front: "<<d.size()<<endl;
    cout<<"front element: "<<d.front()<<endl;
    cout<<"back element: "<<d.back()<<endl;

    cout<<"Is deque empty? "<<(d.empty()?"Yes":"No")<<endl;
    cout<<"Before erase, size of deque: "<<d.size()<<endl;
    d.erase(d.begin(), d.begin() + 2); // Erase first two elements
    cout<<"After erase, size of deque: "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"Size of deque before clear: "<<d.size()<<endl;
    cout<<"Clearing deque..."<<endl;
    d.clear();
    cout<<"Size of deque after clear: "<<d.size()<<endl;
}

    