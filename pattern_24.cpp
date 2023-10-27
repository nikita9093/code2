// Q- Pattern P
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j,mid;
    mid = (n+1)/2;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1||i==1&&j<=mid||i==mid&&j<=mid||j==mid&&i<=mid){
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