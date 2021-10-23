#include <iostream>
#include <cmath>

using namespace std;

class Point2d{
    public:
        double m_x;
        double m_y;
        /*Point2d(int x,int y){
            m_x = x;
            m_y = y;
        }*/
        Point2d(double x = 0.0, double y = 0.0)
        {
            m_x = x;
            m_y = y;
        }
        void print(){
            printf("Point2d(%f,%f)\n",m_x,m_y);;
        }
        double distanceTo(Point2d p){
            return sqrt(pow((m_x - p.m_x),2) + pow((m_y - p.m_y),2));
        }
};

double distanceFrom(Point2d p1,Point2d p2){
            return sqrt(pow((p1.m_x - p2.m_x),2) + pow((p1.m_y - p2.m_y),2));
        }

int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };
    first.print();
    second.print();
    std::cout << "Distance between two points: " << distanceFrom(first,second) << '\n';

    return 0;
}