#include <iostream>
using namespace std;

int main(){
    int n, money, sum = 0;
    string operation;

    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>operation;
        if (operation == "donate") {
            cin>>money;
            sum=sum+money;
        } else {
            cout<<sum<<endl;
        }
    }

	return 0;
}
