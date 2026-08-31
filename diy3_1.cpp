#include<iostream>
using namespace std;
class Rectangle{
private:
float length,width;
public:
void setLength(float l){
if(l>=0)
length=l;
}
void setWidth(float w){
if(w>=0)
width=w;
}
float area(){
return length*width;
}
float perimeter(){
return 2*(length+width);
}
};
int main(){
Rectangle r;
r.setLength(10);
r.setWidth(5);
cout<<"Area = "<<r.area()<<endl;
cout<<"Perimeter = "<<r.perimeter()<<endl;
return 0;
}