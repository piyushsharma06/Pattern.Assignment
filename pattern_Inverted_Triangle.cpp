//  Inverted_Triangle
 
 // * * * * * * * * * 
 //   * * * * * * * 
 //     * * * * * 
 //       * * *
 //         *     
 
 
 #include<iostream>
using namespace std;
void Inverted_Triangle(int n)
{
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++){
               cout<<"  ";
        }
        for(int k=0;k<2*n-2*i-1;k++){
            cout<<"* ";
        }
            cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    Inverted_Triangle(n);
    return 0;
}
 