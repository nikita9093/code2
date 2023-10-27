/* Q- 1
      2 3 
      4 5 6 
      7 8 9 0
      1 2 3 4 5 */
      #include<iostream>
      using namespace std;
      int main(){
        int n;
        cin>>n;
        int count = 1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                int c = count%10;
                cout<<c<<" ";
                count++;
            }
            cout<<endl;
        }
        return 0;
      }