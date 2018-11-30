
#include <iostream>
using namespace std;

int main () {
    int N, F, a;

    cin>>N;
    for (int i=0; i<N; i++) {
        int sum=0;
        cin>>F;
        int x[F], y[F], z[F];

        for (int j=0; j<F; j++) {
            cin>>x[j]>>y[j]>>z[j];
            a = x[j] * z[j];
            sum = sum + a;
        } cout<<sum<<endl;
    }
}
