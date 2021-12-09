#include<iostream>

using namespace std;
 class Myclass {
 
  public:
  ~Myclass();     //destructeur
    Myclass();   //constructeur par défaut
    
public:
     string nom;

 };

Myclass::~Myclass(){    // la definition de destructeur 
   
    cout<<" Au revoie  "<<nom<<endl;  // la sortie standard de la destructeur
}
Myclass::Myclass( ){
     cout<<"Bonjour "<<nom<<endl;      // la sortie standard de la constrecteur

 }
 main(){
  
  string name;
  Myclass n;   // création d'un objet de  Myclass
  cout<<"entrer votre nom : ";
  cin>>name;

  n.nom=name;    
}
