#include <iostream>
using namespace std;

int main () {
    string kata;
    int n;

    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>kata;
        if (kata.length()==5){
            cout<<"3"<<endl;
        } else if (kata.length()==3) {
            if (kata[0]=='o'  && kata[1]=='n') {
                cout<<"1"<<endl;
            } else if (kata[0]=='o'  && kata[2]=='e') {
                cout<<"1"<<endl;
            } else if (kata[1]=='n'  && kata[2]=='e') {
                cout<<"1"<<endl;
            } else if (kata[0]=='t'  && kata[1]=='w') {
                cout<<"2"<<endl;
            } else if (kata[0]=='t'  && kata[2]=='o') {
                cout<<"2"<<endl;
            } else if (kata[2]=='w'  && kata[2]=='o') {
                cout<<"2"<<endl;
            }
        }
    }

    return 0;
}
