#ifndef FACTORIAL_HPP
#define FACTORIAL_HPP

#include <stdexcept>
#include <boost/multiprecision/cpp_int.hpp>

using boost::multiprecision::cpp_int;

inline cpp_int factorial(int n) {
    if (n < 0) throw std::invalid_argument("negative input");
    cpp_int f = 1;
    for (int i = 1; i <= n; ++i) f *= i;
    return f;
}

#endif // FACTORIAL_HPP
