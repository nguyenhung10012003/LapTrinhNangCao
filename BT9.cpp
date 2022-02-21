#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
    
    int a,b,c;
    cin >> a >> b >> c;
    float p = float (a + b + c) / 2;
    float s = (p-a) * (p - b) * (p - c) * p;
    if (s > 0) cout << fixed << setprecision(2) << sqrt(s);
    else cout << "invalid";
    
    return 0;
}