#ifndef TRACK_DRAW_POINT_2D_H
#define TRACK_DRAW_POINT_2D_H


class track_draw_point_2d
{
    public:
        track_draw_point_2d(double, double);
        virtual ~track_draw_point_2d();

        void printPoint();

        double x;
        double y;

    protected:

    private:
};

#endif // TRACK_DRAW_POINT_2D_H
