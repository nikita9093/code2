#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j,mid;
    mid = (n+1)/2;
    for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
    if(i==mid||j==mid||j==1&&i<=mid||j==n&&i>=mid||i==1&&j>=mid||i==n&&j<=mid){
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