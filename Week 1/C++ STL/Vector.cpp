#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> v1(5,10); //vector of size 5 with all elements as 10
    vector<int> v2{1,2,3,4,5}; //vector of size 5 with elements 1,2,3,4,5
    vector<int> v3(v2.begin(),v2.end()); //vector of size 5 with elements 1,2,3,4,5
    vector<int> v4(v2); //vector of size 5 with elements 1,2,3,4,5
    vector<int> last(v2); //vector of size 5 with elements 1,2,3,4,5
    cout<<"Size of vector: "<<v.size()<<endl;
    cout<<"Size->"<<v.capacity()<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<"Size of vector: "<<v.size()<<endl;
    cout<<"Capacity of vector: "<<v.capacity()<<endl;
    cout<<"Element at 2nd index is: "<<v.at(2)<<endl;
    cout<<"Elements of vector: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"First element: "<<v.front()<<endl;
    cout<<"Last element: "<<v.back()<<endl;
    cout<<"Is vector empty? "<<(v.empty()?"Yes":"No")<<endl;
    v.pop_back();
    cout<<"Size of vector after pop_back: "<<v.size()<<endl;
    cout<<"Clearing vector..."<<endl;
    v.clear();
    cout<<"Size of vector after clear: "<<v.size()<<endl;
    return 0;

}