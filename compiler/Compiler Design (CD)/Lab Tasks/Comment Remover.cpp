// C++ program to remove comments from a C/C++ program
#include <iostream>
#include <fstream>
using namespace std;

string removeComments(string textWithComment)
{
	int n = textWithComment.length();
	string result;

	/*
    These flags are used to indicate if single line and multiple line comments
    have started or not.
    */
	bool singleLineComment = false;
	bool multiLineComment = false;


	/* This loop will traverse the given code */
	for (int i=0; i<n; i++)
	{
		// If single line comment flag is on, then check for end of it
		if (singleLineComment == true && textWithComment[i] == '\n'){
            singleLineComment = false;
		}

		// If multiple line comment is on, then check for end of it
		else if (multiLineComment == true && textWithComment[i] == '*' && textWithComment[i+1] == '/'){
            multiLineComment = false, i++;
		}

		// If this character is in a comment, ignore it
		else if (singleLineComment || multiLineComment){
            continue;
		}

		// Check for the beginning of the comments and set the Appropeate flags
		else if (textWithComment[i] == '/' && textWithComment[i+1] == '/'){
            singleLineComment = true, i++;
		}
		else if (textWithComment[i] == '/' && textWithComment[i+1] == '*'){
            multiLineComment = true, i++;
		}

		// If current character is a non-comment character, append it to result
		else {
            result += textWithComment[i];
		}
	}
	return result; // Return the result
}

// Driver program to test above functions
int main()
{       // Code with Comments
        string textWithComment =    "/*This program will find\n"
                                    "the odd and even number\n"
                                    "to the given range*/ \n"
                                    "#include <iostream>\n//This is a header\n"
                                    "using namespace std;\n"
                                    "int main() {\n"
                                    "/*This is main function*/\n"
                                    "    int num;\n"
                                    "    cout << 'Enter an Integer';\n"
                                    "/*Taking user input*/\n"
                                    "    cin >> num;\n"
                                    "    // if Least significant bit of number is 0, \n"
                                    "    // Then it is even otherwise odd number\n"
                                    "    if (num & 1 == 0) {\n"
                                    "        cout << num << ' is EVEN Number';\n"
                                    "    } else {\n"
                                    "        cout << num << ' is ODD Number';\n"
                                    "    }\n"
                                    "    return 0;\n"
                                    "}\n";

	cout << " [ THIS IS THE CODE WITH COMMENTS ] \n"<<endl;
    cout << endl;
	cout << textWithComment << endl; // Print the code
	cout << endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout << endl;
	cout << " [ THIS IS THE CODE AFTER REMOVING COMMENTS ] "<<endl;
	cout << endl;

	// Write into code-without-comments.txt
	ofstream myfile;
    myfile.open ("code-without-comments.txt");
    myfile << removeComments(textWithComment); // White
    myfile.close();

    //Read from code-without-comments.txt
    string myFileText;
	ifstream MyReadFile("code-without-comments.txt");
	while (getline (MyReadFile, myFileText)) {
        cout << myFileText+"\n"; // Read
    }
    MyReadFile.close();

	return 0;
}
