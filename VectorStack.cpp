#include "VectorStack.h"


bool VectorStack::isEmpty() const {
    return _vector.size() == 0;
}

size_t VectorStack::size() const {
    return _vector.size();
}

void VectorStack::push(const ValueType &value) {
    _vector.pushBack(value);
}

void VectorStack::pop() {
    _vector.popBack();
}

const ValueType &VectorStack::top() const {
    if (size() == 0) {
        throw out_of_range("Empty.");
    }
    return _vector[size() - 1];
}
