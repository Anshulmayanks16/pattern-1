#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    int i;
    int j;
    for(i=0;i<n;i++){
        

       for(j=0;j<n;j++){
           
        if(i==n-1 || j==n-1 || i+j==n-1){
        cout<<"*";
        }  
        else{
            cout<<" ";
        }
       }
       cout<<endl;  }
      
    }
