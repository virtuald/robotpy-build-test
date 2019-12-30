
#pragma once
#include "child.h"

namespace tst {

struct GrandChild final : Child {
    std::string baseAndGrandchild() override {
        return "grandchild";
    }
};

}
