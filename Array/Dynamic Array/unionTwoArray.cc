#include <iostream>
#include <vector>
using namespace std;

// Union of two array
int main()
{
    int arrA[] = {1, 2, 3, 4};
    int arrB[] = {4, 5, 6, 6, 6};

    int sizeA = 3;
    int sizeB = 3;
    vector<int> ans;

    // push all element of vector array
    for (int i = 0; i < sizeA; i++)
    {
        ans.push_back(arrA[i]);
    }

    for (int i = 0; i < sizeB; i++)
    {

        ans.push_back(arrB[i]);
    }

    // print ans vector

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}