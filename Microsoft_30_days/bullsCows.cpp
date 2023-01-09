#include <bits/stdc++.h>
using namespace std;

typedef int i;
typedef vector<i> secretNum(10, 0); // vector size 10 filled with 0's
typedef vector<i> guessNum(10, 0); // vectior size 10 filled with 0's


void bullsCows(string guess, string secret)
{
    // length of the guess and secret numbers
    int length_1 = guess.length();
    int length_2 = secret.length();

    // create the two vector for the leetcode 
    vector<int> secretNum(10, 0);
    vector<int> guessNum(10, 0);
    // create two variables with intial value zero
    int bulls = 0, cows = 0;

    // iterate through each element in the secret and guess number
    for(int i = 0; i < length_2; i++)
    {
        // check condition
        // the both values in the two vector are same or not
        // check for their index values also needs to be same
        if(secret[i] == guess[i])
        {
            // increase the bulls count
            bulls++;
        }
        else
        {
            secretNum[secret[i] - '0']++;
            guessNum[guess[i] - '0']++;
        }
    }
    // iterate and found the cows count
    for(int i = 0; i < 10; i++)
    {
        cows += min(secretNum[i], guessNum[i]);
    }

    // cout << to_string(bulls) + "A" + to_string(cows) + "B" << endl;

    // return it in specific format for leetcode submission
    return to_string(bulls) + "A" + to_string(cows) + "B";
}