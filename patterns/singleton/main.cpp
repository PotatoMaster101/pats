#include <iostream>
#include <memory>
#include "singleton.hpp"

int main(int argc, const char *argv[]) {
    auto work = [](const singleton& s){ std::cout << "address: " << std::addressof(s) << "\n"; };

    // should all print same address
    work(singleton::instance());
    work(singleton::instance());
    work(singleton::instance());
    work(singleton::instance());
    work(singleton::instance());
    return 0;
}
