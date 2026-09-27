#include <iostream>
using namespace std;

int main (){

    int i, temp;
    int location_counter = 1;
    string statement;


    cout << "Enter the statement:";

    //cin >> statement;
    getline (cin, statement);

    cout << "The entered statement was:" << statement << endl;

    if (statement[0] >='0' && statement[0] <='9')
	  {

	  cout<<"lexical error :"<<statement[0]<<"at location 0" <<endl;

	     return 0;


	 }   //print that there is a lexical error here and also print
	    //the erroneous character along with its position (example format - lexical error : ‘1’ at location 0)
	    //write a return 0 statement

	     //print <id,
	    //print location_counter
	    //print >
    else
    {
        cout<<"<id"<<location_counter<<">"<<endl;

    }

    for (i = 1; i < statement.length (); i++){
		if (statement[i] == '='){
			// write a break statement here
			break;
		}


	}
     cout<<"<=>"<<endl;
    //print <=>




    temp = i;

    if (statement[temp + 1] == '0' || statement[temp + 1] == '1' ||statement[temp + 1] == '2'||statement[temp + 1] == '3'||
        statement[temp + 1] == '4'||statement[temp + 1] == '5'||statement[temp + 1] == '6'||statement[temp + 1] == '7'||
        statement[temp + 1] == '8'||statement[temp + 1] == '9')
        //print that there is a lexical error here and also print the erroneous character along with its position (example format - lexical error : ‘1’ at location 0)

        //write a return 0 statement

        {
           cout<<"lexical error :"<<statement[temp+i]<<"at location"<<i+1 <<endl;

	        return 0;

        }
  else
    {    location_counter++;
        cout<<"<id"<<location_counter<<">"<<endl;


    }
	    //increment location_counter
	    //print <id,
	    //print location_counter>

	for (i = temp + 2; i < statement.length (); i++){
		if (statement[i] == '+'){
			// write a break statement here
			break;

		}


    }
    cout<<"<+>"<<endl;
    //print <+>


    temp = i;

    if (statement[temp + 1] == '0' || statement[temp + 1] == '1' ||statement[temp + 1] == '2'||statement[temp + 1] == '3'||
        statement[temp + 1] == '4'||statement[temp + 1] == '5'||statement[temp + 1] == '6'||statement[temp + 1] == '7'||
        statement[temp + 1] == '8'||statement[temp + 1] == '9')
        //print that there is a lexical error here and also print the erroneous character along with its position (example format - lexical error : ‘1’ at location 0)

        //write a return 0 statement

        {
           cout<<"lexical error :"<<statement[temp+i] <<"at location"<<i+1<<endl;

	        return 0;

        }
  else
    {    location_counter++;
        cout<<"<id"<<location_counter<<">"<<endl;


    }


	for (i = temp + 2; i < statement.length (); i++){
		if (statement[i] == ';'){
			// write a break statement here
			break;
		  }


    }

 cout<<"<;>"<<endl;

  return 0;
}





