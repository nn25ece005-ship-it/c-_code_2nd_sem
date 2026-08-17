#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1,s2,s3,s4=" ";
    int i,j=0,l,n,k=0,m,o,a=0;
    cout<<"Enter the sentence\n";
    getline(cin,s1);
    l=s1.length();
    s2.resize(l);

    for(i=0,j=l-1;i<l,j>=0;i++,j--)
    {
        s2[i]=s1[j];
    }

    m=0;

    for(i=0;i<=l;i++)
    {
        if(i==l||s2[i]==' ')
        {
            for(k=i-1;k>=m;k--)
            {
                cout<<s2[k];
            }

            if(i!=l)
                cout<<" ";

            m=i+1;
        }
    }

    return 0;
}