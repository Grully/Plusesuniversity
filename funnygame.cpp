
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main()
{
    int a = 0;
    cout << "Enter the number: ";
    cin >> a;
    int p = 0;
    int b = a;
    while(b > 0){
        b = b/2;
        p++;
    }
    int k = pow(2, p);
    int max = a;
    b = a;
    
    for (int i = 0; i < p; i++) {
        a = a << 1;
        if(a >= k) {
            a = a - k + 1;
        }
        if(a > max) {
            max = a;
        }
        
    }
    cout << max;





    return 0;
}
