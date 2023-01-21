#include <iostream>
using namespace std; 
int main(){
    int x;
    int ans=1;
    cin >> x;
    for(int i=1; i<=10; i++){
        ans=x*i;
        cout << x << "*" << i << "=" << ans << endl;
    }
}
