#include <bits/stdc++.h>
using namespace std;

void subStrings(string st)
{
    // length of the string
    int len = st.size();

    // create an empty variable with zero as initial value
    int test = 0;

    // create three variables for three characters to store the index value
    int index_1 = -1, index_2 = -1, index_3 = -1;

    // iterate through each element in the array
    for(int i = 0; i < len; i++)
    {
        // switch case to check the each character
        switch(st[i])
        {
            case "a":
                index_1 = i;
                break;
            case "b":
                index_2 = i;
                break;
            case "c":
                index_3 = i;
                break;
        }
        // check condition
        if(i > 1)
        {
            int stat = min(index_1, index_2);
            test += min(stat, index_3) + 1;
        }
    }
    // cout << test << endl;
    // for leet code submission
    return test;
}