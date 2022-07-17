#include<iostream>

using namespace std;

int main()
{
    int a;
    cout<<"enter number for how many numbers of piramid is needed";
    cin>>a;
    for(int i =0;i<=a;i++)
    {
        // here we have initialized j with "a" so that we can print space decrement order 
        for (int j = a; j > i; j--)
        { 
            cout<<"  ";
        } 
        // we can calculate this logic of printing odd numbers using arithmethic progression
        for (int j = 0; j < 2*i-1; j++)
        {
            cout<<"* ";
        } 
       cout<<endl; 
    }
    for(int i =0;i<=a;i++)
    {
        
        for (int j =0 ;j<i+1;j++)
        {
            cout<<"  ";
        }

        // we can calculate this logic of printing odd numbers using arithmethic progression
        for (int j = a; j > 2*i; j--)
        {
            cout<<"* ";
        } 
       cout<<endl; 
    }
}