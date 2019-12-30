
#include <rpygen_wrapper.hpp>

#include <base.h>
tst::Base * convert(tst::Base * b) {
    return b;
}

std::string getBaseOnly(tst::Base * b) {
    return b->baseOnly();
}

PYBIND11_MODULE(module, m) {
    initWrapper(m);

    m.def("convert", &convert, "convert function");
    m.def("getBaseOnly", &getBaseOnly, "getBaseOnly function");
}