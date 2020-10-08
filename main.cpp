#include <iostream>
using namespace std;

int main() {
    int sum(0), points;
    float x, y;

    for (int shotCount = 0; shotCount < 5; ++shotCount) {
        points = 0;
        cout << "Enter X[" << shotCount + 1 << "]: ";
        cin >> x;
        cout << "Enter Y[" << shotCount + 1 << "]: ";
        cin >> y;
        x+= -5 + rand() % 5;
        y+= -5 + rand() % 5;
        for (int radius = 5; radius >= 0; --radius) {
            if(x*x + y*y >= radius*radius) {
                sum+=points;
                break;
            }
            ++points;
        }
        cout << "X: "<< x <<"\nY: " << y <<"\n" << endl;
    }
    cout << (sum < 10 ? "LUSER, " : "WIN, ") << "YOUR SUM: " << sum << endl;
    return 0;
}
