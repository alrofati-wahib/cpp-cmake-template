#include <iostream>

// template_config.h has to be included first because it has
// the compilation flags
#include "template_config.h"

#ifdef USE_LIBRARY
#include "library/library.h"
#endif // #ifdef USE_LIBRARY

void HelloWorldFromMain() {
    std::cout << __FUNCTION__ << ": Hello World from main.cpp!" << std::endl;
    std::cout << __FUNCTION__ << ": Version " << TEMPLATE_VERSION_MAJOR << "."
              << TEMPLATE_VERSION_MINOR << "." << TEMPLATE_VERSION_PATCH
              << "." << TEMPLATE_VERSION_TWEAK << std::endl;
}

int main(int /*argc*/, char */*argv*/[])
{
#ifdef USE_LIBRARY
  library::HelloWorldFromLibrray();
#else
   HelloWorldFromMain();
#endif // #ifdef USE_LIBRARY
  return 0;
}