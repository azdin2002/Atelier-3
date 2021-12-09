#include <iostream>
using namespace std;

class Shape
{
protected:
  float x, y;
public:
  Shape(float L, float H)  //constructeur qui donne une valeur à la largeur et à la hauteur.

  {
    x = L;
    y = H;
  }
};

class Rectangle: public Shape     // sous-classes rectangle 
{
public:
  Rectangle(float L, float H) : Shape(L, H) {}

  float area()  //calculer l'aire de la zone  pour rectangle
  {
    return (x * y);
  }
};

class Triangle: public Shape  // sous-classes traingle
{
public:
  Triangle(float L, float H) : Shape(L, H) {}

  float area()        //calculent l'aire de la zone pour triangle 
  {
    return (x * y / 2);
  }
};

 main (){

  Rectangle rectangle(5,2);  //l'objet rectangle
  Triangle triangle(5,2);   //l'objet tringle 
  cout<<"la surface de cett rectangle est : " << rectangle.area() << endl;   //10
  cout<<"la surface de cett triangle est : "  << triangle.area() << endl;    //5 
  
}