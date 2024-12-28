#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i;
    long int l;
    char c;
    float f;
    double d;
    
    cin >> i >> l >> c >> f >> d;
    cout << i << endl << l << endl <<  c << endl << fixed << setprecision(3) << f << endl << setprecision(9) << d << endl;
    
    return 0;
}
