#include <iostream>
using namespace std;
int main(){
    int n;
    int ans=1;
    cin >>n;
    cout << "1" << endl;
    for(int i=1; i<n; i++){
        ans=ans*11;
        cout << ans << endl; 
    }
}
