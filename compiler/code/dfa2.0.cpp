
#include <iostream>
using namespace std;

int main()
{
    char dfa_current_state;
    int s;

    cout << "Number of accept states: ";
    cin >> s;

    char dfa_accept_state[s]; // Array for accept states
    cout << "Enter accept states: ";
    for (int i = 0; i < s; i++) {
        cin >> dfa_accept_state[i];
    }

    char dfa_current_input;

    cout << "Current State: ";
    cin >> dfa_current_state;

    cout << "Enter sequence of inputs (0-9, +, -). End with '.':" << endl;
    cin >> dfa_current_input;

    while (dfa_current_input != '.') {
        if (dfa_current_state == 'A' && dfa_current_input == '+') {
            dfa_current_state = 'B';  // Moving to state B on '+'
        }
        else if (dfa_current_state == 'A' && (dfa_current_input >= '0' && dfa_current_input <= '9')) {
            dfa_current_state = 'E';  // Moving to state E on 0 to 9
        }
        else if (dfa_current_state == 'A' && dfa_current_input == '-') {
            dfa_current_state = 'C';  // Moving to state C on '-'
        }
        else if (dfa_current_state == 'B' && (dfa_current_input >= '0' && dfa_current_input <= '9')) {
            dfa_current_state = 'E';  // Moving to state E on 0-9 after '+'
        }
        else if (dfa_current_state == 'C' && (dfa_current_input >= '0' && dfa_current_input <= '9')) {
            dfa_current_state = 'E';  // Moving to state E on 0-9 after '-'
        }
        else if (dfa_current_state == 'E' && (dfa_current_input >= '0' && dfa_current_input <= '9')) {
            dfa_current_state = 'F';  // Moving to state F on digits
        }
        else if (dfa_current_state == 'F' && (dfa_current_input >= '0' && dfa_current_input <= '9')) {
            dfa_current_state = 'G';  // Moving to state G on digits
        }
        else if (dfa_current_state == 'G' && (dfa_current_input >= '0' && dfa_current_input <= '9')) {
            dfa_current_state = 'G';  // Staying in G on digits
        }
        else {
            cout << "Invalid Input! Terminating DFA." << endl;
            return 0;
        }

        cout << "Current State: " << dfa_current_state << endl;
        cin >> dfa_current_input;
    }

    // Check if dfa_current_state is in dfa_accept_state[]
    bool is_valid = false;
    for (int i = 0; i < s; i++) {
        if (dfa_current_state == dfa_accept_state[i]) {
            is_valid = true;
            break;
        }
    }

    if (is_valid)
        cout << "Valid Lexeme" << endl;
    else
        cout << "Invalid Lexeme" << endl;

    return 0;
}


