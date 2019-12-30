
#pragma once

#include "base.h"

namespace tst {

struct Child : Base {
    std::string baseAndChild() final {
        return "child::baseAndChild";
    }
};

}
