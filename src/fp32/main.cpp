#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>

#include "my_types.h"

extern fp32 speed_of_light();
extern fp32 vacuum_permittivity();
extern fp32 vacuum_permeability();

int main(int, char *[])
{
    fp32 const c = speed_of_light();

    fp32 const eps0 = vacuum_permittivity();

    fp32 const mu0 = 1.0f / (eps0 * (c * c));

    std::cout << std::setprecision(10) << "Vacuum magnetic permeability (fp32): " << mu0 << std::endl;

    return EXIT_SUCCESS;
}
