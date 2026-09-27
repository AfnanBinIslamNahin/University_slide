
#include<iostream>
using namespace std;
int main()
{
    int i;
    string statement;
    cout<<"Enter a sentence: ";
    getline(cin,statement);
    cout<<"The entered statement was: "<<statement<<endl;

    for(i = 0; i<statement.length(); i++)
    {
        if(statement[i] == '=')
        {
            cout<<endl;
            break;
        }
        cout<<statement[i];
    }

    for(i = i; i<statement.length(); i++)
    {
        cout<<statement[i]<<endl;
        i = i+1;
        break;
    }

    for(i = i; i<statement.length(); i++)
    {
        if(statement[i] == '+')
        {
            cout<<endl;
            break;
        }
        cout<<statement[i];
    }

    for(i = i; i<statement.length(); i++)
    {
        cout<<statement[i]<<endl;
        i = i+1;
        break;
    }

    for(i = i; i<statement.length(); i++)
    {
        if(statement[i] == ';')
        {
            cout<<endl;
            break;
        }
        cout<<statement[i];
    }

    for(i = i; i<statement.length(); i++)
    {
        cout<<statement[i];
        break;
    }


    return 0;
}
