#include <iostream>
#include <vector>
#include <algorithm> // Add this line to include the sort function

#include <set>
using namespace std;

// ! Given three arrays sorted in increasing order. Find the elements that are common  in all three array.
// Note: can you take care of the duplicated without using any additional Data Structure?

vector<int> commonElements(int a[], int b[], int c[], int s1, int s2, int s3)
{
    vector<int> ans;
    set<int> st;
    int i, j, k;
    i = j = k = 0;
    while (i < s1 && j < s2 && k < s3)
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            // ans.push_back(a[i]);
            st.insert(a[i]);

            // int commonValue = a[i];
            // while (i < s1 && a[i] == commonValue)
            i++;
            // while (j < s2 && b[j] == commonValue)
            j++;
            // while (k < s3 && c[k] == commonValue)
            k++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < c[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    for (auto value : st)
    {
        ans.push_back(value);
    }
    return ans;
}

int main()
{

    int a[] = {11, 13, 45, 80, 62, 72, 79, 90};
    // int a[] = {3, 3, 3};
    int s1 = sizeof(a) / sizeof(int);

    int b[] = {13, 24, 27, 31, 62, 74, 89, 89, 96};
    // int b[] = {3, 3, 3};
    int s2 = sizeof(b) / sizeof(int);

    int c[] = {12, 48, 58, 60, 62, 65, 88};
    // int c[] = {3, 3, 3};
    int s3 = sizeof(c) / sizeof(int);
    // Sort the arrays before passing them to the function
    sort(a, a + s1);
    sort(b, b + s2);
    sort(c, c + s3);

    vector<int> result = commonElements(a, b, c, s1, s2, s3);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}

// T.C -> O(n)
// S.C -> O(n)