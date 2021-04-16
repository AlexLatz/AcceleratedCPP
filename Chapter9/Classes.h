class Point {
    int x;
    int y;
    public:
        Point(): x(0), y(0) {}
        Point(int x, int y): x(x), y(y) {}
        int getY() { return y; }
        int getX() { return x; }
        int distance(Point other);
};
class Rect {
    Point points[4];
    int length, height;
    public: 
        Rect(Point topLeft, Point topRight, Point bottomLeft, Point bottomRight) {
            points[0] = topLeft;
            points[1] = topRight;
            points[2] = bottomLeft;
            points[3] = bottomRight;
            length = points[0].distance(points[1]);
            height = points[0].distance(points[2]);
        }
        int area() { return length*height; }
};
