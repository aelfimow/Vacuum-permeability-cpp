#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <vector>
#include <quadmath.h>

#include "my_types.h"

extern fp128 speed_of_light();
extern fp128 vacuum_permittivity();
extern fp128 vacuum_permeability();

static std::string to_string(fp128 const &value);

int main(int, char *[])
{
    fp128 const c = speed_of_light();
    fp128 const eps0 = vacuum_permittivity();
    fp128 const mu0 = vacuum_permeability();

    // Print out hard-coded values:
    {
        std::cout << "Hard coded values (fp128):" << std::endl;

        std::cout << "    Speed of light: " << to_string(c) << std::endl;
        std::cout << "    Vacuum permittivity: " << to_string(eps0) << std::endl;
        std::cout << "    Vacuum permeability: " << to_string(mu0) << std::endl;
    }

    std::cout << "Computed values (fp128):" << std::endl;

    // Compute speed of light:
    {
        fp128 const computed_c = 1.0Q / ::sqrtq(eps0 * mu0);

        std::cout << "    Speed of light: " << to_string(computed_c) << std::endl;
    }

    // Compute vacuum permittivity:
    {
        fp128 const computed_eps0 = 1.0Q / (mu0 * (c * c));

        std::cout << "    Vacuum permittivity: " << to_string(computed_eps0) << std::endl;
    }

    // Compute vacuum permeability:
    {
        fp128 const computed_mu0 = 1.0Q / (eps0 * (c * c));

        std::cout << "    Vacuum permeability: " << to_string(computed_mu0) << std::endl;
    }

    return EXIT_SUCCESS;
}

/**
 * \brief Helper to convert fp128 to std::string
 */
static std::string to_string(fp128 const &value)
{
    std::vector<char> buffer(256U);

    ::quadmath_snprintf(buffer.data(), buffer.size(), "%.36Qe", value);

    std::string const str(buffer.data());

    return str;
}
