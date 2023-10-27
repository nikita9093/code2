/*Q-  1 2 3 4 5 5 4 3 2 1
      1 2 3 4 * * 4 3 2 1
      1 2 3 * * * * 3 2 1
      1 2 * * * * * * 2 1
      1 * * * * * * * * 1
*/ 
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(j=1;j<=2*i;j++){
            if (j<=i||j>2*n-i+1){
                cout<<j<<" ";
            }
           else if(j==2*n-i+1){
                    cout<<"* ";
            }
            
        }
    
        cout<<endl;
    }
    return 0;
}