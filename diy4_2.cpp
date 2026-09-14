#include<iostream>
using namespace std;
class Stack{
    int *arr;
    int top;
    int size;
public:
    Stack(int n){
        size=n;
        top=-1;
        arr=new int[size];
    }
    void push(int x){
        if(top==size-1)
            cout<<"Stack Overflow"<<endl;
        else{
            arr[++top]=x;
            cout<<"Pushed: "<<x<<endl;
        }
    }
    void pop(){
        if(top==-1)
            cout<<"Stack Underflow"<<endl;
        else
            cout<<"Popped: "<<arr[top--]<<endl;
    }
    void display(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        cout<<"Stack: ";
        for(int i=top;i>=0;i--)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    ~Stack(){
        delete[] arr;
    }
};
int main(){
    int n,x,choice;
    cout<<"Enter stack size: ";
    cin>>n;
    Stack s(n);
    do{
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter value: ";
                cin>>x;
                s.push(x);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }while(choice!=4);
    return 0;
}