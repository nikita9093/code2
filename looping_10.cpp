//Q10- Reverse of number.
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int rem;
    int newNo = 0;
    while(num>0){
        rem = num%10;
        newNo = newNo*10 + rem;
        num = num/10;
    }
    cout<<newNo<<endl;
    return 0;
}