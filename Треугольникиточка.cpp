#include <stdio.h>

int main()
{
    double xa, ya, xb, yb, xc, yc, xd, yd;
    scanf("%lf%lf", &xa, &ya); // читаем координаты точки A
    scanf("%lf%lf", &xb, &yb); // читаем координаты точки D
    scanf("%lf%lf", &xc, &yc); // читаем координаты точки C
    scanf("%lf%lf", &xd, &yd); // читаем координаты точки D
    printf(
        (((xd - xa) * (yb - ya) - (yd - ya) * (xb - xa)) * ((xc - xa) * (yb - ya) - (yc - ya) * (xb - xa)) >= 0) &&
        (((xd - xb) * (yc - yb) - (yd - yb) * (xc - xb)) * ((xa - xb) * (yc - yb) - (ya - yb) * (xc - xb)) >= 0) &&
        (((xd - xc) * (ya - yc) - (yd - yc) * (xa - xc)) * ((xb - xc) * (ya - yc) - (yb - yc) * (xa - xc)) >= 0) ?
        "yes" : "no");
    return 0;
}
