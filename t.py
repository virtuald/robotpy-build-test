
from pybind_test import module

class PyGrandChild(module.GrandChild):

    def __init__(self):
        module.GrandChild.__init__(self)
    # def baseAndChild(self):
    #     return "child"
    def baseOnly(self):
        return "pygrandchild"

b = module.Base()
print("b", b.baseAndChild())

c = module.Child()
print("c", c.baseAndChild())

# p = PyBase()
# print(p.fn())

print("c->b", module.convert(c).baseAndChild())
# print(module.convert(p).baseAndChild())

g = PyGrandChild()
print(g)
print(g.baseAndChild())

print(module.convert(g))
print(g.baseAndChild())
print(module.getBaseOnly(g))