#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    float ax, ay, bx, by;
    ax = x1 - x3;
    ay = y1 - y3;
    bx = x2 - x3;
    by = y2 - y3;

    float ab, a, b;
    ab = (ax * bx) + (bx * by);
    a = sqrt((ax * ax) + (ay * ay));
    b = sqrt((bx * bx) + (by * by));

    float alpha = acos((ab / (a + b)));
    float n = (2 * M_PI) / alpha;

    float R = a / (2 * sin(alpha));

    float S = n * R * R * sin(alpha);
    
    cout << S << endl;

    return 0;
}