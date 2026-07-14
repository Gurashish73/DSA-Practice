//Triplet Sum 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums, int target) {
    vector<vector<int>> result;
    for (int i = 0; i < nums.size() - 2; i++) {
        for (int j = i + 1; j < nums.size() - 1; j++) {
            for (int k = j + 1; k < nums.size(); k++) {
                if (nums[i] + nums[j] + nums[k] == target) {
                    result.push_back({nums[i], nums[j], nums[k]});
                }
            }
        }
    }
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 9;
    vector<vector<int>> triplets = threeSum(nums, target);

    cout << "Triplets that add up to the target:";
    for (const auto& triplet : triplets) {
        cout << " [";
        for (int i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i + 1 < triplet.size()) {
                cout << ", ";
            }
        }
        cout << "]";
    }
    cout << endl;

    return 0;
}

// Given an array of integers arr and an integer K, find all unique triplets in the array which gives the sum of K.
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    vector<vector<int>> result;
    
    // Step 1: Sort the array
    sort(arr.begin(), arr.end());

    // Step 2: Iterate through the array
    for (int i = 0; i < n - 2; i++) {
        // Skip duplicates for the first element to ensure distinct triplets
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = n - 1;

        // Step 3: Two-pointer search
        while (left < right) {
            int current_sum = arr[i] + arr[left] + arr[right];

            if (current_sum == K) {
                // Found a valid triplet
                result.push_back({arr[i], arr[left], arr[right]});

                // Skip duplicates for the 'left' pointer
                while (left < right && arr[left] == arr[left + 1]) {
                    left++;
                }
                // Skip duplicates for the 'right' pointer
                while (left < right && arr[right] == arr[right - 1]) {
                    right--;
                }

                // Move both pointers inward after processing the duplicates
                left++;
                right--;
            } 
            else if (current_sum < K) {
                left++; // We need a larger sum
            } 
            else {
                right--; // We need a smaller sum
            }
        }
    }
    return result;
}