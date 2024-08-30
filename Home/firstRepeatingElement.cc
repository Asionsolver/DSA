

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#include <unordered_map>
using namespace std;
// ! Given an array arr[] of size n, find first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.

// int firstRepeatingElement(vector<int> nums)
// {
//     for(int i=0; i < nums.size();i++){
//         bool isRepeated = false;
//         for(int j = i+1; j < nums.size();j++){
//             if(nums[i]==nums[j]){
//                 isRepeated = true;
//                 return i+1;
//             }
//         }
//     }
//     return -1;
// }

int optimizeFirstRepeatingElement(vector<int> nums)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < nums.size(); i++)
    {
        hash[nums[i]]++;
    }

    // Find the first element that repeats
    for (int i = 0; i < nums.size(); i++)
    {
        if (hash[nums[i]] > 1)
        {
            return i + 1; // Return 1-based index of the first repeating element
        }
    }

    return -1;
}

int main()
{

    vector<int> nums = {1, 2, 3, 5, 5};
    // cout<<"Repeating element index: "<<firstRepeatingElement(nums);
    cout << "Repeating element index: " << optimizeFirstRepeatingElement(nums);
    return 0;
}

// T.C -> O(n^2)
// S.C -> O(1)