// ****************************************************
//  fracture.c
//  Author: Camila Viciedo
//  Class: COP 3223, Professor Parra
//  Purpose: This program is meant to implement 5 different functions while learning the benefits of fracturing.
//  Input:
// ****************************************************

// Header files 
#include <math.h>
#include <stdio.h>

#define PI 3.14159265358979323846

// User input for coordinate x1 
double getx1(){ 
  double x1; 

  printf("Enter the x-coordinate of point 1: ");
  scanf("%lf", &x1);

  return x1;
}

// User input for coordinate y1 
double gety1(){
  double y1;

  printf("Enter the y-coordinate of point 1: ");
  scanf("%lf", &y1); 

  return y1;
}

// User input for coordinate x2 
double getx2(){ 
  double x2;

  printf("Enter the x-coordinate of point 2: ");
  scanf("%lf", &x2);
  return x2;
}

// User input for coordinate y2 
double gety2(){
  double y2;

  printf("Enter the y-coordinate of point 2: ");
  scanf("%lf" , &y2); 

  return y2;
}

// Calculates Distance of two points
double calculateDistance()
{
  double x1 = getx1();
  double y1 = gety1();
  double x2 = getx2();
  double y2 = gety2();

  printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
  printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);

  double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  return distance; 
}

// Helper function used to print distance 
double storeDistance()
{
  double distance = calculateDistance();
  printf("The distance between the two points is: %.2lf\n", distance);

  return distance;
}

// Calculates the perimeter of the circle 
double calculatePerimeter()
{
  //Uses distance as diameter for perimeter equation 
  double diameter = calculateDistance();
  double perimeter = 2 * diameter;

  //Output 
  printf("The perimeter of the city encompassed by your request is  %.2lf\n", perimeter);

  return 3;

}

// Calculates the area of the circle 
double calculateArea()
{
  //Uses distance as diameter for area equation
  double diameter = calculateDistance();
  double radius = diameter/2;
  double area = PI * pow(radius, 2);

  //Output
  printf("The area of the city encompassed by your request is %.2lf\n", area);

  return 1;
}

// Calculates width of the circle, distance between x2 and x1 
double calculateWidth()
{
  double x1 = getx1();
  double y1 = gety1();
  double x2 = getx2();
  double y2 = gety2();

  double width = x2-x1; 
  
  printf("The width of the city encompassed by your request is: %.2f\n", width);

  return 3; 
}

// Calculates height of the circle, distance between y2 and y1 
double calculateHeight()
{
  double x1 = getx1();
  double y1 = gety1();
  double x2 = getx2();
  double y2 = gety2();

  double height = y2-y1; 

  printf("The height of the city encompassed by your request is: %.2f\n", height);

  return 1;
}

// Main Function 
int main (int argc, char **argv)
{
    storeDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}
