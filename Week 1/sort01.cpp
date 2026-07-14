//Sort 0s and 1s in an array
#include <iostream>
#include <vector>
using namespace std;

void sort01(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        if (arr[left] == 0) {
            left++;
        } else if (arr[right] == 1) {
            right--;
        } else {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
int main() {
    vector<int> arr = {1, 1, 0, 0, 0, 0, 1, 0}; // Example input array with 0s and 1s
    sort01(arr);
    
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}


// Sort 0s, 1s and 2s in an array
#include <iostream>     
#include <vector>
using namespace std;

void sort012(vector<int>& arr) {
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
        }
    }
}