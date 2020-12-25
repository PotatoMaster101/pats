#include <iostream>
#include "factory.hpp"

int main(int argc, const char *argv[]) {
    auto work = [](int n) {
        auto obj = base_factory(n);
        if (obj)
            obj->foo();
    };

    work(1);    // prints sub1:foo
    work(2);    // prints sub2:foo
    work(3);    // prints sub3:foo
    work(4);    // prints sub4:foo
    work(5);    // prints sub5:foo
    work(6);    // prints sub6:foo
    return 0;
}
