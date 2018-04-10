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
	void PrintSelction()
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

	void PrintStatus()
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

	string GetColor()
	{
		return color;
	}

	string GetModel()
	{
		return model;
	}
	string GetMake()
	{
		return make;
	}

	int GetYear()
	{
		return year;
	}

	int GetCurrentSpeed()
	{
		return currentSpeed;
	}

	// accel
	
	void Accelerate()
	{
		speed += 5;
	}
	void Brake()
	{
		if (currentSpeed >= 5)
		{
			currentSpeed -= 5;
		}
		else
		{
			speed = 0;
		}
	}
	

	void Start()
	{
		Accelerate();
	}
};




int main()
{
	char userInput;
	Car myFirstCar;
	int speed;

	myFirstCar.PrintSelction();
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
		if (Accelerate(speed != 0))
		{
			cout << "Your vehicle is not running... it is already stopped." << endl;
		}
		else
		{
			Brake();
			cout << "Your vehicle is slowing down." << endl;
		}
	}
	if (userInput == 'p')
	{

	}

	//myFirstCar.
	return 0;
}