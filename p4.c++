#include <iostream>

using namespace std;

class M{          //créer classe mère 
public:
  void display ()  //methode d'affichage pour le  class mère
  {
    cout << "La methode display de la classe A est executee\n";
  }
};

class F : public M{        //créer classe fille
public:
  void display ()     //methode d'affichage pour le  class fille  
  {
    cout << "La methode display de la classe B est executee\n";
  }
};

int main ()
{
  F b;   //créer l'objet pour le class fille 
//   M c;
  b.display();
//   c.display();
  return 0;
}