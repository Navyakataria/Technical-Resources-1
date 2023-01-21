#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin >> n;
    int a=n/2; //outer
    int b=-1;  //inner
    for(int i=1; i<=n; i++){
        for(j=1; j<=a; j++){
            cout << " ";
        }
        cout << "*";
        for(j=1;j<=b;j++){
            cout <<" ";
        }
        if(i>1 && i<n){
            cout << "*";
        }
        if(i<=n/2){
            a--;
            b=b+2;
        }
        else{
            a++;
            b=b-2;
        }
        cout << endl;
    }
    return 0;

}
