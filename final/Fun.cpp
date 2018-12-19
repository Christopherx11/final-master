#include "Animal.h"
#include <string>
#include <iostream>
using namespace std;

//What 
int Mammals::NumberOfLegs(int legs) //this returns legs to main
{
	return  legs;
}
std::string Mammals::Name(std::string name)//this returns the string name back to main
{
	return name;
}

bool Lion::Scary()//this is the lions scary function which returns to main
{
	bool scary;

	int selec;

	cout << "Do you think lions are scary? \n1.)Yes\n2.)No" << endl;

	cin >> selec;

	if(selec == 1) //simple if else statements
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


void Bear::Color() //returns the bears color back to main
{
	string favColor;
	bool rightColor = false;

	cout << "What is your favorite color of bear?\nIf I was you I would put Brown bear because that is my favorite color bear. Just a little hint. ohh and with a capital B.\n" << endl; //please put Brown

	cin >> favColor; //taking your favorite color bear as input

	if(favColor == "Brown") //again, please pick brown haha
	{
		cout << "Good choice of colors every one loves Brown Bears" << endl;
		rightColor = true; //if you type Brown you wont get thrown into an infinite loop
	}
	else
	{
		while (!rightColor) //this is a purposeful infinite loop, thought it would be funny to include this
		{
			cout << "Wrong color guy no one like " + favColor + "Bears. Now you are going to be here a while. Got em(Get it because it is a while loop :))" << endl;
		}
	}
}

