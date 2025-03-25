// Inverted Pyramid
// * * * * * 
// * * * * 
// * * * 
// * * 
// *

#include<iostream>
using namespace std;
void Inverted_Pyramid(int n)
{
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i;j++){
               cout<<"* ";
        }
            cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    Inverted_Pyramid(n);
    return 0;
}
