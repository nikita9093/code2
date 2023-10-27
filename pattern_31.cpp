// Q- Pattern V
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m = n+1;
    int i,j,k;                                   
    for(i=n;i>=1;i--){                             
        for(j=1;j<=n-i;j++){
        cout<<"  ";
        
    }
    for(k=1;k<=2*i-1;k++){
        if(k==1||k==2*i-1){
            cout<<"*"<<" ";
        }
        else{
            cout<<"  ";
        }
    }
        cout<<endl;
 }
    
    return 0;
    }
    
