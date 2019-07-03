#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "inc/StaticLib.h"
#include <QDebug>

using namespace std;

int main()
{
    StaticLib slib;
    int s = 0, S = 0, a = 3, b = 4, c = 5, d = 6;
    s = slib.sum(a, b);
    S = Sum(c, d);

    qDebug() << "s =" << s;
    qDebug() << "S =" << S;
    return 0;
}
