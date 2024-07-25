#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int getRandomNumber()
{
    srand(time(nullptr));
    return rand() % 100 + 1;
}

int main()
{
    int minRange = 1, maxRange = 100, attemps = 0, guess;
    int targetNumber = getRandomNumber();
    cout << "-------------Welcome to the Number Guessing Game-------------" << endl;
    cout << "Guess a number between " << minRange << " and " << maxRange << endl;
    do
    {
        cout << "Enter your guess : ";
        cin >> guess;
        attemps++;
        if (guess < targetNumber)
        {
            cout << "Low! Try again." << endl;
        }
        else if (guess > targetNumber)
        {
            cout << "High! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the correct number in " << attemps << " attemps." << endl;
        }

    } while (targetNumber != guess);
    return 0;
}
