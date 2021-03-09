// C2 P3 - Making Simple Decisions

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Variable Declarations
string name;
int items;
char decision;
string done;
const double PRICEEACH = 3.59;
const double CUT_OFF1 = 12;
const double CUT_OFF2 = 24;
const double DISCOUNT1 = 0.10;
const double DISCOUNT2 = 0.20;
double discountedPrice;
double total;
double total1;
double total2;

int main()
{
	cout << "\t★ ☆ ★ ☆ Making Simple Decisions ★ ☆ ★ ☆";
	
	cout << "\n\nEnter customer name or 'done' to quit: ";
	cin >> name;
	while (name != "done")
	{
		cout << "\nGreat! " << name << ", please input the number of items you are purchasing: ";
		cin >> items;
		
		if (items < CUT_OFF1)
		{
			cout << "\n\n" << name << " did not qualify for a 10% discount.";
			total = (items * PRICEEACH);
			cout << "\n\n\t☆ Final Total: $ " << setprecision(2) << fixed << total;
		}
		if (items > CUT_OFF1)
			if (items < CUT_OFF2)
			{
				cout << "\n\n" << name << " did qualify for a 10% discount!";
				total = (items * PRICEEACH);
				discountedPrice = (total * DISCOUNT1);
				total1 = (total - discountedPrice);
				cout << "\n\n\t☆ Initial Total: $ " << setprecision(2) << fixed << total;
				cout << "\n\t☆ Discount: $ " << setprecision(2) << fixed << discountedPrice;
				cout << "\n\t☆ Final Total: $ " << setprecision(2) << fixed << total1;
			}
		if (items > CUT_OFF1)
			if (items > CUT_OFF2)
		{
			cout << "\n\n" << name << " did qualify for a 20% discount!";
			total = (items * PRICEEACH);
			discountedPrice = (total * DISCOUNT2);
			total2 = (total - discountedPrice);
			cout << "\n\n\t☆ Initial Total: $ " << setprecision(2) << fixed << total;
			cout << "\n\t☆ Discount: $ " << setprecision(2) << fixed << discountedPrice;
			cout << "\n\t☆ Final Total: $ " << setprecision(2) << fixed << total2;
		}
			
		cout << "\n\nThank you for shopping with us!\n\nPlease enter another customer name or 'done' to quit: ";
		cin >> name;
	}
	cout << "\nEnd of Program";
	return 0;
		
}