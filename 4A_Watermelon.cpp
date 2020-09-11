#include<iostream>
using namespace std;
int main()
{
    float w;
    cin>>w;
    float ans=abs(int(w)-w);
    //cout<<ans;
    int m;
    if(ans > 0.5 && ans<1)
    {
        m=w+(1-ans);
    }
    else if(ans<0.5 && ans>0)
    {
        m=w-ans;   
    }
    else
    {
        m=int(w);
    }
    //cout<<m;
    if(m%2==0 && m!=2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}