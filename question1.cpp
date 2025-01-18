#include <iostream>
#include <vector>
#include <numeric> // For std::accumulate

using namespace std;

// Naive Approach: Simple loop
int sumUsingLoop(const vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    return sum;
}

// Recursive Approach
int sumUsingRecursion(const vector<int>& nums, int n) {
    if (n == 0) {
        return 0; // Base case
    }
    return nums[n - 1] + sumUsingRecursion(nums, n - 1); // Recursive case
}

// Using Built-in Function
int sumUsingBuiltIn(const vector<int>& nums) {
    return accumulate(nums.begin(), nums.end(), 0); // std::accumulate computes sum
}

int main() {
    // Input: List of integers
    vector<int> nums;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    // Calculate sum using different approaches
    int sumLoop = sumUsingLoop(nums);
    int sumRecursion = sumUsingRecursion(nums, nums.size());
    int sumBuiltIn = sumUsingBuiltIn(nums);

    // Print results
    cout << "Sum using Loop: " << sumLoop << endl;
    cout << "Sum using Recursion: " << sumRecursion << endl;
    cout << "Sum using Built-in Function: " << sumBuiltIn << endl;

    return 0;
}
