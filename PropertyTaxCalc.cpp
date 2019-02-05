/*


Algorithm was designed in the following series of steps:
1) Define variables for determining senior citizen property tax
2) Prompt user to input values for property and the current tax rate paid
3) Define formulas to calculate assessment, tax deduction and quarterly payments
5) Output results for property tax amount and quarterly payment amount required

Functions/Formulas:

assessment = valueActual * 0.60 - 5000;

deducedTax = assessment * currTaxRate / 100.0;

payment = deducedTax / 4.0;

Function in this case was only the main function with all data, formulas and output


Revision History:
January 30, 2019: First working edition created, revised and completed


*/

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

	// Defines the variables used in determining senior citizen property tax
	double valueActual, currTaxRate, assessment, deducedTax, payment;


	// Prompts user to enter value of the property 
	cout << "Please enter the actual value of the property: " << endl;

	// Takes user input for the property value entered
	cin >> valueActual;


	// Prompts user for the current tax rate 
	cout << "What is the current tax rate? " << endl;

	// Takes user input for the tax rate entered
	cin >> currTaxRate;

	// This formula defines the assessment where assessment value is 6 % of the actual property value
	assessment = valueActual * 0.60 - 5000;

	// This formula is used to find out the deduced tax 
	deducedTax = assessment * currTaxRate / 100.0;

	// This determines the quarterly monthly payments required
	payment = deducedTax / 4.0;

	// Outputs the senior citizen property tax
	cout << "The senior homeowner annual property tax is: $ " << setprecision(2) << fixed << deducedTax << endl;

	//Outputs the quarterly tax bill payment amount
	cout << "Your quarter tax bill payment is: $ " << setprecision(2) << fixed << payment << endl;





	return 0;
}

