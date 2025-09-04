// Given n strings consisting of lowercase English alphabets. Print the character that is occurring most number of times.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// non-optimize approach
void charFrequencyPrint(string str)
{
    vector<int> frequencyVector(26, 0);
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        int asciiValue = (int)ch;
        frequencyVector[asciiValue - 97]++;
    }

    int mx = 0;
    for (int i = 0; i < frequencyVector.size(); i++)
    {
        if (frequencyVector[i] > mx)
        {
            mx = frequencyVector[i];
        }
    }
    for (int i = 0; i < frequencyVector.size(); i++)
    {
        if (frequencyVector[i] == mx)
        {
            int ascii = i + 97;
            char ch = (char)ascii;
            cout << ch << " " << mx << endl;
        }
    }
}

// non-optimize approach
// int charFrequencyCount(string str)
// {
//     int max = 0;
//     int size = str.length();
//     for (int i = 0; i < size; i++)
//     {
//         int count = 1;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (str[j] == str[i])
//             {
//                 count++;
//             }
//         }
//         if (max < count)
//         {
//             max = count;
//         }
//     }
//     return max;
// }

// non-optimize approach
// void charFrequencyPrint(string str)
// {
//     int max = 0;
//     int size = str.length();
//     for (int i = 0; i < size; i++)
//     {
//         int count = 1;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (str[j] == str[i])
//             {
//                 count++;
//             }
//         }
//         if (max < count)
//         {
//             max = count;
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         char ch = str[i];
//         int count = 1;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (str[j] == str[i])
//             {
//                 count++;
//             }
//         }
//         if (count == max)
//         {
//             cout << ch << " " << max << endl;
//         }
//     }
// }
int main()
{
    string str = "ashiis";
    // non-optimize approach
    // int result = charFrequencyCount(str);
    // cout << "Hight Character Frequency: " << result << endl;
    // non-optimize approach
    charFrequencyPrint(str);
    return 0;
}