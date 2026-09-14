#include<iostream>
using namespace std;
class Matrix{
    int m,n;
    int **a;
public:
    Matrix(int rows,int cols){
        m=rows;
        n=cols;
        a=new int*[m];
        for(int i=0;i<m;i++)
            a[i]=new int[n];
    }
    Matrix(const Matrix &x){
        m=x.m;
        n=x.n;
        a=new int*[m];
        for(int i=0;i<m;i++){
            a[i]=new int[n];
            for(int j=0;j<n;j++)
                a[i][j]=x.a[i][j];
        }
    }
    void input(){
        cout<<"Enter matrix elements:"<<endl;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cin>>a[i][j];
    }
    void display(){
        cout<<"Matrix:"<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
    ~Matrix(){
        for(int i=0;i<m;i++)
            delete[] a[i];
        delete[] a;
    }
};
int main(){
    int m,n;
    cout<<"Enter rows and columns: ";
    cin>>m>>n;
    Matrix a(m,n);
    a.input();
    Matrix b=a;
    cout<<"Original matrix:"<<endl;
    a.display();
    cout<<"Copied matrix:"<<endl;
    b.display();
    return 0;
}