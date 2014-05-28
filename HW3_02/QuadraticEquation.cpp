#include <iostream>
#include <cmath>
#include "QuadraticEquation.h"
using namespace std;

QuadraticEquation::QuadraticEquation()
{
	a = 1.0;
	b = 1.0;
	c = 1.0;
}

double QuadraticEquation::setA()
{
	cin >> a;
	return a;
}


double QuadraticEquation::setB()
{
	cin >> b;
	return b;
}


double QuadraticEquation::setC()
{
	cin >> c;
	return c;
}


double QuadraticEquation::getDiscriminant(double a, double b, double c)
{
	double discriminant = ((b*b) - (4 * a*c));
	return discriminant;
}

double QuadraticEquation::getRoot1(double a, double b, double c)
{
	double r1 = (((-b) + sqrt((b*b) - (4 * a*c))) / (2 * a));
	return r1;

}

double QuadraticEquation::getRoot2(double a, double b, double c)
{
	double r2 = (((-b) - sqrt((b*b) - (4 * a*c))) / (2 * a));
	return r2;

}

int main()
{
	QuadraticEquation q1;
	cout << "Please enter coefficient a:  ";
	double a=q1.setA();
	cout << "Please enter coefficient b:  ";
	double b=q1.setB();
	cout << "Please enter coefficient c:  ";
	double c=q1.setC();
	

	double discriminant=q1.getDiscriminant(a, b, c);
	
	if (discriminant < 0)
	{
		cout << "The equation has no real roots.\n";
		cout << "\n\n(The discriminant was " << discriminant << ")\n";
		return 0;
	}
	else if (discriminant == 0)
	{
		cout << "The root is: " << q1.getRoot1(a, b, c) << endl;
		cout << "\n\n(The discriminant was " << discriminant << ")\n";
		return 0;
	}
	else
	{
		cout << "Root 1 is: " << q1.getRoot1(a, b, c) << "\nRoot 2 is: " << q1.getRoot2(a, b, c) << endl;
		cout << "\n\n(The discriminant was " << discriminant << ")\n";
		return 0;
	}

}


