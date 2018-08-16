//Library
#include<iostream>
using namespace std;

//Integer function 
int main() {
	cout << "Hello" << endl;

	//Declaring variables of all types

	int value; //Declating integer data type
	int integer,b; // Declaring multiple variables together is also possible
	value = 35; // Initialisation or Definition
	integer = 67; b = 84;
	//Printing the assigned integer values 
	cout << "Integers values assigned to variables are " << value << "," << integer << ","  << b <<endl;
	
	float fl = 2.5; // Defining the variable of single precison floating point or decimal type 
	// Displaying floating point value
	cout << "Floating point value assigned to variables is " << fl << endl;
		
	double doubleVar = 198.67652; // Defining the variable of double (biger decimal) type
	// Displaying double type value
	cout << "Double type value assigned to variables is " << doubleVar << endl;
 	
	bool boolVar = true; // Defining variable of Boolean type
	// Displaying Boolean value
	cout << "Boolean value assigned to variable is " << boolVar << endl;
	

	char alpha = 'a'; // Defining the variable of character type
	//Displaying the assigned character type value
	cout << "Character value assigned to variable is " << alpha << endl; 

	//Displaying the sizes of data types.
	cout << "size of a = " << sizeof(integer) << endl; // Size of Integer data type
	cout << "size of fl = " << sizeof(fl) << endl; // Size of Float data type
	cout << "size of doubleVar = " << sizeof(doubleVar) << endl;//Size of double data type 
	cout << "size of boolVar = " << sizeof(boolVar) << endl;  // Size of Boolean data type
	cout << "size of char = " << sizeof(alpha) << endl;  // Size of Character data type

return 25; // Compiler expects an integer value in return
}
