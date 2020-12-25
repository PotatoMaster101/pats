////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Adapter pattern.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef ADAPTER_HPP
#define ADAPTER_HPP
#include <iostream>

// Some legacy code, uses 2 pairs of coordinates to define a rectangle.
struct legacy_rect {
    int x1;
    int x2;
    int y1;
    int y2;

    legacy_rect(int x1, int y1, int x2, int y2) :
        x1{x1}, x2{x2}, y1{y1}, y2{y2} {}

    // Legacy print.
    inline void legacy_print() const noexcept
    { std::cout << x1 << " " << x2 << " " << y1 << " " << y2 << "\n"; }
};

// Modern interface.
struct modern_rect {
    // Modern print.
    virtual void print() const noexcept = 0;
};

// Adapter, uses x, y, w, h instead of 2 pairs of coordinates, but still uses legacy code.
struct rect_adapter : public modern_rect, public legacy_rect {
    rect_adapter(int x, int y, int w, int h) :
        legacy_rect(x, y, x + w, y + h) {}

    // Modern print but uses legacy print.
    inline void print() const noexcept override
    { legacy_print(); }
};

#endif    // ADAPTER_HPP
