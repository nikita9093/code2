//Q8- Sum of digits.

#include<iostream>
using namespace std;
int main(){
      int num;
      cin>>num;
      int sum = 0;
      int rem;
      while(num>0){
         rem = num%10;
         sum = sum + rem;
         num = num/10;
      }
      cout<<sum<<endl;
    return 0;
}