#include <iostream>
#include <string>
#include "Animal.h"// calling from the animal file
//#include "Fun.cpp"

using namespace std;
int main()
{
	Lion mammals; //class lion
	Bear bear; //class bear
	int selection;
	string userName;

	cout << "What is your name?" << endl;

	cin >> userName; //simple user name input 

	cout << "Hi " + userName + " nice  to meet you" << endl;

	cout << userName << endl;
	cout << "Testing user name " + userName << endl;
	cout << "This is so crazy how it kept user name " + userName << endl;
	cout << "Why would some one ever use getline this isn't c# " + userName << endl;
	cout << "Welcome to our zoo where only have two animals" << endl;
	cout << "The monkey had an unfortunate accident and wasn't able to make it because he is dead" << endl;
	cout << "Please don't choose the monkey" << endl;
	


	cout << "Here is a list of all the animals in our zoo. Which would you like to learn about " + userName + "\n1.)Lion\n2.)Bear\n3.)Monkey" << endl; // please press 1 2 or 3 
	cin >> selection;

	switch (selection) //I just learned about switch statements and they make everything a lot easier 
	{
	case 1:
		cout << "Our lions name is" + mammals.Name(" Garry "); //returning lion name from mammal class 
		cout << "and he has" << mammals.NumberOfLegs(4) << "Legs" << endl; //returning number of legs from parent 
		mammals.Scary(); //stuff the lion does in animal
		return main();
		break;
	case 2:
		cout <<"Our bears name is" + bear.Name(" Bob "); //returning the bear name from the parent 
		cout << "and he has" << bear.NumberOfLegs(4) << " Legs" << endl; //returning the number of legs from the parent
		bear.Color(); //returning bear color from animal.h
		return main(); //return to main function
		break;
	case 3:
		cout << "I told you the monkey was dead there is nothing to see here" << endl; //the monkey really died and it was sad
		return main();
		break;
	default:
		cout << "Not valid input" << endl; //if anything but 1 2 or 3 are selected it will throw you back to the beginning
		return main();
	}
	system("pause");
}
