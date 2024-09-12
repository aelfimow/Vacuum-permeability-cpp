#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>

#include "my_types.h"

extern fp64 speed_of_light();
extern fp64 vacuum_permittivity();
extern fp64 vacuum_permeability();

int main(int, char *[])
{
    int const digits = 16;
    fp64 const c = speed_of_light();
    fp64 const eps0 = vacuum_permittivity();
    fp64 const mu0 = vacuum_permeability();

    // Print out hard-coded values:
    {
        std::cout << "Hard coded values (fp64):" << std::endl;

        std::cout << std::setprecision(digits) << "    Speed of light: " << c << std::endl;
        std::cout << std::setprecision(digits) << "    Vacuum permittivity: " << eps0 << std::endl;
        std::cout << std::setprecision(digits) << "    Vacuum permeability: " << mu0 << std::endl;
    }

    std::cout << "Computed values (fp64):" << std::endl;

    // Compute speed of light:
    {
        fp64 const computed_c = 1.0 / ::sqrt(eps0 * mu0);

        std::cout << std::setprecision(digits) << "    Speed of light: " << computed_c << std::endl;
    }

    // Compute vacuum permittivity:
    {
        fp64 const computed_eps0 = 1.0 / (mu0 * (c * c));

        std::cout << std::setprecision(digits) << "    Vacuum permittivity: " << computed_eps0 << std::endl;
    }

    // Compute vacuum permeability:
    {
        fp64 const computed_mu0 = 1.0 / (eps0 * (c * c));

        std::cout << std::setprecision(digits) << "    Vacuum permeability: " << computed_mu0 << std::endl;
    }

    return EXIT_SUCCESS;
}
