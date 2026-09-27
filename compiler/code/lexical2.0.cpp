
#include <iostream>
using namespace std;

int main ()
{

    int i, temp;
    int location_counter = 1;
    string statement;

    cout << "Enter the statement:";
    getline (cin, statement);
    cout << "The entered statement was:" << statement << endl;

    if (
        statement[0] == '0' || statement[0] == '1' || statement[0] == '2' || statement[0] == '3' ||
        statement[0] == '4' || statement[0] == '5' || statement[0] == '6' || statement[0] == '7' ||
        statement[0] == '8' || statement[0] == '9')
    {
        cout << "lexical error : '" << statement[0] << "' at location 0" << endl;
        return 0;
    }

    else
        cout << "<id," << location_counter << ">" << endl;


    for (i = 1; i < statement.length (); i++)
    {
        if (statement[i] == '=')
        {
            break;
        }
    }

    cout << "<=>" << endl;
    temp = i;

    if (
        statement[temp + 1] == '0' || statement[temp + 1] == '1' || statement[temp + 1] == '2' || statement[temp + 1] == '3' ||
        statement[temp + 1] == '4' || statement[temp + 1] == '5' || statement[temp + 1] == '6' || statement[temp + 1] == '7' ||
        statement[temp + 1] == '8' || statement[temp + 1] == '9')
    {
        cout << "lexical error : '" << statement[temp + 1] << "' at location " << temp + 1 << endl;
        return 0;
    }
    else
    {
        location_counter++;
        cout << "<id," << location_counter << ">" << endl;
    }


    for (i = temp + 2; i < statement.length (); i++)
    {
        if (statement[i] == '+')
        {
            break;
        }
    }

    cout << "<+>" << endl;
    temp = i;

    if (
        statement[temp + 1] == '0' || statement[temp + 1] == '1' || statement[temp + 1] == '2' || statement[temp + 1] == '3' ||
        statement[temp + 1] == '4' || statement[temp + 1] == '5' || statement[temp + 1] == '6' || statement[temp + 1] == '7' ||
        statement[temp + 1] == '8' || statement[temp + 1] == '9')
    {
        cout << "lexical error : '" << statement[temp + 1] << "' at location " << temp + 1 << endl;
        return 0;
    }
    else
    {
        location_counter++;
        cout << "<id," << location_counter << ">" << endl;
    }

    for (i = temp + 2; i < statement.length (); i++)
    {
        if (statement[i] == ';')
        {
            break;
        }

    }

    cout << "<;>" << endl;

    return 0;
}
