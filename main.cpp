#include <iostream>

using namespace std;


int f(int n)
{
    if(n==1 || n==2)
        return 1;
    else
        return f(n-1)+n;
}

int main()
{
    int a,b;
    cout<<"ile chcesz podac liczb? :";
    cin>>a;
    int tablica[a];
    for(int i=0; i<a; i++)
    {
        cin>>b;
        tablica[i]=b;
    }
    for(int i = 1;i<a; i+=2)
    {
        cout<<tablica[i]<<" ";
    }
    n=
    for(int i=0; i<a; i++)
    {
        cout<<tablica[f(n)]<<" ";
    }
}
