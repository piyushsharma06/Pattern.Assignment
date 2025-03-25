// Half_Diamond_Pattern 

//* 
//* * 
//* * * 
//* * * * 
//* * * * * 
//* * * * 
//* * * 
//* * 
//* 

#include<iostream>
using namespace std;
void Half_Diamond_Pattern(int n)
{
    //1st half
   
//* 
//* * 
//* * * 
//* * * * 
//* * * * *   
//loop for 1st half
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //2nd half
    
//* * * * 
//* * * 
//* * 
//* 
//loop for 2 nd half
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    Half_Diamond_Pattern(n);
    return 0;
}