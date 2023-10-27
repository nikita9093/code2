//Q3- 1,-3,5,-7,....................

#include<iostream>
using namespace std;
int main(){
       int num;
       cin>>num;
       int i;
       for(int i=1;i<=num;i++){
        if(i%2==0){
            cout<<(2*i-1)*(-1)<<endl;
        }
        else{
            cout<<(2*i-1)*1<<endl;
        }
     }
          
    return 0;
}