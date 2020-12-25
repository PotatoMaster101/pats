#include <iostream>
#include <memory>
#include "adapter.hpp"

int main(int argc, const char *argv[]) {
    auto legacy = std::make_unique<legacy_rect>(1, 2, 3, 4);    // x1 x2 y1 y2
    auto modern = std::make_unique<rect_adapter>(1, 2, 3, 4);   // x  y  w  h
    legacy->legacy_print();     // prints 1 3 2 4
    modern->print();            // prints 1 4 2 6
    return 0;
}
