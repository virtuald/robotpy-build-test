
#pragma once

#include <memory>
#include "other.h"

namespace tst {

struct Base {
    virtual ~Base() {}

    /**
     * This comment spans 
     * many lines
     *
     * @returns An awesome string
     */
    virtual std::string baseOnly() {
        return "base::baseOnly";
    }

    virtual std::string baseAndGrandchild() {
        return "base::baseAndGrandchild";
    }

    virtual std::string baseAndChild() {
        return "base::baseAndChild";
    }

    // this case is tricky because Other is in a template (so, not parsed
    // by CppHeaderParser) so we have to know the correct namespace
    virtual std::shared_ptr<Other> getOther() {
        return std::make_shared<Other>();
    }

    void overloaded(int i) {}
    void overloaded(const char * i) {}

    static void overloaded_static(int i) {}
    static void overloaded_static(const char * i) {}
};

}
