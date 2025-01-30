#include <stdio.h>

int main() {
    int radius;
    float volume;

    printf("Enter the radius: ");
    scanf("%d", &radius);
    volume = 4.0f / 3.0f * 3.14159f * radius * radius * radius;

    printf("Sphere Volume : %.2f cubic unit.", volume);

    return 0;
}