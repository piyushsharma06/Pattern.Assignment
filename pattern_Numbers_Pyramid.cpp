//  Numbers_Pyramid_Pattern 

/* 1 
   2 3 
   4 5 6 
   7 8 9 10 
   11 12 13 14 15  */
   #include<iostream>
   using namespace std;
   void Numbers_Pyramid_Pattern(int n){
       int k=1;
       for(int i=0;i<n;i++){
           for(int j=0;j<i+1;j++){
               cout<<k<<" ";
               k++;
               
           }
           cout<<endl;
       }
   }
   int main(){
       int n;
       cout<<"enter the row"<<endl;
       cin>>n;
       Numbers_Pyramid_Pattern(n);
       return 0;
   }