//Q- pattern A
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j,k,mid;
      mid = (n+1)/2;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
          cout<<"  ";
        }
        for(k=1;k<=2*i-1;k++){
            if(k==1||k==2*i-1||i==mid){
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