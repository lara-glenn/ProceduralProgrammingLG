#include <stdio.h>

float volumeofsphere(float radius, float height)
{
    float volume;
    volume = (radius * radius) * height * 3.14;
    return volume;
}

int main(){
    float radius;
    float height;

    printf("Enter radius");
    scanf("%f", &radius);

    printf("Enter height");
    scanf("%f", &height);

    printf("The volume of the sphere is %.2f", volumeofsphere(radius,height));

    return 0;

}


