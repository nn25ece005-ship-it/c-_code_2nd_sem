#include<iostream>
using namespace std;
class Tracer{
    int id;
public:
    Tracer(int x){
        id=x;
        cout<<"Tracer "<<id<<" created"<<endl;
    }
    ~Tracer(){
        cout<<"Tracer "<<id<<" destroyed"<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter number of Tracers: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        Tracer *t=new Tracer(i);
        delete t;
    }
    return 0;
}