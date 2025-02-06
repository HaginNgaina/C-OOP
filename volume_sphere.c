#include <stdio.h>
#define PI 3.14159265358979323846f

float calculateSphereVolume(float radius) {
    return (4.0f / 3.0f) * PI * radius * radius * radius;
}

int main() {
    float radius, volume;


    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    
    volume = calculateSphereVolume(radius);

    
    printf("The volume of the sphere with radius %.2f is %.2f\n", radius, volume);

    return 0;
}
