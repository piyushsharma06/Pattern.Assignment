// Flipped_Half_Diamond
//     *
//    **
//   ***
//  ****
// *****
//  ****
//   ***
//    **
//     *

#include<iostream>
using namespace std;
void Flipped_Half_Diamond(int n)
{
    //1st half
   
//     *
//    **
//   ***
//  ****
// *****
//loop for 1st half
    for(int i=0;i<n;i++){
        // for space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //for star
        for(int k=0;k<i+1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    //2nd half
    
//  ****
//   ***
//    **
//     *
//loop for 2 nd half
    for(int i=0;i<n-1;i++){
        // for space
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        for(int k=0;k<n-i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    Flipped_Half_Diamond(n);
    return 0;
}