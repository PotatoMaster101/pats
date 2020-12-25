////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Factory pattern.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef FACTORY_HPP
#define FACTORY_HPP
#include <iostream>
#include <memory>

// Base class.
struct base {
    virtual void foo() const { std::cout << "base::foo\n"; }
};

// Sub classes.
struct sub1 : public base {
    void foo() const override { std::cout << "sub1::foo\n"; }
};

struct sub2 : public base {
    void foo() const override { std::cout << "sub2::foo\n"; }
};

struct sub3 : public base {
    void foo() const override { std::cout << "sub3::foo\n"; }
};

struct sub4 : public base {
    void foo() const override { std::cout << "sub4::foo\n"; }
};

struct sub5 : public base {
    void foo() const override { std::cout << "sub5::foo\n"; }
};

struct sub6 : public base {
    void foo() const override { std::cout << "sub6::foo\n"; }
};

// Factory function. Creates different types of `base` based on `n`.
std::unique_ptr<base> base_factory(int n) {
    switch (n) {
        case 1:
            return std::make_unique<sub1>();
        case 2:
            return std::make_unique<sub2>();
        case 3:
            return std::make_unique<sub3>();
        case 4:
            return std::make_unique<sub4>();
        case 5:
            return std::make_unique<sub5>();
        case 6:
            return std::make_unique<sub6>();
    }
    return {};
}

#endif    // FACTORY_HPP
