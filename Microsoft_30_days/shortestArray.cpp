#include <bits/stc++.h>
using namespace std;

void sortedArray(vector<int> N)
{
    // length of the vector 
    int len_Array = N.size()-1;
    // starting and the ending point of the array
    int start = -1, end = -1;
    // max and min item from the array
    int max_item = N[0];
    int min_item = N[len_Array];

    // iterate through the each element in the array
    for(int i = 1; i <= len_Array; i++)
    {
        int test = N[i];
        int test_1 = N[len_Array - i];
        // check condition
        if (test < max_item)
        {
            end = i;
        }
        else
        {
            max_item = test;
        }
        // check another condition
        if (test_1 > min_item)
        {
            start = i;
        }
        else
        {
            min_item = test_1;
        }
    }
    // leetcode submission
    int end_len = start + end;
    // cout << end_len << endl;
    int solve = end_len - len_Array + 1;
    // cout << solve << endl;
    int result = max(0, solve);
    return result;
}
