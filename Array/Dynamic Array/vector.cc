#include <iostream>
#include <vector>
using namespace std;

// void vectorArray(vector<int> v)
// {
//     int size = v.size();
//     cout << "Print vector elements: " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         // cout << v[i] << " ";
//         cout << v.at(i) << endl;
//     }
//     cout << endl;
// }
void vectorArray(vector<int> arr)
{
    // int size = v.size();
    cout << "Print vector elements using vector method: " << endl;
    for (auto value : arr)
    {
        cout << value << " ";
    }
}

int main()
{
    // ! In vector, do not tell a size vector.
    // ! Keep inserting, i will manage the allocations.

    // default syntax of vector array: vector<data_type>array_name;
    // vector<int> v;

    // ! Dynamic Array size
    // int n;
    // cout << "Enter size of array: ";
    // cin >> n;

    // vector<int> arr(n);

    // Check size
    // arr.size();

    // Check empty
    // arr.empty();

    // Create vector
    // vector<int> arr;
    // int ans = (sizeof(arr) / sizeof(int));
    // cout << ans << endl;

    // insert
    // arr.push_back(5);
    // arr.push_back(6);
    // arr.push_back(7);

    // // print
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // cout << "Vector arr is Empty or not " << arr.empty() << endl;

    // vector<int> brr;
    // cout << "Vector brr is Empty or not " << brr.empty() << endl;
    // ! vector initialization rule
    // vector<int> arr(5, 1);
    // arr.push_back(5);
    // vectorArray(arr);
    // ! vector initialization rule
    // vector<int> arr2 = {1, 4, 73, 34, 24, 34, 344, 443};
    // arr2.push_back(90);
    // vectorArray(arr2);
    // ! vector initialization rule
    // vector<int> arr2{1, 4, 73, 34, 24, 34, 344, 443};
    // arr2.push_back(90);
    // vectorArray(arr2);

    // how to copy another vector
    // vector<int> arr{1, 4, 73, 34, 24, 34, 344, 443};
    // vector<int> copys(arr);
    // vectorArray(copys);

    // vector<char> words;
    // words.push_back('a');
    // words.push_back('b');
    // words.push_back('c');
    // words.push_back('d');
    // words.push_back('e');
    // words.push_back('f');

    // cout << "Words vector first element: " << words[0] << endl;
    // cout << "Words vector last element: " << words[words.size() - 1] << endl;
    // cout << "Words vector first element: " << words.front() << endl;
    // cout << "Words vector last element: " << words.back() << endl;

    // while (1)
    // {
    //     int data;
    //     cin >> data;
    //     v.push_back(data);
    //     cout << "Capacity: " << v.capacity() << " Size: " << v.size() << endl;
    // }

    // insert element
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);

    // delete element
    // v.pop_back();
    // v.pop_back();
    // v.pop_back();
    // v.pop_back();
    // v.pop_back(); // terminate called after throwing an instance of 'std::bad_array_new_length' what():  std::bad_array_new_length

    // int n;
    // cout << "Enter the size of vector array: ";
    // cin >> n;
    // cout << "Enter the elements of vector array: ";
    // for (int i = 0; i < n; i++)
    // {
    //     int data;
    //     cin >> data;
    //     v.push_back(data);
    // }

    // for (int i = 0; i < 100; i++)
    // {
    //     v.push_back(50);
    // }

    // vectorArray(v);
    // v.clear();
    // vectorArray(v);

    // vector<int>
    //     arr{4, 3, 2, 24, 422, 223, 32};
    // vectorArray(arr);

    vector<int> arr;

    arr.push_back(5);

    cout << arr.size();
    cout << endl;
    cout << arr.capacity();
    cout << endl;

    return 0;
}