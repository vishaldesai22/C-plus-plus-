#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to determine the winner of a single round
int rule(char playerChoice, char computerChoice) {
    if (playerChoice == computerChoice) {
        return 0; // Tie
    }

    // Rock beats Scissors, Scissors beat Paper, Paper beats Rock
    if ((playerChoice == 'r' && computerChoice == 's') || 
        (playerChoice == 's' && computerChoice == 'p') || 
        (playerChoice == 'p' && computerChoice == 'r')) {
        return 1; // Player wins
    }
    return -1; // Computer wins
}

int main() {
    char computerChoice, playerChoice;
    int playerPoints = 0, computerPoints = 0;

    // Print a decorative welcome message
    cout << "\t\t\t\t";
    for (int i = 0; i < 50; i++) cout << "-";
    cout << endl << "\t\t\t\t Welcome to the Rock, Paper, Scissors Game!" << endl;
    cout << "\t\t\t\t";
    for (int i = 0; i < 50; i++) cout << "-";
    cout << endl;

    // Instructions for the player
    cout << "\t\t\t\t Instructions: " << endl;
    cout << "\t\t\t\t 'r' - Rock" << endl;
    cout << "\t\t\t\t 'p' - Paper" << endl;
    cout << "\t\t\t\t 's' - Scissors" << endl << endl;

    // 3-turn loop
    for (int turn = 1; turn <= 3; turn++) {
        cout << "\t\t\t\t Turn " << turn << " of 3" << endl;

        // Generate a random choice for the computer
        srand(time(0) + turn); // Use time + turn to generate different random seeds
        int randomNum = rand() % 100;

        // Assign the computer's choice based on the random number
        if (randomNum < 33) {
            computerChoice = 'r'; // Rock
        } else if (randomNum > 66) {
            computerChoice = 's'; // Scissors
        } else {
            computerChoice = 'p'; // Paper
        }

        // Ask for the player's choice
        cout << "\t\t\t\t Enter your choice (r/p/s): ";
        cin >> playerChoice;
     
        // Determine the outcome of the round
        int result = rule(playerChoice, computerChoice);

        // Update and display points
        if (result == 1) {
        	
            playerPoints++;
            
            cout << "\t\t\t\t You won this round!" << endl;
        } else if (result == -1) {
            computerPoints++;
            cout << "\t\t\t\t You lost this round!" << endl;
        } else {
            cout << "\t\t\t\t It's a tie this round!" << endl;
        }

        // Display the current score
        cout << "\t\t\t\t Current Score: Player " << playerPoints << " - " 
             << computerPoints << " Computer" << endl;

        // Decorative line for separation
        cout << "\t\t\t\t";
        for (int i = 0; i < 50; i++) cout << "-";
        cout << endl;
    }

    // Final result after 3 turns
    cout << "\t\t\t\t Final Score: Player " << playerPoints << " - " 
         << computerPoints << " Computer" << endl;

    if (playerPoints > computerPoints) {
        cout << "\t\t\t\t Congratulations! You are the overall winner!" << endl;
    } else if (playerPoints < computerPoints) {
        cout << "\t\t\t\t Sorry! The computer is the overall winner!" << endl;
    } else {
        cout << "\t\t\t\t It's a tie overall! Well played!" << endl;
    }

    return 0; // Exit the program
}
