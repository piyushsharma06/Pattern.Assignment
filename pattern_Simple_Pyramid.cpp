//Simple Pyramid Pattern
//* 
//* * 
//* * * 
//* * * * 
//* * * * *

#include<iostream>
using namespace std;
void Simple_Pyramid(int n)
{
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<i+1;j++){
            //hr ek column ma kiya print hoga
               cout<<"* ";
        }
            cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    Simple_Pyramid(n);
    return 0;
}
