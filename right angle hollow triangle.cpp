#include <iostream>
using namespace std;
int main()
{
    int i,j,rows;
    cin>>rows;
    for(i=1; i<=rows; i++){
        for(j=1; j<=i; j++){
        if(j==1 || j==i || i==rows){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<"\n";
    }
    return 0;
}
