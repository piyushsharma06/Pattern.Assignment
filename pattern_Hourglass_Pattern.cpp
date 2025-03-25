// Hourglass_Pattern
//* * * * * * * * * 
// * * * * * * * 
//    * * * * * 
//      * * * 
//        * 
//      * * * 
//    * * * * * 
//  * * * * * * * 
//* * * * * * * * * 

#include<iostream>
using namespace std;
void Hourglass_Pattern(int n)
{
    //1st half
   
//* * * * * * * * * 
//  * * * * * * * 
//    * * * * * 
//      * * * 
//        * 
//loop for 1st half
    for(int i=0;i<n;i++){
        // for space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //for star
        for(int k=0;k<2*n-2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    //2nd half
    
//      * * * 
//    * * * * * 
//  * * * * * * * 
//* * * * * * * * * 

//loop for 2 nd half
    for(int i=0;i<n-1;i++){
        // for space
        for(int j=0;j<n-i-2;j++){
            cout<<" ";
        }
        for(int k=0;k<2*i+3;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    Hourglass_Pattern(n);
    return 0;
}