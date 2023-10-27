#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    for(int i=0;i<=n;i++){
        if(i%2==0){
        sum=sum+i;
        }
        else{
            continue;
        }
    }
    cout<<"The sum of the even numbers is: "<<sum<<endl;
    return 0;
}