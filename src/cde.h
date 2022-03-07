#pragma once

#ifdef _WIN32
  #define cde_EXPORT __declspec(dllexport)
#else
  #define cde_EXPORT
#endif

cde_EXPORT void cde();
