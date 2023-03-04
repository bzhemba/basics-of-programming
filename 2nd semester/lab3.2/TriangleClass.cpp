#include "TriangleClass.h"
#include <math.h>
#include <stdio.h>
#include <vector>
using namespace std;


float TriangleClass::square(TriangleClass &t) {
    float p;
    if ((a + b < c) || (a + c < b) || (b + c < a)) {
        throw runtime_error("This triangle does not exist");
    }
    p = (t.a + t.b + t.c) / 2;
    float s = sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));
    return s;
}

bool TriangleClass::operator!=(TriangleClass &first, TriangleClass &second) {
    return square(first) != square(second);
}

bool TriangleClass::operator==(TriangleClass &first, TriangleClass &second) {
    return square(first) == square(second);
}

TriangleClass TriangleClass::operator<(TriangleClass &first, TriangleClass &second) {
    if (square(first) < square(second)) {
        return first;
    } else {
        return second;
    }
}

TriangleClass TriangleClass::operator>(TriangleClass &first, TriangleClass &second) {
    if (square(first) > square(second)) {
        return first;
    } else {
        return second;
    }
}

TriangleClass TriangleClass::operator+(TriangleClass &t, float x, float y) {
    t.a_xy[0] += x;
    t.a_xy[1] += y;
    t.b_xy[0] += x;
    t.b_xy[1] += y;
    t.c_xy[0] += x;
    t.c_xy[1] += y;
    return t;
}
