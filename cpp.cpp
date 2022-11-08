#include<iostream>
using namespace std;

int main()
{
    
int t;
cin>>t;
while(t>0)
{
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    int i=0;
    int ct=0;
    while(i<n)
    {
        if(s[i]==s[i+1])
        {
            ct+=1;
            i=2;
        }
        else
        {
            ct++;
            i++;
        }
    }
    cout<<ct<<endl;
    t--;
}


	return 0;
}

