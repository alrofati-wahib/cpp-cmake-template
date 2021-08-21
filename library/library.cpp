#include "library/library.h"

#include <iostream>

// template_config.h has to be included first because it has
// the compilation flags
#include "template_config.h"

namespace library {

void HelloWorldFromLibrray() {
    std::cout << __FUNCTION__ << ": Hello World from Library!" << std::endl;
    std::cout << __FUNCTION__ << ": Version " << TEMPLATE_VERSION_MAJOR << "."
              << TEMPLATE_VERSION_MINOR << "." << TEMPLATE_VERSION_PATCH
              << "." << TEMPLATE_VERSION_TWEAK << std::endl;
}

} // namespace library