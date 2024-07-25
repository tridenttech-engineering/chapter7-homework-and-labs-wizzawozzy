//Lab7-4.cpp - displays the average electric bill
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int month = 1;
	double totalBills = 0;
	double MonthlyBills = 0;
	double average = 0.0;

	for (month = 1; month < 5; month += 1)
	{
	cout << "How much is the electric bill for "
	<< month << " month? $";
	cin >> MonthlyBills;
		totalBills += MonthlyBills;
			
	} //end for

	average = static_cast<double>(totalBills) / (month - 1);
	cout << fixed << setprecision(2);
	cout << endl << "Your average electric bill is approximately $"
	<< average << " per month." << endl;
	return 0;
}	//end of main function