/*Q- 1 2 3
     2 3 4
     3 4 5
*/
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        int value = i;
        for(j=1;j<=n;j++){
            cout<<value<<" ";
            value = value+1;
        }
        cout<<endl;
    }
    return 0;
}