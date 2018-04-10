#include <iostream>
#include <cstring>
using namespace std;




class Car
{
private:	
	string color, model, make;
	int year, currentSpeed;

public:
	//print	
	void printSelction()
	{
		cout << "Select an action..." << endl;
		cout << "-----------------------------" << endl;
		cout << "set make (m)" << endl;
		cout << "set model (o)" << endl;
		cout << "set year (y)" << endl;
		cout << "start car (s)" << endl;
		cout << "stop car (S)" << endl;
		cout << "print (p)" << endl;
		cout << "-----------------------------" << endl;
		cout << "What would you like to do?" << endl;
	}

	void printStatus()
	{
		cout << "Your diving a " << year << make << color << currentSpeed << endl;
	}

	// default parameters
	void Attributes(string c = "Unknown", string o = "Unknown", int y = 2010, string m = "Unknown")
	{
		color = c;
		model = o;
		make = m;
		year = y;
		currentSpeed = 0;
	}

	string getColor()
	{
		return color;
	}

	string getModel()
	{
		return model;
	}
	string getMake()
	{
		return make;
	}

	int getYear()
	{
		return year;
	}

	int getCurrentSpeed()
	{
		return currentSpeed;
	}

	// accel
	void accelerate()
	{
		speed += 5;
	}
	void brake()
	{
		if (currentSpeed >= 5)
			currentSpeed -= 5;
	}
	else
	{
		speed = 0;
	}

	
};




int main()
{
	char userInput;
	Car myFirstCar;

	myFirstCar.printSelction();
	cin >> userInput;

	if (userInput == 'm')
	{

	}
	if (userInput == 'o')
	{

	}
	if (userInput == 'y')
	{

	}
	if (userInput == 's')
	{

	}
	if (userInput == 'S')
	{

	}
	if (userInput == 'p')
	{

	}

	//myFirstCar.
	return 0;
}