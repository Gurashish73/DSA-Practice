//Introduction to Array 
#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout << "Printing array elements using function" << endl;
    for(int i=0; i<size; i++){
        cout << "Value at index " << i << " is: " << arr[i] << endl;
    }
}
int main(){

    //declare
    int number [15];

    //accessing array elements
    cout << "Value at 14th index is: " << number[14] << endl;       

    //initializinng an array
    int second[3]= {5,7,11};
    //accessing array elements
    cout << "Value at 2nd index is: " << second[2] << endl;

    int third[5] = {1,2,3}; //other elements will be initialized to 0
    cout << "Value at 3rd index is: " << third[3] << endl;

    //printing array elements using function
    printArray(third, 5);

    int fourth[10] = {0}; //all elements will be initialized to 0
    //printing array elements using function
    printArray(fourth, 10);

    int fifth[10] = {1}; //first element will be initialized to 1 and rest all elements will be initialized to 0
    //printing array elements using function    
    printArray(fifth, 10);

    int fifthSize = sizeof(fifth)/sizeof(int); //size of array
    cout << "Size of fifth array is: " << fifthSize << endl;

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << "Value at 3rd index is: " << ch[3] << endl;

    //printArray(ch, 5); //this will give error because we are passing char array to int array function
    //printing the array
    for(int i=0; i<5; i++){
        cout << "Value at index " << i << " is: " << ch[i] << endl;
    }

    double firstDouble[5] = {1.2, 2.3, 3.4, 4.5, 5.6};
    cout << "Value at 4th index is: " << firstDouble[4] << endl;

    float firstFloat[5] = {1.2, 2.3, 3.4, 4.5, 5.6};
    cout << "Value at 4th index is: " << firstFloat[4] << endl;

    bool firstBool[5] = {true, false, true, false, true};
    cout << "Value at 4th index is: " << firstBool[4] << endl;
    
    cout << endl<< "Everything is fine" << endl<<endl;
    return 0;
}   

