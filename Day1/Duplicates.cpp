//find duplicates in an array
#include <iostream>
#include <vector>
using namespace std;
 int findDuplicates(vector<int>& arr){
    int ans=0;
    //XOR all the elements in the array
    //dry run for arr = {1, 2, 3, 4, 5, 3}
    //1^2^3^4^5^3 = 1^2^4^5
    for (int i = 0; i < arr.size(); i++) {
        ans ^= arr[i];

        }
    //XOR all the numbers from 1 to n-1
    //dry run for arr = {1, 2, 3, 4, 5, 3}
    //1^2^3^4^5 = 1^2^4^5
    //XOR of the two results will give the duplicate number
    //1^2^4^5 ^ 1^2^4^5 = 3

    for (int i = 1; i <arr.size(); i++) {
        ans ^= i;
    }
    return ans;
 }
 int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 3}; // Example input array with a duplicate
    int duplicate = findDuplicates(arr);
    cout << "The duplicate number is: " << duplicate << endl;
    return 0;
 }

 //what to give in input array to find duplicates in an array
 //Input array should contain numbers from 1 to n-1, where n is the size of the array
 //and one number is repeated twice