
#ifndef LAB3_2_TRIANGLECLASS_H
#define LAB3_2_TRIANGLECLASS_H

#include<vector>

class TriangleClass {
private:
    int a;
    int b;
    int c;
    std::vector<int> a_xy;
    std::vector<int> b_xy;
    std::vector<int> c_xy;
public:
    TriangleClass(int a, int b, int c, std::vector<int> a_xy, std::vector<int> b_xy, std::vector<int> c_xy) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->a_xy = a_xy;
        this->b_xy = b_xy;
        this->c_xy = c_xy;
    }

    bool operator==(TriangleClass &, TriangleClass &);

    bool operator!=(TriangleClass &, TriangleClass &);

    TriangleClass operator+(TriangleClass &, float x, float y);

    TriangleClass operator<(TriangleClass &, TriangleClass &);

    TriangleClass operator>(TriangleClass &, TriangleClass &);

    float square(TriangleClass &);
};


#endif //LAB3_2_TRIANGLECLASS_H
