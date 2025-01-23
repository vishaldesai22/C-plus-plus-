#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <unistd.h> // For sleep()

using namespace std;

// Function Prototypes
void default_message();
void rules();
int play();
string get_player_name(const string& prompt);
char get_player_choice();
int first_player();
void display_board(char board[10], char avail[10]);
int get_player_move(char board[10], const string& name, char choice);
int comp_ai(char board[10], char choice);
void place_marker(char board[10], char avail[10], char choice, int position);
int space_check(char board[10], int position);
int full_board_check(char board[10]);
int win_check(char board[10], char choice);
void delay(int mode);
int replay();

// Main Function
int main() {
    cout << "\n\t\t TIC-TOC GAME! \n";
    cin.get(); // Wait for user to press Enter
    default_message();
    rules();

    while (true) {
        char board[10] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
        char available[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        int mode;

        cout << "\n[0]. Player vs. Computer";
        cout << "\n[1]. Player vs. Player";
        cout << "\n[2]. Computer vs. Computer";
        cout << "\nSelect an option [0]-[2]: ";
        cin >> mode;

        string p1_name;
        string p2_name;
        char p1_choice, p2_choice;

        if (mode == 1) {
            p1_name = get_player_name("\nEnter NAME of PLAYER 1:\t");
            p2_name = get_player_name("Enter NAME of PLAYER 2:\t");
            p1_choice = get_player_choice();
            p2_choice = (p1_choice == 'X') ? 'O' : 'X';

            cout << "\n" << p1_name << ": " << p1_choice << "\n";
            cout << p2_name << ": " << p2_choice << "\n";
        } else if (mode == 0) {
            p1_name = get_player_name("\nEnter YOUR NAME:\t");
            p1_choice = get_player_choice();
            p2_name = "Computer";
            p2_choice = (p1_choice == 'X') ? 'O' : 'X';

            cout << "\n" << p1_name << ": " << p1_choice << "\n";
            cout << p2_name << ": " << p2_choice << "\n";
        } else if (mode == 2) {
            p1_name = "Computer 1";
            p2_name = "Computer 2";
            p1_choice = 'X';
            p2_choice = 'O';

            cout << "\n" << p1_name << ": " << p1_choice << "\n";
            cout << p2_name << ": " << p2_choice << "\n";
        } else {
            cout << "Invalid Option. Exiting Game...\n";
            break;
        }

        int turn = first_player();
        cout << "\n" << ((turn == 0) ? p1_name : p2_name) << " will go first!\n";

        bool game_on = true;
        while (game_on) {
            display_board(board, available);

            if ((mode == 0 && turn == 1) || (mode == 2 && turn == 1)) {
                int position = comp_ai(board, (turn == 0) ? p1_choice : p2_choice);
                place_marker(board, available, p2_choice, position);
                cout << "\n" << p2_name << " placed " << p2_choice << " at position " << position << ".\n";
                delay(mode);
            } else {
                int position;
                if (mode == 2) {
                    position = comp_ai(board, p1_choice);
                } else {
                    position = get_player_move(board, (turn == 0) ? p1_name : p2_name, (turn == 0) ? p1_choice : p2_choice);
                }
                place_marker(board, available, (turn == 0) ? p1_choice : p2_choice, position);
            }

            if (win_check(board, (turn == 0) ? p1_choice : p2_choice)) {
                display_board(board, available);
                cout << "\nCONGRATULATIONS! " << ((turn == 0) ? p1_name : p2_name) << " has won the game!\n";
                game_on = false;
            } else if (full_board_check(board)) {
                display_board(board, available);
                cout << "\nThe game is a DRAW!\n";
                game_on = false;
            } else {
                turn = 1 - turn;
            }
        }

        if (!replay()) {
            break;
        }
    }

    cout << "\nThank you for playing! Goodbye!\n";
    return 0;
}

// Function Implementations
void default_message() {
    cout << "\nWelcome! Let's play TIC TAC TOE!\n";
}

void rules() {
    cout << "The board will look like this:\n";
    cout << " 7 | 8 | 9 \n";
    cout << "-----------\n";
    cout << " 4 | 5 | 6 \n";
    cout << "-----------\n";
    cout << " 1 | 2 | 3 \n";
    cout << "\nYou just have to input the position (1-9).\n";
}

string get_player_name(const string& prompt) {
    string name;
    cout << prompt;
    cin >> name;
    name[0] = toupper(name[0]);
    return name;
}

char get_player_choice() {
    char choice;
    do {
        cout << "\nDo you want to be X or O?\t";
        cin >> choice;
        choice = toupper(choice);
    } while (choice != 'X' && choice != 'O');
    return choice;
}

int first_player() {
    srand(time(0));
    return rand() % 2;
}

void display_board(char board[10], char avail[10]) {
    cout << "  " << board[7] << " | " << board[8] << " | " << board[9] << "   " << avail[7] << " | " << avail[8] << " | " << avail[9] << "\n";
    cout << "-----------   -----------\n";
    cout << "  " << board[4] << " | " << board[5] << " | " << board[6] << "   " << avail[4] << " | " << avail[5] << " | " << avail[6] << "\n";
    cout << "-----------   -----------\n";
    cout << "  " << board[1] << " | " << board[2] << " | " << board[3] << "   " << avail[1] << " | " << avail[2] << " | " << avail[3] << "\n";
}

int get_player_move(char board[10], const string& name, char choice) {
    int position;
    do {
        cout << "\n" << name << " (" << choice << "), Choose your next position (1-9): ";
        cin >> position;
        if (position < 1 || position > 9 || board[position] != ' ') {
            cout << "INVALID INPUT. Please Try Again!\n";
        }
    } while (position < 1 || position > 9 || board[position] != ' ');
    return position;
}

int comp_ai(char board[10], char choice) {
    int position = 0;

    for (int i = 1; i <= 9; i++) {
        if (board[i] == ' ') {
            board[i] = choice;
            if (win_check(board, choice)) {
                position = i;
                board[i] = ' ';
                return position;
            }
            board[i] = ' ';
        }
    }

    for (int i = 1; i <= 9; i++) {
        if (board[i] == ' ') {
            board[i] = (choice == 'X') ? 'O' : 'X';
            if (win_check(board, (choice == 'X') ? 'O' : 'X')) {
                position = i;
                board[i] = ' ';
                return position;
            }
            board[i] = ' ';
        }
    }

    int corners[] = {1, 3, 7, 9};
    for (int i = 0; i < 4; i++) {
        if (board[corners[i]] == ' ') {
            return corners[i];
        }
    }

    if (board[5] == ' ') {
        return 5;
    }

    int edges[] = {2, 4, 6, 8};
    for (int i = 0; i < 4; i++) {
        if (board[edges[i]] == ' ') {
            return edges[i];
        }
    }

    return 0;
}

void place_marker(char board[10], char avail[10], char choice, int position) {
    board[position] = choice;
    avail[position] = ' ';
}

int space_check(char board[10], int position) {
    return board[position] == ' ';
}

int full_board_check(char board[10]) {
    for (int i = 1; i <= 9; i++) {
        if (space_check(board, i)) {
            return 0;
        }
    }
    return 1;
}

int win_check(char board[10], char choice) {
    return (
        (board[1] == choice && board[2] == choice && board[3] == choice) ||
        (board[4] == choice && board[5] == choice && board[6] == choice) ||
        (board[7] == choice && board[8] == choice && board[9] == choice) ||
        (board[1] == choice && board[4] == choice && board[7] == choice) ||
        (board[2] == choice && board[5] == choice && board[8] == choice) ||
        (board[3] == choice && board[6] == choice && board[9] == choice) ||
        (board[1] == choice && board[5] == choice && board[9] == choice) ||
        (board[3] == choice && board[5] == choice && board[7] == choice)
    );
}

void delay(int mode) {
    if (mode == 2) {
        sleep(2);
    }
}

int replay() {
    string response;
    cout << "\nDo you want to play again? Enter [Y]es or [N]o: ";
    cin >> response;
    return tolower(response[0]) == 'y';
}
