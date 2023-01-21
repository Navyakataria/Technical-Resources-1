#include <iostream>
using namespace std;
int main(){
    int i,j,n,sp,st; //sp=spaces; st=stars
    cin>>n;
    st = n/2+1 , sp=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=st;j++){    //left 
            cout<<"* ";
        }
        for(j=1;j<=sp;j++){    // middle
            cout<<"  ";
        }

        for(j=1;j<=st;j++){   // right 
            cout<<"* ";
        }
        if(i<= n/2){
            st--;
            sp++;
        }
        else{
            st++;
            sp--;
        }
        cout<<endl;
    }
    return 0;
}
