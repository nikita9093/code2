/* Q- a
      a b 
      a b c
      a b c d
      a b c d e*/
      #include<iostream>
      using namespace std;
      int main(){
        int n;
        int a = 97;
        cin>>n;
        for(char i=0;i<n;i++){
            for(char j=0;j<=i;j++){
                cout<<char(a+j)<<" ";
            }
             cout<<endl;
        }
        return 0;
      }