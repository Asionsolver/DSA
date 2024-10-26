// Question : Allocate minimum number of page. This problem know as book allocation problem.
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/**
 * Description:
 * You are given N number of books. Every ith book has Ai number of pages. You have to allocate contiguous books to M number of students. There can be many way or permutations to do so. In each permutation, one of the M students will be allocated the maximum number of pages. out of all these permutations , the task is to find that particular permutation in which the maximum number of pages allocated to a student is the minimum of those in all the other permutation and print this minimum value.
 * Each book will be allocated to exactly  one students. Each student has to be allocated at least one book.
 * Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order(see the explanation for better understanding)
 */
bool isPossibleSolution(int arr[], int N, int M, int mid)
{
    int pageSum = 0;
    int count = 1;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        // when two book sum is greater than mid. Then first book allocate 1st student not allocate two book first student because two book sum is greater than mid.
        if (pageSum + arr[i] > mid)
        {
            count++;
            pageSum = arr[i];

            // When book allocation is greater than student. Then return false.
            if (count > M)
            {
                return false;
            }
        }
        // when two book sum is not greater than mid. Then first and second book allocate 1st student  because two book sum is not greater than mid.
        else
        {
            pageSum += arr[i];
        }
    }
    return true;
}

int findPage(int arr[], int N, int M)
{
    if (M > N)
    {
        return -1;
    }

    int start = 0;
    int end = accumulate(arr, arr + N, 0);
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossibleSolution(arr, N, M, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}
int main()
{
    int arr[] = {12, 34, 67, 90};
    int N = 4;
    int M = 2;

    cout << findPage(arr, N, M);

    return 0;
}