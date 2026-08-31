#include<iostream>
using namespace std;
int volume(int s){
return s*s*s;
}
int volume(int l,int b,int h){
return l*b*h;
}
double volume(double r,double h){
return 3.14*r*r*h;
}
int main(){
cout<<"Volume of cube = "<<volume(5)<<endl;
cout<<"Volume of cuboid = "<<volume(4,3,2)<<endl;
cout<<"Volume of cylinder = "<<volume(2.0,5.0)<<endl;
return 0;
}