#include "Animal.h"
#include <string>
#include <iostream>
using namespace std;

//What 
int Mammals::NumberOfLegs(int legs)
{
	return  legs;
}
std::string Mammals::Name(std::string name)
{
	return name;
}

bool Lion::Scary()
{
	bool scary;

	int selec;

	cout << "Do you think lions are scary? \n1.)Yes\n2.)No" << endl;

	cin >> selec;

	if(selec == 1)
	{
		scary = true;
	}
	else
	{
		scary = false;
	}/**/

	if(scary)
	{
		cout << "Yea you right lions are super scary.\n";
	}
	else
	{
		cout << "What are you crazy lions are scary. Can you beat one in a fight? I thought not those things are scary then.\n" << endl;
	}
	return scary;
}


void Bear::Color()
{
	string favColor;
	bool rightColor = false;

	cout << "What is your favorite color of bear?\nIf I was you I would put Brown bear because that is my favorite color bear. Just a little hint. ohh and with a capital B.\n" << endl;

	cin >> favColor;

	if(favColor == "Brown")
	{
		cout << "Good choice of colors every one loves Brown Bears" << endl;
		rightColor = true;
	}
	else
	{
		while (!rightColor)
		{
			cout << "Wrong color guy no one like " + favColor + "Bears. Now you are going to be here a while. Got em(Get it because it is a while loop :))" << endl;
		}
	}
}

