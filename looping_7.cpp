//Q7- 0,0,1,1,2,4,7..............(TRIBONACCI SERIES)

#include<iostream>
using namespace std;
int main(){
       int num;
       cin>>num;
       int t1 = 0;
       int t2 = 0;
       int t3 = 1;
       int n = t1+t2+t3;
       cout<<t1<<endl;
       cout<<t2<<endl;
       cout<<t3<<endl;

       for(int i=3;i<=num;i++){
        cout<<n<<endl;
        t1=t2;
        t2=t3;
        t3=n;
        n=t1+t2+t3;
       }
    return 0;
}