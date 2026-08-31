#include<iostream>
using namespace std;
class Counter{
private:
int count;
public:
Counter(){
count=0;
}
void increment(){
count++;
}
void reset(){
count=0;
}
int get(){
return count;
}
};
int main(){
Counter c[3];
c[0].increment();
c[0].increment();
c[1].increment();
c[2].increment();
c[2].increment();
c[2].increment();
for(int i=0;i<3;i++)
cout<<"Counter "<<i+1<<" = "<<c[i].get()<<endl;
return 0;
}