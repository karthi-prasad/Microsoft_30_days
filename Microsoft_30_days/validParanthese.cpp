#include <bits/stdc++.h>
using namespace std;

void validParan(string s)
{
    // length of the string 
    int len_str = s.length();
    // create an stack to store the valid pairs
    stack<char> paran;

    // iterate through each element in the string
    for(int i = 0; i<len_str; i++)
    {
        // check condition
        // check for the opening parans
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            // if the first character is openening parans append to the stack
            paran.push(s[i]);
        }
        else{
            // check condition
            // stack is empty or not
            if (paran.empty())
            {
                return false;
            }
            // check for the closing parans
            if (s[i] == ')')
            {
                // the stack top contains opening paran or not
                if (paran.top() == '(')
                {
                    // pop the item from the stack
                    paran.pop(); // pop the top element
                }
                else
                {
                    // cout << false << endl;
                    return false; // leetcode submission
                }
            }
             if (s[i] == ']')
            {
                // the stack top contains opening paran or not
                if (paran.top() == '[')
                {
                    // pop the item from the stack
                    paran.pop(); // pop the top element
                }
                else
                {
                    // cout << false << endl;
                    return false; // leetcode submission
                }
            }
             if (s[i] == '}')
            {
                // the stack top contains opening paran or not
                if (paran.top() == '{')
                {
                    // pop the item from the stack
                    paran.pop(); // pop the top element
                }
                else
                {
                    // cout << false << endl;
                    return false; // leetcode submission
                }
            }
        }
    }
    // check condition
    if(paran.empty())
    {
        return true;
    }
    return false;
}