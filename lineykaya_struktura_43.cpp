#include <iostream> #include <cmath> using namespace std; int main(){
double side_length;
cout << "Enter the side length ";
cin>>side_length;
double area = (side_length*side_length * sqrt(3))/4;
double insc_radius = (side_length / 2) * sqrt(3);
double circm_radius = (side_length / sqrt(3));
cout<< "Area: "<< area<<endl;
cout<<"radius1: " << insc_radius<<endl; cout<<"radius2: " << circm_radius<<endl;;
}
