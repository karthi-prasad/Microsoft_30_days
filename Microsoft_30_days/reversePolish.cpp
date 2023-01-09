#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string str;
typedef stack<ll int> st;
typedef vector<str> vs;

void reverseNotation(vs& tokens)
{
    // create an stack for the leet code submission
    stack<long long int> st;

    for(auto &i: tokens)
    {
        // check for the operators
        if(i == "+" || i == "-" || i == "*" || i == "/")
        {
            // take the first(top) element in the stack
            ll int operand_1 = st.top();
            // pop the top element in the stack
            st.pop();
            // again take the top element from the updated stack
            ll int operand_2 = st.top();
            // pop the top element from the stack
            st.pop();

            // condition to check the status
             if (i == "+")
            {
                operand_1 = operand_1 + operand_2;
            }
            if (i == "-")
            {
                operand_1 = operand_2 - operand_1;
            }
            if (i == "*")
            {
                operand_1 = operand_2 * operand_1;
            }
            if (i == "/")
            {
                operand_1 = operand_2 / operand_1;
            }
            // push the resultant to the stack
            st.push(operand_1);
        }
        else
        {
            // convert the str value to the integer
            st.push(stoll(i));
        }
    }
    // return the resultant value from the stack for leet code submission
    // return st.top();
    cout << "Result : " << st << endl;
}