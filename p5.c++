#include <iostream>

using namespace std;

class animal       //créer le class mere  
{
public:
    string nom;     //créer les objets de class animal
    int age;
    void set_value();  //créer methode 
    
};
class zebra : public animal    //créer le class fille zebra 
{
public:
    string lieu_origine;      
   void set_value()    //créer methode  set_value pour afficher les information
                      
    {
        cout<< "l'age est: "<<age<< " le nome est:  " <<nom<< " le lieu origine de zebra est: " << lieu_origine <<endl;
    }
};
class dolphin : public animal  //créer le class fille dolphin
{
    public:
    string lieu_origine;
  void  set_value()       //créer methode  set_value pour afficher les information
    {
        cout<< "l'age : "<<age<< "le nome : " <<nom<< "le lieu origine de zebra est: " << lieu_origine <<endl;
    }
};
int main()
{
    string name1,name2, lieuOrg1,lieuOrg2;
    int a,b;
    cout << "entrer le nome de zebra : ";
    cin>>name1;
    cout<<" entre l'age de zebra :  ";
    cin>>a;
    cout<<"entre le lieu origine de zebra :  ";
    cin>>lieuOrg1;
    zebra k;
    k.nom=name1;
    k.age=a;
    k.lieu_origine=lieuOrg1;
    k.set_value(); 
    cout << "entrer le nome de dolphin : ";
    cin>>name2;
    cout<<" entre l'age de dolphin :  ";
    cin>>b;
    cout<<"entre le lieu origine de dolphin :  ";
    cin>>lieuOrg2;
    dolphin d;
    d.nom=name2;
    d.age=b;
    d.lieu_origine=lieuOrg2;
   d.set_value();
    return 0;
}