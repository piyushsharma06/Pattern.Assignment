 //   Continuous_Number_Pyramid_after_180°_Rotation
/*         1 
         2 3 
       3 4 5 
     4 5 6 7 
   5 6 7 8 9   */
   #include<iostream>
   using namespace std;
   void Numbers_Pyramid_Pattern(int n){
       for(int i=0;i<n;i++){
           int l=i;
           //for space
           for(int j=0;j<n-i-1;j++){
               cout<<"  ";
           }
           // for numbere
           for(int k=0;k<i+1;k++){
           
               cout<<l+1<<" ";
               l++;
           
                
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