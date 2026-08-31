#include<iostream>
using namespace std;
class Complex{
private:
float real,imag;
public:
void setData(float r,float i){
real=r;
imag=i;
}
void display(){
if(imag>=0)
cout<<real<<" + "<<imag<<"i"<<endl;
else
cout<<real<<" - "<<-imag<<"i"<<endl;
}
};
int main(){
Complex c[3];
c[0].setData(2,3);
c[1].setData(5,-2);
c[2].setData(4,6);
for(int i=0;i<3;i++)
c[i].display();
return 0;
}