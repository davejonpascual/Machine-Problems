#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main ()
{
double a,b,c,p, A, B, C, Area, Perimeter, Apothem, Circumcenter;
//Constant value of pi for accurate results.
const double pi = 3.14159265359;
cout << "Enter value of 1st side of the triangle: ";
cin >> a;
cout << "Enter value of 2nd side of the triangle: ";
cin >> b;
cout << "Enter value of 3rd side of the triangle: ";
cin >> c;
//Formula for solving the Interior Angles,
A = ((acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c)) * 180) / pi);
B = ((acos((pow(c, 2) + pow(a, 2) - pow(b, 2)) / (2 * c * a)) * 180) / pi);
C = ((acos((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b)) * 180) / pi);
cout << "\nA. The Interior Angles of the sides of the Triangle " << endl;
cout << "The 1st Angle is: " << A << endl;
cout << "The 2nd Angle is: " << B << endl;
cout << "The 3rd Angle is: " << C << endl;
//Classification of the Triangle by side.
cout <<"\nB. The Classification of the Triangle by side: " <<endl;
if (a == b && b == c)
cout << "Equilateral Triangle" << endl;
else if (a == b || a == c || b == c)
cout << "Isosceles Triangle" << endl;
else if (a != b && b != c)
cout << "Scalene Triangle" << endl;
//Formulas for solving the Perimeter and Area
Perimeter = a + b + c;
p = Perimeter/2;
Area = sqrt(p *((p-a) * (p-b) * (p-c)));
cout << "\nC. The Perimeter and Area of the Triangle: \n";
cout << "The Perimeter: " << Perimeter << endl;
cout << "The Area: " << Area << endl;
//Classification of the Triangle by angle
cout << "\nD. The Classification of the Triangle by Angle: " << endl;
if (A < 90 && B < 90 && C < 90)
cout << "Acute Angle" <<endl;
else if (A == 90 || B == 90 || C == 90)
cout << "Right Angle" << endl;
else if (A > 90 || B > 90 || C > 90)
cout << "Obtuse Angle" <<endl;
//Formulas for solving the Apothem and Circumcenter
Apothem = 2 * Area / Perimeter;
Circumcenter = (a * b * c) / sqrt ((a + b + c) * (a + b - c) * (b + c - a));
cout << "\nE. The Length of the apothem and circumcenter" <<endl;
cout << "The Apothem of the Triangle is " << Apothem << endl;
cout << "\nThe Circumcenter of the Triangle is " << Circumcenter << endl;
return 0;
}

