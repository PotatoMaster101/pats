#include <iostream>
#include "template_method.hpp"

int main(int argc, const char *argv[]) {
    derived algorithm;
    algorithm.step_1();     // prints "step 1 from base"
    algorithm.step_2();     // prints "step 2 from derived"
    algorithm.step_3();     // prints "step 3 from derived"
    algorithm.step_4();     // prints "step 4 from derived (override)"
    algorithm.step_5();     // prints "step 5 from derived"
    return 0;
}
