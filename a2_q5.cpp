#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int n1=(n+1)/2;
    int n2=n/2;
    int i=1;
    while(i<=n1){
        int k=1;
        while(k<=n1-i){
            cout << " ";
            k++;
        }
        int j=1;
        while(j<=2*i-1){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    int m=n2;
    while(m>=1){
        int l=1;
        while(l<=n2-m+1){
            cout << " ";
            l++;
        }
        int s=1;
        while(s<=2*m-1){
            cout << "*";
            s++;
        }
        cout << endl;
        m--;
    }

}
