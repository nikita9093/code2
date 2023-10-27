//Q2- 1,0,1,0,...........

#include<iostream>
using namespace std;
int main(){
      int num;
      cin>>num;
      for(int i=1;i<=num;i++){
         if(i%2==0){
            cout<<"0"<<endl;
         }
         else{
            cout<<"1"<<endl;
         }
      }

    return 0;
}