#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1,s2,s3;
    int i,l,j;
    cout<<"Enter two words to chech wheater the words are the anagram of each other"<<endl;
    cin>>s1>>s2;
    l=s1.length();
    s3.resize(l);
    for(i=l-1,j=0;i<=0,j<l;i--,j++)
    {
        s3[j]=s2[i];
    }
    if(s3==s1)
        cout<<"The entered words are the anagram of each other";
        else 
        cout<<"The entered words are not the anagram of each other";
        return 0;
} 