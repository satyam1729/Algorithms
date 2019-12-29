#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int MaxSumSubArrayValue(const vector<int> &a)
{
    int n = a.size();
    int currSum = 0;
    int bestSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum = max(currSum + a[i], 0); // currSum = max(prevSum+a[i],0)
        bestSum = max(bestSum, currSum);
    }
    /*
    Uncomment if you need to have at least one element in the subarray
    [-3,-4,-5] -> 0
    if (bestSum == 0 && n > 0)
    {
        bestSum = *max_element(a.begin(), a.end());
    }
    */
    return bestSum;
}
int main()
{
    vector<int> a{-2, 3, -2, 3, -1, 2};
    cout << "Max Sum among Subarrays: ";
    cout << MaxSumSubArrayValue(a);
    return 0;
}