#include<iostream>
using namespace std;
inline int minVal(int a,int b){
if(a<b)
return a;
else
return b;
}
inline int minVal(int a,int b,int c){
return minVal(minVal(a,b),c);
}
int main(){
cout<<"Minimum of 10 and 5 = "<<minVal(10,5)<<endl;
cout<<"Minimum of 10,5 and 8 = "<<minVal(10,5,8)<<endl;
return 0;
}