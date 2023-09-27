#include "RandomNumberGuesser.h"
#include <cstdlib> 
#include <iostream>
#include <ctime> 
#include <cmath> 
using namespace std;
void RandomNumberGuesser::guessRandomNumber()
{

	//min and max values 
	int min = 1, max = 100;

	//seed random number generator 
	srand(time(0));

	//generate a random number to guess 
	int randN = rand() % (max - min + 1) + min;

	int guess;

	int attempts = 0;

	// welcome message
	cout << "Select a random number between 1 and 100. Try to guess it!" << endl;


	//game loop 
   
    //set a variable to act as the game loop state 
    bool gameState = true;
    while (gameState) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < 1 || guess > 100) {
            //over value Testing
            cout << "Please enter a number between 1 and 100." << endl;
        }
        else if (guess < randN) {
            std::cout << "Too low. Try again." << std::endl;
        }
        else if (guess > randN) {
            std::cout << "Too high. Try again." << std::endl;
        }
        else {
            // Correct guess
            cout << "Congratulations. You figured out my number!" << std::endl;
            cout << "It took you " << attempts << " guess(es)." << std::endl;
            gameState = false; //stop the game 
        }
    }

  









}