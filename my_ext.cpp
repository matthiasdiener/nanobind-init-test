#include <nanobind/nanobind.h>
#include <iostream>

struct MyType {
    MyType() {}};

NB_MODULE(my_ext, m) {
    nanobind::class_<MyType>(m, "MyType", nanobind::dynamic_attr())
        .def("__init__",
                [](MyType *t, int bar)
                {
                    std::cout << "C++ __init__ " << bar << std::endl;
                    new (t) MyType();
                });
}
