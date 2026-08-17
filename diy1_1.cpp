#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s,s1;
    int i,l,c=0,v=0;
    cout<<"Enter the string to calculate the vowels and consonants"<<endl;
    getline(cin, s);
    l=s.length();
    s1.resize(l);
    for(i=0;i<l;i++)
    {
        s1[i]=tolower(s[i]);
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
        v=v+1;
        else
        c=c+1;
    }
cout<<"The string "<<s<<" has consonants = "<<c<<" and vowels = "<<v;
return 0;
}