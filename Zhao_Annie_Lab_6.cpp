// Programmer: Annie Zhao
// Partner: Difei Lin
// Date completed: October 15, 2024
// Program for practice of streams 

#include <fstream> // Step 1: Include the fstream header file
#include <iostream> 
#include <string>
using namespace std;

int main ( ) 
{
    cout<<"Program to review streams.....\n";

    // Variables 
    ifstream inData; // Step 2: Declare an ifstream variable
    ofstream outData; // Step 2: Declare an ofstream variable
    int num1;
    int num2;
    char Char;
    string text;

    // Step 3: Open the files
    inData.open("inData.txt");
    outData.open("outData.txt");

    inData >> num1 >> num2;
    outData << "Sum: " << num1 + num2 << endl;

    inData >> Char;
    outData << "Next Character: " << char(Char + 1)<< endl;;

    inData >> text;
    outData << "Text: " << text << endl;

    // Last step to close the file
    inData.close();
    outData.close();

     return 0; 
}

// Input
/*
22 28
j
wee
*/
// Output
/*
Sum: 50
Next Character: k
Text: wee
*/