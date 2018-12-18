#include <iostream>
#include <string>
#include "Animal.h"
//#include "Fun.cpp"

using namespace std;
int main()
{
	Lion mammals;
	Bear bear;
	int selection;
	string userName;

	cout << "what is your name?" << endl;

	cin >> userName;

	cout << "Hi " + userName + " nice  to meat you" << endl;

	cout << userName << endl;
	cout << "Testing usr name" + userName << endl;
	cout << "This is so crazy how it keep user name" + userName << endl;
	cout << " Why would some one evr use getline this isn't c# " + userName << endl;
	cou


	cout << "Here is a list of all the animals in our zoo. Which would you like to learn about " + userName + "\n1.)Lion\n2.)Bear\n3.)Monkey" << endl;
	cin >> selection;

	switch (selection)
	{
	case 1:
		cout << "Our lions name is" + mammals.Name(" Garry ");
		cout << "and he has" << mammals.NumberOfLegs(4) << "Legs" << endl;
		mammals.Scary();
		return main();
		break;
	case 2:
		cout <<"Our bears name is" + bear.Name(" Bob ");
		cout << "and he has" << bear.NumberOfLegs(4) << " Legs" << endl;
		bear.Color();
		return main();
		break;
	default:
		cout << "Not valid input" << endl;
		return main();
	}
	system("pause");
}
