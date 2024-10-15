#ifndef VERSION_CHECK_HPP
#define VERSION_CHECK_HPP

#define MINIMUM_CPP_VERSION 202002L

#if defined(_MSC_VER) && !defined(__clang__)
#if _MSVC_LANG < MINIMUM_CPP_VERSION
#pragma message("MSVC: O padr�o C++ est� abaixo de C++20. Vers�o m�nima esperada: C++20 (use /std:c++20 ou superior).")
#endif

#elif defined(__clang__)
#if __cplusplus < MINIMUM_CPP_VERSION
#warning "Clang: O padr�o C++ est� abaixo de C++20. Vers�o m�nima esperada: C++20 (use -std=c++20 ou superior)."
#endif

#elif defined(__GNUC__) || defined(__MINGW32__) || defined(__MINGW64__)
#if __cplusplus < MINIMUM_CPP_VERSION
#warning "GCC/MinGW: O padr�o C++ est� abaixo de C++20. Vers�o m�nima esperada: C++20 (use -std=c++20 ou superior)."
#endif

#endif

#endif // VERSION_CHECK_HPP
