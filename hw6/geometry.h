#include <math.h>
float VolSphere(float Radius)
{
    return 4.0/3.0 * 3.1416 * Radius * Radius * Radius;
}

float AreaSphere(float Radius)
{
    return 4.0 * 3.1416 * Radius * Radius;
}

float VolCone(float Radius, float Height)
{
    return 3.1416 * Radius * Radius * (Height/3.0);
}

float AreaCone(float Radius, float Height)
{
    return 3.1416 * Radius * (Radius + sqrt(Height*Height+Radius*Radius));
}

float VolCylinder(float Radius, float Height)
{
    return 3.1416 * Radius * Radius * Height;
}

float AreaCylinder(float Radius, float Height)
{
    return (2* 3.1416 * Radius * Height) + (2 * 3.1416 * Radius * Radius);
}

float VolDonut(float R, float r)
{
    return 2 * 3.1416 * 3.1416 * R * r * r;
}