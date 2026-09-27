#include <iostream>
using namespace std;

int main()
{
    int dfa_current_state,s;
    cout<<"number of accepts staes"<<endl;
    cin>>s;
    int dfa_accept_state[s];
    for(int i;i<s;i++)
    {
        cin>>dfa_accept_state[i];
    }
    char dfa_current_input;

  //  cout<<"Accept State : ";
  //  cin>>dfa_accept_state;

    cout<<"Current State : ";
    cin>>dfa_current_state;
    cout<<"Current Input : ";
    cin>>dfa_current_input;


    while(dfa_current_input!='.'){

        if(dfa_current_state==1 && dfa_current_input=='a'){
            dfa_current_state=2;
            cout<<"Current State : "<<dfa_current_state<<endl;
            cout<<"Current Input : ";
            cin>>dfa_current_input;
        }

        if(dfa_current_state==1 && dfa_current_input=='b'){
            dfa_current_state=2;
            cout<<"Current State : "<<dfa_current_state<<endl;
            cout<<"Current Input : ";
            cin>>dfa_current_input;
        }

        if(dfa_current_state==2 && dfa_current_input=='a'){
            dfa_current_state=2;
            cout<<"Current State : "<<dfa_current_state<<endl;
            cout<<"Current Input : ";
            cin>>dfa_current_input;
        }

        if(dfa_current_state==2 && dfa_current_input=='b'){
            dfa_current_state=3;
            cout<<"Current State : "<<dfa_current_state<<endl;
            cout<<"Current Input : ";
            cin>>dfa_current_input;
        }

        if(dfa_current_state==3 && dfa_current_input=='a'){
            dfa_current_state=3;
            cout<<"Current State : "<<dfa_current_state<<endl;
            cout<<"Current Input : ";
            cin>>dfa_current_input;
        }

        if(dfa_current_state==3 && dfa_current_input=='b'){
            dfa_current_state=3;
            cout<<"Current State : "<<dfa_current_state<<endl;
            cout<<"Current Input : ";
            cin>>dfa_current_input;
        }
    }

    if(dfa_current_state==dfa_accept_state[0])
        cout<<"Valid Lexeme";
    else
        cout<<"Invalid Lexeme";

    return 0;
}

