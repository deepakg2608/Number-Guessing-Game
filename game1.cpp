#include<bits/stdc++.h>
using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    int secretNumber =rand() % 100 + 1;
    int guess = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have picked a number between 1 and 100." <<    endl;

    while (guess != secretNumber) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < secretNumber) {
            cout << "Too low! Try again." <<  endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number!" << endl;
        }
    }

    return 0;
}
