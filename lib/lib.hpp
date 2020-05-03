#pragma once

#include <tuple>
#include <vector>

/// \brief Accumulate a vector to produce the mean and the first moment of the distribution.
///
/// This computes the mean and the first moment of a vector of double values.
///
std::tuple<double, double> accumulate_vector(const std::vector<double>& values  ///< The vector of values
);

template <typename T>
void reverse_t(T first, T last)
{
   while (first != last and first != --last) {
      std::iter_swap(first, last);
      ++first;
   }
}

template <typename T>
void rotate_t(T first, T mid, T last)
{
   reverse_t(first, mid);
   reverse_t(mid, last);
   reverse_t(first, last);
}