#include<iostream>
using namespace std;


bool firstExpression(string expression){
    string exp1="abc";
     for(int i=0; i<expression.length(); i++){
        if(expression[i]==exp1[i]){
            if(expression[i+1]==exp1[i+1]){
                if(expression[i+2]==exp1[i+2]){
                    if(exp1.length()<4){
                        return true;
                        break;
                    }
                }
            }
        }
    }
        return false;
}

bool secondExpression(string expression){
     string exp2="abc*";
      for(int i=0; i<expression.length(); i++){
            if(expression[i]==exp2[i]){
             if(expression[i+1]==exp2[i+1]){
                if(expression[i+2]==exp2[i+2]){
                    if(expression[i+3]==expression[i+2]){
                        return true;
                        break;
                    }
                }
            }
        }
    }
    return false;
}

bool thirdExpression(string expression){
      string exp3="abc+";
      for(int i=0; i<expression.length(); i++){
            if(expression[i]==exp3[i]){
             if(expression[i+1]==exp3[i+1]){
                if(expression[i+2]==exp3[i+2]){
                    if(expression[i+3]==expression[i+2]){
                        return true;
                        break;
                    }
                }
            }
        }
    }
    return false;
}

bool fourthExpression(string expression){
      string exp4="a(bc)+";
      for(int i=0; i<expression.length(); i++){
            if(expression[i]==exp4[i]){
             if(expression[i+1]==exp4[i+2]){
                if(expression[i+2]==exp4[i+3]){
                    if(expression[i+3]==exp4[i+2]){
                        if(expression[i+4]==exp4[i+3]){
                            return true;
                            break;
                        }
                    }
                }
            }
        }
    }
    return false;
}

int main(){

    cout << "\tAVAILABLE EXPRESSION" << endl;
    cout << "1. abc" << endl;
    cout << "2. abc*" << endl;
    cout << "3. abc+" << endl;
    cout << "4. a(bc)+" << endl;
    int option;
    cout << "\nSELECT AN OPTION: ";
    cin >> option;
    switch(option){
        case 1:{
            string str1;
            cout << "\nENTER A STRING: ";
            cin >> str1;
            if(firstExpression(str1)){
                cout << "\n\n______________________________________________________________________\n" << endl;
                cout << "[+] YOUR STRING         :  " << str1 << endl;
                cout << "[+] SELECTED EXPRESSION :  abc" << endl;
                cout << "[+] STATUS              :  MATCHED" << endl;
                cout << "______________________________________________________________________" << endl;
            }else{
                cout << "\n\n______________________________________________________________________\n" << endl;
                cout << "[+] YOUR STRING         :  " << str1 << endl;
                cout << "[+] SELECTED EXPRESSION :  abc" << endl;
                cout << "[+] STATUS              :  NOT MATCHED" << endl;
                cout << "______________________________________________________________________" << endl;
            }
            break;
        }
        case 2:{
            string str2;
            cout << "\nENTER A STRING: ";
            cin >> str2;
            if(secondExpression(str2)){
                cout << "\n\n______________________________________________________________________\n" << endl;
                cout << "[+] YOUR STRING         :  " << str2 << endl;
                cout << "[+] SELECTED EXPRESSION :  abc*" << endl;
                cout << "[+] STATUS              :  MATCHED" << endl;
                cout << "______________________________________________________________________" << endl;
            }else{
                cout << "\n\n______________________________________________________________________\n" << endl;
                cout << "[+] YOUR STRING         :  " << str2 << endl;
                cout << "[+] SELECTED EXPRESSION :  abc*" << endl;
                cout << "[+] STATUS              :  NOT MATCHED" << endl;
                cout << "______________________________________________________________________" << endl;
            }
            break;

        }
        case 3:{
            string str3;
            cout << "\nENTER A STRING: ";
            cin >> str3;
            if(thirdExpression(str3)){
                cout << "\n\n______________________________________________________________________\n" << endl;
                cout << "[+] YOUR STRING         :  " << str3 << endl;
                cout << "[+] SELECTED EXPRESSION :  abc+" << endl;
                cout << "[+] STATUS              :  MATCHED" << endl;
                cout << "______________________________________________________________________" << endl;
            }else{
                cout << "\n\n______________________________________________________________________\n" << endl;
                cout << "[+] YOUR STRING         :  " << str3 << endl;
                cout << "[+] SELECTED EXPRESSION :  abc+" << endl;
                cout << "[+] STATUS              :  NOT MATCHED" << endl;
                cout << "______________________________________________________________________" << endl;
            }
            break;

        }
        case 4:{
            string str4;
            cout << "\nENTER A STRING: ";
            cin >> str4;
            if(fourthExpression(str4)){
                cout << "\n\n______________________________________________________________________\n" << endl;
                cout << "[+] YOUR STRING         :  " << str4 << endl;
                cout << "[+] SELECTED EXPRESSION :  a(bc)+" << endl;
                cout << "[+] STATUS              :  MATCHED" << endl;
                cout << "______________________________________________________________________" << endl;
            }else{
                cout << "\n\n______________________________________________________________________\n" << endl;
                cout << "[+] YOUR STRING         :  " << str4 << endl;
                cout << "[+] SELECTED EXPRESSION :  a(bc)+" << endl;
                cout << "[+] STATUS              :  NOT MATCHED" << endl;
                cout << "______________________________________________________________________" << endl;
            }
            break;
        }
        default:{
            cout << "\n\n[!] THIS OPTION IS INVALID " << endl;
            break;
        }

    }

return 0;
}
