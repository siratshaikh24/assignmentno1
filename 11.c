#include <stdio.h>

int main() {
    float l, b, h, d, w, wall_area, roof_area;
    printf("Enter room length, breadth, height: ");
    scanf("%f %f %f", &l, &b, &h);
    printf("Enter door area and window area: ");
    scanf("%f %f", &d, &w);
    wall_area = 2 * h * (l + b) - (d + w);
    roof_area = l * b;
    printf("Wall area to be painted: %.2f\nRoof area: %.2f\n", wall_area, roof_area);
    return 0;
}