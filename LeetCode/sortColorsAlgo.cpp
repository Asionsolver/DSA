#include <iostream>  // For std::cout
#include <algorithm> // For std::sort
#include <vector>    // For std::vector

int main()
{
    // Initialize a vector with some integers
    std::vector<int> nums = {2, 0, 2, 1, 1, 0};

    // Output the vector before sorting
    std::cout << "Before sorting: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Use the sort function to sort the vector in non-decreasing order
    std::sort(nums.begin(), nums.end());

    // Output the vector after sorting
    std::cout << "After sorting: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

// T.C: O(nlogn)
// S.C: O(n)