#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>

using fp32 = float;
static_assert(sizeof(fp32) == 4U);

int main(int, char *[])
{
    fp32 const c = 299792458.0f;

    fp32 const eps0 = 8.8541878128E-12f;

    fp32 const mu0 = 1.0f / (eps0 * (c * c));

    std::cout << std::setprecision(10) << "Vacuum magnetic permeability (fp32): " << mu0 << std::endl;

    return EXIT_SUCCESS;
}
