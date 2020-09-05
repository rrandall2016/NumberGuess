#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
using namespace std;

int main() 
{

    int secret = rand() % 15;
    int guess;
    int amountguesses = 0;

    cout << "Guess the secret number from 1 - 15: ";
    cin  >> guess;

    if (guess > secret) {
        cout << "Too high" << endl;
    }   else if (guess < secret) 
    {   cout << "Too low" << endl;
    }   else {
        cout << "Great job!" << endl;
    }

    while (guess != secret) {

        cout << "Guess the secret number: ";
        cin  >> guess;
        amountguesses = amountguesses + 1;

     
    if (guess > secret) {
        cout << "Too high" << endl;
    }   else if (guess < secret) 
    {   cout << "Too low" << endl;
    }   else {
        cout << "Great job!" << endl;
    }
       


    }
         cout << "Amount of guesses: " << amountguesses;



}