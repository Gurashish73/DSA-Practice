#include<iostream>
using namespace std;

void update(int arr[], int n){
    cout << "Inside function" << endl;
    //updating array
    arr[0] = 120;//updating the first element of array
    
    //printing the array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    } cout << endl;
    cout<<"Going back to main" << endl;
}
int sumArray(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int arr[3] = {1,2,3};
    update(arr, 3);
    //printing the array
    for(int i=0; i<3; i++){
        cout << arr[i] << " ";
    }cout << endl;
    cout << "Sum of all elements: " << sumArray(arr, 3) << endl;
    return 0;
}


