//Q11- Palindrome no.
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int rem;
    int newNo = 0;
   int temp = num;
    while(num>0){
        rem = num%10;
        newNo = newNo*10 + rem;
        num = num/10;
    }
    if(temp==newNo){
        cout<<newNo<<" is a palindrome number"<<endl;
    }
    else{
        cout<<newNo<<" is not a palindrome number"<<endl;
    }
    return 0;
}