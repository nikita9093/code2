/* Q- A B C
      D E F
      G H I
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    char count = 'A';
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}