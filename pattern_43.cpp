// Q- Pattern 7
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j,mid;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1||i+j==n+1){
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