// User function Template for C++

struct square {
    int side;
};

struct rectangle {
    int length;
    int width;
};

void find_area(int side, int le, int wd) {
    square sq;
    sq.side = side;

    rectangle rect;
    rect.length = le;
    rect.width = wd;

    int square_area = sq.side * sq.side;
    int rectangle_area = rect.length * rect.width;

    cout << square_area << " " << rectangle_area;
}
