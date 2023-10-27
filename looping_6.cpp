//Q6- 0,1,1,2,3,5,8......................(FIBONACCI SERIES)

#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int a=0;
    int b=1;
   int c = a+b;
   cout<<a<<endl;
   cout<<b<<endl;
    for(int i=2;i<=num;i++){
        cout<<c<<endl;
        a=b;
        b=c;
        c=a+b;

    }
    return 0;
}