
/* 
   represent a position on doc page
   2018-11-28 20:21
   Jz Wang
 */
class Point {
 public:
    Point(int x, int y) :  _x = x, _y = 5 {};

    int GetX();
    int GetY();
    
 private:
    int x;
    int y;
};
    
