#include <iostream> #include <cmath>
using namespace std; int main(){
int a;
int b;
cout << "Enter a " << endl; cin >>a;
cout<< "Enter b " <<endl; cin>>b;
double hypotenuse = sqrt(a*a+b*b); cout<<"hypotenuse "<<hypotenuse<<endl;;
double area = a*hypotenuse/2;
cout<<"area "<< area<<endl; }
