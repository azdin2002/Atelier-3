#include <iostream>

using namespace std;

//La classe Personne :
class Personne
    {
       protected:
         string nom;
        string prenom;
         int dateN;
 
        public:
        Personne(string n, string p, int d)
        {
            nom = n;
            prenom = p;
            dateN = d;
        }
 
          void Afficher()
        {

            cout<<"les information de monsieur "<<nom<<endl;
            cout<<"Nom: "<<nom<<endl<<" Prenom: "<<prenom<<endl<<" Date de naissance: " <<dateN<<endl;
            
        }
    };
//La classe Employé:
 class Employe : public Personne
    {
        protected:
        double salaire;
      

      public:
 
     Employe (string n ,string p, int d ,double s): Personne ( n,  p,  d){


           salaire = s;
           
 }
        void Afficher()
        {
            cout<<"les information de l'mploye"<<nom<<endl;
             cout<<"Nom: "<<nom<<endl<<" Prenom: "<<prenom<<endl<<" Date de naissance: " <<dateN<<endl<<" salair: " <<salaire<<endl  ;
        }
     
    };
//La classe Chef:
class Chef :public  Employe 
    {
        protected:
        string service;
       
       public: 
 
         Chef(string n, string p,int d, double s,string ser): Employe ( n ,p, d , s){
                   

                   service = ser;
                   
         }
           
        
 
          void Afficher()
        {
            cout<<"les information de monsieur  " <<nom<<" :c'est un  chef "<<endl;
           cout<<"Nom: "<<nom<<endl<<" Prenom: "<<prenom<<endl<<" Date de naissance: " <<dateN<<endl<<" salair: " <<salaire<<endl<<"service  : "<<service<<endl ;
        }
    };
//La classe Directeur:
class Directeur :public Chef
    {
        protected:
          string societe;
          
       public:
         Directeur(string n, string p, int d, double s, string ser, string soc) :Chef ( n, p, d, s,ser)
            
        {
            societe = soc;
           
        }
 
        void Afficher()
        {
            cout<<"les information de monsieur le directeur  " <<nom<<endl;
            cout<<"Nom: "<<nom<<endl<<" Prenom: "<<prenom<<endl<<" Date de naissance: " <<dateN<<endl<<" salair: " <<salaire<<endl<<"service  : "<<service<<endl<<"societe  : "<<societe;
        }
    };
     main (){    //mini programme mane pour teste 

         
      Personne p("issam","khaldi",2001);
     p.Afficher();
    Directeur d("mostapha", "haji", 1988, 9000, "SERVICE3","SOCIETE1");
     d.Afficher();
     }