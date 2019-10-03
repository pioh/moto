
#include <CGAL/Simple_cartesian.h>
#include <CGAL/assertions_impl.h>

typedef CGAL::Simple_cartesian<double> Kernel;
typedef Kernel::Point_3 Point;
typedef Kernel::Vector_3 Vector;
typedef Kernel::Direction_3 Direction;

class MotoBody
{
public:
    Point position;
    Direction direction;
    double angle;
    Vector speed;
    double angle_speed;
    double mass;
    double length;
};

class Moto
{
public:
    MotoBody body;
};