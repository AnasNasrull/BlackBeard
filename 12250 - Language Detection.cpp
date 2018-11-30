#include <iostream>
using namespace std;

int main () {
    string S;
    int i=1;

    cin>>S;
    while (S!="#") {
        if (S=="HELLO") {
            cout<<"Case "<<i<<": ENGLISH"<<endl;
        } else if (S=="HOLA") {
            cout<<"Case "<<i<<": SPANISH"<<endl;
        } else if (S=="HALLO") {
            cout<<"Case "<<i<<": GERMAN"<<endl;
        } else if (S=="BONJOUR") {
            cout<<"Case "<<i<<": FRENCH"<<endl;
        } else if (S=="CIAO") {
            cout<<"Case "<<i<<": ITALIAN"<<endl;
        } else if (S=="ZDRAVSTVUJTE") {
            cout<<"Case "<<i<<": RUSSIAN"<<endl;
        } else {
            cout<<"Case "<<i<<": UNKNOWN"<<endl;
        }
        cin>>S;
        i++;
    }
}
