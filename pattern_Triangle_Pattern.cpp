// Triangle_Pattern

//    * 
//   * * 
//  * * * 
// * * * * 
//* * * * *

#include<iostream>
using namespace std;
void Triangle_Pattern(int n)
{
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++){
               cout<<" ";
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
    Triangle_Pattern(n);
    return 0;
}