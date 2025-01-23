#include <iostream>
using namespace std;

// Structure to store a question
struct Question {
    string question;
    string options[4];
    int correctOption; // 1-based index of the correct option
};

// Function to ask questions and calculate score
int playQuiz(Question questions[], int numQuestions) {
    int score = 0;
    for (int i = 0; i < numQuestions; i++) {
        cout << "\nQ" << i + 1 << ": " << questions[i].question << endl;
        for (int j = 0; j < 4; j++) {
            cout << j + 1 << ". " << questions[i].options[j] << endl;
        }
        int answer;
        cout << "Your answer: ";
        cin >> answer;
        if (answer == questions[i].correctOption) {
            cout << "Correct!" << endl;
            score++;
        }
		else {
            cout << "Wrong! Correct answer: " << questions[i].correctOption << endl;
        }
    }
    return score;
}

int main() {
    // Questions for the quiz
    Question questions[] = {
        
        {"Which is a valid C++ keyword?", {"class", "define", "include", "endif"}, 1},
        {"Which operator is used for dynamic memory allocation in C++?", {"malloc", "new", "alloc", "calloc"}, 2},
        {"What is 'cout' in C++?", {"Character Output", "Console Output", "Character Object", "Console Object"}, 2},
        {"Which of these is a special function in C++?", {"Constructor", "Destructor", "Both", "None"}, 3},
        {"Who is known as the Father of India?", {"Jawaharlal Nehru", " Mahatma Gandhi", "Bhagat Singh", "Subhas Chandra Bose"}, 2}
    };
    int numQuestions = sizeof(questions) / sizeof(questions[0]);

    cout << "Welcome to the Quiz of C / C++ Language!\n";
    cout << "Player 1, it's your turn.\n";
    int score1 = playQuiz(questions, numQuestions);

    cout << "\nPlayer 2, it's your turn.\n";
    int score2 = playQuiz(questions, numQuestions);

    cout << "\nFinal Scores:\n";
    cout << "Player 1: " << score1 << "\nPlayer 2: " << score2 << endl;

    if (score1 > score2) {
        cout << "Player 1 wins!\n";
    } else if (score2 > score1) {
        cout << "Player 2 wins!\n";
    } else {
        cout << "It's a tie! Both players are winners!\n";
    }
    

    return 0;
}

