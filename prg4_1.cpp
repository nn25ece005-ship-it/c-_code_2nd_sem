#include<iostream>
using namespace std;
class Tracer{
int id;
public:
Tracer(int i):id(i){cout<<"Construct #"<<id<<endl;}
~Tracer(){cout<<"Destruct #"<<id<<endl;}
};
int main(){
cout<<"Enter block\n";
{
Tracer a(1),b(2);
cout<<"...working...\n";
}
cout<<"Left block\n";
return 0;
}