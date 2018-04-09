#include <iostream>
#include <cstring>
using namespace std;




class Car
{
private:	
	string color, model, make;
	int year, currentSpeed;

public:

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
	Car myFirstCar;
	myFirstCar.
	return 0;
}