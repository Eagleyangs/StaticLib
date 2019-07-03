#ifndef STATICLIB_H
#define STATICLIB_H


class StaticLib
{

public:
    StaticLib();

    int sum(int x, int y);

    friend int Sum(int x, int y);
};

#endif // STATICLIB_H
