#include <iostream>
using namespace std;

int main(){
	string kata;
	int i = 2;

	cin>>kata;
	if (kata == "Hajj") {
        cout<<"Case 1: Hajj-e-Akbar"<<endl;
    } else {
        cout<<"Case 1: Hajj-e-Asghar"<<endl;
    }
	while (kata != "*") {
        cin>>kata;
        if (kata == "Hajj") {
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
        } else if (kata=="Umrah"){
            cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
        }
        i++;
	}

	return 0;
}
