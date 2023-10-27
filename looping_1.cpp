//Q1- 1,-1,1,-1,......................

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<"-1"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }

    return 0;
}