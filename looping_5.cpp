//Q5- 1,2,3,4,1,2,3,4,1,2,3,.............

#include<iostream>
using namespace std;
int main(){ 
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        if(i<=4){
            cout<<i<<endl;
        }
        else if(i%4==0){
            cout<<"4"<<endl;
        }
        else{
            cout<<i%4<<endl;
        }
    }
    return 0;
}