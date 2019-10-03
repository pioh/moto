#include <stdio.h>
#include "./Moto.hpp"

int main()
{
    Moto moto;

    printf("%f %f \n", moto.body.position.x(), moto.body.position.z());
}