#include "Point.h"

template <typename T>
Point<T>::Point(T x, T y) { this->x = x; this->y = y; }

template <typename T>
T Point<T>::GetX() { return x; }

template <typename T>
T Point<T>::GetY() { return y; }
