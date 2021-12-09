#include<iostream>
using namespace std;

class Test {
public:
 static int c;  // declaration de la  variable static.
void call()
{
c++;             //incrémentation de la varaible static
cout<<"Bonjour"<<endl;
}
};
int Test::c=0;   

 main() {
Test a,b,c;
a.call();
b.call();
c.call();
cout<<"la fonction  call a ete appelee: "<<Test::c<<" fois"<<endl;

}