// 539. Minimum Time Difference

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int findMinDifference(vector<string> &timePoints)
{
    vector<int> minutes;

    for (int i = 0; i < timePoints.size(); i++)
    {
        string current = timePoints[i];
        int hours = stoi(current.substr(0, 2));
        int minute = stoi(current.substr(3, 2));
        int totalMinute = hours * 60 + minute;
        minutes.push_back(totalMinute);
    }
    sort(minutes.begin(), minutes.end());
    int size = minutes.size();
    int minimum = INT_MAX;
    for (int i = 0; i < size - 1; i++)
    {
        int diff = minutes[i + 1] - minutes[i];
        minimum = min(minimum, diff);
    }
    int lastDiff = (minutes[0] + 1440) - minutes[size - 1];
    minimum = min(minimum, lastDiff);
    return minimum;
}

int main()
{
    // vector<string> timePoints = {"00:00", "23:59", "00:00"};
    vector<string> timePoints = {"23:59", "00:00"};
    int result = findMinDifference(timePoints);
    cout << "Minimum Time Difference: " << result << endl;
    return 0;
}