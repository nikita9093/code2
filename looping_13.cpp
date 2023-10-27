//Q13- N^p = ex-5^3=5*5*5
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int pow;
    cin>>pow;
    int ans = 1;
    for(int i=1;i<=pow;i++){
       ans = ans*num;
    }
    cout<<ans;
    return 0;
}