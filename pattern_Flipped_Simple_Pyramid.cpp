//Flipped_Simple_Pyramid 
//        * 
//      * * 
//    * * * 
//  * * * * 
//* * * * *
#include<iostream>
using namespace std;
void Flipped_Simple_Pyramid(int n)
    {
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<"  ";
                
            }
            for(int k=0;k<i+1;k++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
int main(){
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    Flipped_Simple_Pyramid(n);
    return 0;
}