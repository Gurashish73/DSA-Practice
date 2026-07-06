#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout << "Printing array elements using function" << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){

    int even[8] = {5,2,9,4,7,6,1,0};
    int odd[5] = {3,8,2,1,4};

    cout << "Original even array: ";
    printArray(even, 8);

    swapAlternate(even, 8);

    cout << "Even array after swapping alternate elements: ";
    printArray(even, 8);

    cout << "Original odd array: ";
    printArray(odd, 5);

    swapAlternate(odd, 5);

    cout << "Odd array after swapping alternate elements: ";
    printArray(odd, 5);

    return 0;
}