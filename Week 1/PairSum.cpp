//PairSum 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                vector<int> temp;
                temp.push_back(min(nums[i], nums[j]));
                temp.push_back(max(nums[i], nums[j]));
                result.push_back(temp[0]);
                result.push_back(temp[1]);
            }

        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> indices = twoSum(nums, target);

    cout << "Indices of the two numbers that add up to the target: ";
    for (int index : indices) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
