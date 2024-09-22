// Question: Find the odd occurring element in an array
// ! all element occur even no of times except one
// ! all repeating occurrence of element appear in pairs & pairs are not adjacent

// int arr[] = {1, 1, 5, 5, 6, 7, 7, 8, 8};

#include <iostream>
#include <vector>
using namespace std;

int oddOccurring(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (start == end)
        {
            // single element
            return start;
        }

        // Logic: mid -> even or mid -> odd

        // ! when mid == even
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                // we are in left side. So we will go to right side
                start = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        // ! when mid == odd
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                // we are in left side. So we will go to right side
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr{1, 1, 5, 5, 6, 6, 7, 7, 8, 8, 9};

    int ans = oddOccurring(arr);

    cout << "The Odd Occurring number index is " << ans << endl;
    cout << "The Odd Occurring number is " << arr[ans] << endl;

    return 0;
}