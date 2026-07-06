#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> arr = {1, 2, 3, 4, 5}; // Example input array
    
    int size = arr.size(); // Get the size of the array

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print each element of the array
    }

    cout<<"Element at 2nd index is: "<<arr.at(2)<<endl; // Accessing element at index 2 using the at() method

    cout<<"Empty or not: "<<arr.empty()<<endl; // Check if the array is empty

    cout<<"First element is: "<<arr.front()<<endl; // Access the first element of the array
    cout<<"Last element is: "<<arr.back()<<endl; // Access the last element of the array