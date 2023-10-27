//Q4- 9,99,999,9999,............

#include<iostream>
#include<cmath>
using namespace std;
int main(){
         int num;
        cin>>num;
        long long int value = 9;
       // for(int i=1;i<=num;i++){
       //  long long int t = 0;
       //    t = pow(10,i);
       //     cout<<t-1<<endl;
       // }
         for(int i=1;i<=num;i++){
         long long int c = value;
            cout<<c<<endl;
           value = value*10+9;
         }
    return 0;
}