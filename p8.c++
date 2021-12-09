  
#include<iostream>
using namespace std;
  
     
     
class Media      // créer class mere
     {
       public:
            virtual void imprime()=0;    // créer virtual methode   
            virtual char *id()=0;                                    

      protected:
             string titre;
};
class Livre : public Media   //class fille 
{
public:
   void imprime(){  // créer methode pour affiche des  messages

       cout<< "imprime Livre "<<endl;
   }
      char *id(){
          cout<<"LIVRE 1"<<endl;
          return 0;
      }

private:
    string auteur, editeur ;   // créer des attribus de class livre
};
class Audio : public Media   //créer sous-class audio 
{
public:
   void imprime(){       // créer methode pour affiche des messages

       cout<< "imprime Audio "<<endl;
   }
      char *id(){
          cout<<"Audio 1"<<endl;
          return 0;
      }

private:
    string CD , Cassette, Disque;   // créer des attribus de class audio
};
class Presse : public Media     // créer class Press sous-class de Media
{
public:
   void imprime(){     // créer methode pour affiche des messages 


       cout<< "imprime Presse "<<endl;
   }
    char  *id(){
          cout<< " Presse 1 "<<endl;
          return 0;
      }

private:
    string Magasin , journal, revue;  // créer des attribus de class Press
};
  main (){      //créer un mini programme pour teste les class 

  Audio a;
  a.imprime();
 a.id();
  Presse p;
  p.imprime();
  p.id();

  }