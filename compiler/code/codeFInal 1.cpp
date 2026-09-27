#include <iostream>

using namespace std;
int main()
{
    int i, temp;
    int location_counter = 1;
    string statement;
    cout << "Enter the statement: ";
    getline(cin, statement);

    cout << "The entered statement was: " << statement << endl;
    // Find the '=' character
    for (i = 1; i < statement.length(); i++)
    {
        if (statement[i] == '=')
        {
            break;
        }
    }
    // Check for lexical error before '='
    if (i == statement.length() || (statement[0] >= '0' && statement[0] <= '9'))
    {
        cout << "Lexical error: '" << statement[0] << "' at location 0" << endl;
        return 0;
    }
    else
    {
        cout << "<id, " << location_counter << ">";
    }

    // Print the '=' token
    cout << " <=> ";
    temp = i;
    // Find the '+' character
    for (i = temp + 1; i <statement.length(); i++)
    {
        if (statement[i] == '+')
        {
            break;
        }
    }
    // Check for lexical error before '+'
    if (i == statement.length() || (statement[temp+1] >= '0' && statement[temp+1] <= '9'))
    {
        cout << "Lexical error: '" << statement[temp+1] << "' at location " <<i<< endl;
        return 0;
    }
    else
    {
        location_counter++;
        cout << "<id, " << location_counter << ">" ;
    }

    // Print the '+' token
    cout << "<+>";
    temp = i; // Find the ';'
    for (i = temp + 1; i < statement.length(); i++)
    {
        if (statement[i] == ';')
        {
            break;
        }
    }
    // Check for lexical error before ';'
    if (i == statement.length() || (statement[temp+1] >= '0' && statement[temp+1] <= '9'))
    {
        cout << "Lexical error: '" << statement[temp+1] << "' at location " <<i<< endl;
        return 0;
    }
    else
    {
        location_counter++;
        cout << "<id, " << location_counter << ">" ;
    }

    // Print the ';' token
    cout << "<;>" << endl;
    return 0;
}

