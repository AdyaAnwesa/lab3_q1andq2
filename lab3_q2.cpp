//Library
#include<iostream>
using namespace std;

int main() {
cout << "Hello" << endl;

	//Declaring variables of Integer type
	int value1,value2; //Declaring variables together is also possible
	value1 = 23984; value2 =47; //Assigning values to variables	
	
	int sum= value1+value2; //Performing And operation
	cout << "Addition of the values gives " << sum << endl; //Displaying the sum in terminal

	int diff= value1-value2; //Performing substraction
	cout << "Substracting the numbers gives " << diff << endl ; //Displaying the difference

	int multi= value1*value2; //Performing Multiplication
	cout << "Multiplying the numbers gives " << multi << endl ;

	int divide= value1/value2; //Performing Division
	cout << "Dividing the numbers gives " << divide << endl ;

	int mod= value1%value2; //Performing Modulus
	cout << "Remainder upon dividing the numbers is " << mod << endl;
  
return 10;
}
