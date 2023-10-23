#include <stdio.h>

float areaofcircle(float area)
{
    float c_area;
    c_area = (area*area) * 3.14;
    return c_area;
}

int main(){

    float radius;

    printf("Enter radius:");
    scanf("%f", &radius);

    printf("The area of the circle is %.2f\n", areaofcircle(radius));



}