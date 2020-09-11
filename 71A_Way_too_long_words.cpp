#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int count=0;
        int l = s.length();
        for(int i=0;s[i]!='\0';i++)
        {
            count++;
        }
        if(count>10)
        {
            cout<<s[0]<<count-2<<s[l-1];
        }
        else
        {
            cout<<s;
        }
        
    }
}