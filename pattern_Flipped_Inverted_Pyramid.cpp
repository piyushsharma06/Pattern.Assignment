//  Flipped_Inverted_Pyramid 
//* * * * * 
//  * * * * 
//    * * * 
//      * * 
//        * 

#include<iostream>
using namespace std;
void Flipped_Inverted_Pyramid(int n)
{
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++){
               cout<<"  ";
        }
        for(int k=0;k<n-i;k++){
            cout<<"* ";
        }
            cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    Flipped_Inverted_Pyramid(n);
    return 0;
}