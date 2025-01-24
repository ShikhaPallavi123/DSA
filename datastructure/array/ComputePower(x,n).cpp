//
// Created by Shikha Pallavi on 1/23/25.
//
//
// Created by Shikha Pallavi on 1/23/25.
//
#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {

        long long power = n;
        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        double result = 1.0;
        while (power > 0) {
            if (power % 2 == 1) {
                result *= x;
            }
            x *= x;
            power /= 2;
        }

        return result;
    }
};

int main() {
    Solution sol;

    // Test case 1
    double x1 = 2.00000;
    int n1 = 10;
    cout << "Result of " << x1 << "^" << n1 << " = " << sol.myPow(x1, n1) << endl;

    // Test case 2
    double x2 = 2.10000;
    int n2 = 3;
    cout << "Result of " << x2 << "^" << n2 << " = " << sol.myPow(x2, n2) << endl;

    // Test case 3
    double x3 = 2.00000;
    int n3 = -2;
    cout << "Result of " << x3 << "^" << n3 << " = " << sol.myPow(x3, n3) << endl;

    return 0;
}
