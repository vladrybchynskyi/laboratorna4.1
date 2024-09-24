# include <iostream>
# include <cmath>
using namespace std;
int main() {
    int i, N;
    double S;
    cout << "N = "; cin >> N;
    i = N;
    S = 0;
    while (i <= 22) {
        S += sqrt(i * i + N * N) / i;
        i++;
        cout << S << endl;
    }
    S = 0;
    i = N;
    do {
        S += sqrt(i * i + N * N) / i;
        i++;
        cout << S << endl;
    } while (i <= 22);
    S = 0;
    i = 0;
    for (i = N; i <= 22;i ++) {
        S += sqrt(i * i + N * N) / i;
        cout << S << endl;
    }
    S = 0;
    for (i = 22; i >= N; i--) {
        S += sqrt(i * i + N * N) / i;
        cout << S << endl;
    }
    
    return 0;
}