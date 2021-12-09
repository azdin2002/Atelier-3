#include <iostream>
using namespace std;

class Complex{
  
  public:
  double real, imag;

  Complex(double r, double i){
    real = r;
    imag = i;
  }
};

int main(){

  double r1, i1;
  cout << "Premier nombre \n";
  cout << "Entrez la partie reelle: ";
  cin >> r1;
  cout << "Entrez la partie imaginaire: ";
  cin >> i1;
  cout<<"le Premier nombre complex est : "<< r1 <<" + "<<i1<<"i"<<endl;
  //créer le nombre complexe 1
  Complex c1(r1, i1);
  
  cout << "Deuxieme nombre\n";
  double r2, i2;
  cout << "Entrez la partie reelle: ";
  cin >> r2;
  cout << "Entrez la partie imaginaire: ";
  cin >> i2;
cout<<"le Deuxieme nombre complex est : "<< r2 <<" + "<<i2 <<"i"<<endl;
  //créer le nombre complexe 2  
  Complex c2(r2, i2);

  // calculer la somme des deux nombres complexes c1 et c2
  double r = c1.real + c2.real;
  double i = c1.imag + c2.imag;
  // calculer la différence des deux nombres complexes c1 et c2
   double r3 = c1.real - c2.real;
  double i3 = c1.imag - c2.imag;
  // calculer le produit des deux nombres complexes c1 et c2
  double r4=(c1.real*c2.real)-(c1.imag*c2.imag);
  double i4 = (c1.real*c2.imag)+(c2.real*c2.real);


     int o;

  cout<<"choisir une operation arithmetique :"<<endl<<"(poure la somme choisir 1 poure la  difference choisir 2 et poure  produit choisir 3): ";
  cin>>o;


   while( o<=0 || o>3 )
    {
        cout << "entrer un nombre entre 1 et 3"<<endl;
        cout << "entrer votre choix: ";
        cin >>o;
        
    }


  if(o==1){
  cout << "La somme est "<< r << " + i " << i ;
  
  }
  else if (o==2){
   cout <<endl<< "La difference   est "<< r3 << " +  " << i3 <<"i";
 
   }
   else if(o==3){

   
   cout <<endl<< "Le produit est     "<< r4 << " +  " << i4 <<"i";
   
   }
     
else{
  cout<<"poure la somme choisir 1 poure la  difference choisir 2 et poure  produit choisir 3";
}


  
  return 0;
}