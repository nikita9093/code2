/* Q- 1
      0 1
      1 0 1
      0 1 0 1
      1 0 1 0 1*/
    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        int i,j;
        int c;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                c=i+j;
                  if(c%2==0){
                    cout<<"1"<<" ";
                  }
                  else{
                    cout<<"0"<<" ";
                  }
            }
            cout<<endl;
        }
        return 0;
    }