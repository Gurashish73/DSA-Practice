//find Array Intersection
#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> result;
    // Implementation for finding intersection
    for (int i = 0; i < nums1.size(); i++) {
        for (int j = 0; j < nums2.size(); j++) {
            if (nums1[i] == nums2[j]) {
                result.push_back(nums1[i]);
                break; // Break to avoid adding duplicates from nums2
            }
        }
    }
    return result;
}

int main() {
    vector<int> nums1 = {1, 2, 2, 1}; // Example input array 1
    vector<int> nums2 = {2, 2};       // Example input array 2
    vector<int> result = intersection(nums1, nums2);
    
    cout << "The intersection of the two arrays is: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}

//Given both the arrays are sorted, we can use two pointers to find the intersection in O(n) time complexity.

vector<int> intersectionSorted(vector<int>& nums1, vector<int>& nums2) {
    vector<int> result;
    int i = 0, j = 0;
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
            i++;
        } else if (nums1[i] > nums2[j]) {
            j++;
        } else {
            result.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return result;
}