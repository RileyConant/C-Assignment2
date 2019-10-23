/***********************************
 *  Name: Riley Conant
 * 	Date Completed: 9/6/2019 5:00pm
 * 	Function: Complete mathematical functions that the user inputs and return the answer to the user like a calculator
 * 	Input: Varies based on what function the user wants to do and what numbers they want in the function, 
 * 	Input must be entered as "First Number" "Operation" "2nd Number"
 * 	Output: Varies based on the function that is input
 * 	Additional Comments: Program will continue to run until the user specifies that they want to stop. Also divide and modulation functions 
 * 	will return an integer because the operations are done using integers.
 * ********************************/
 #include <cstdlib>
 #include <iostream>
 using namespace std;
 //Prototypes for the calculator funtions
 int add(int, int);
 int sub(int,int);
 int multi(int,int);
 int divide(int,int);
 int mod(int,int);
 
int main(int argc, char **argv)
{
	char cont = 'y';
	char op;
	int n1(0), n2(0);
	//Loop to keep the program going unless the user states otherwise
	while(cont == 'y')
	{
		//Prompts the user for the function they want calculated
		cout << "Please enter your expression." << endl;
		cin >> n1 >> op >> n2;
		//Determines which function needs to be called based on the op variable and prints out the respective answer with the calculation
		if( op == '+')
		{
			cout << n1 <<" + " << n2 << " = " << add(n1,n2) << endl;
		}
		else if( op == '-')
		{
			cout << n1 << " - " << n2 << " = " << sub(n1,n2)<< endl;
		}
		else if( op == '*')
		{
			cout << n1 << " * " << n2 << " = " << multi(n1,n2)<< endl;
		}
		else if( op == '/')
		{
			cout << n1 << " / " << n2 << " = " << divide(n1,n2)<< endl;
		}
		else if( op == '%')
		{
			cout << n1 << " % " << n2 << " = " << mod(n1,n2)<< endl;
		}
		//Prompts the user to see if they want to continue 
		cout << "Another Calculation? (y/n)" ;
		cin >> cont;
	}
} 
//Calculator's Functions
//Each Function takes in the two numbers provided by the user
int add(int n1, int n2){
	return n1+n2; //Returns the addition of the two numbers
}
int sub(int n1, int n2){
	return n1-n2; //Returns the subtraction of the two numbers
}
int multi(int n1, int n2){
	return n1*n2; //Returns the multiplication of the two numbers
}
int divide(int n1, int n2){
	return n1/n2; //Returns the division of the two numbers 
}
int mod(int n1, int n2){
	return n1%n2; //Returns the modulation of the two numbers
}

