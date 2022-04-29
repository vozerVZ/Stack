#ifndef VECTORSTACK_H
#define VECTORSTACK_H

#include "StackImplementation.h"
#include "Vector.h"

using ValueType = double;
using namespace std;


class VectorStack : public IStackImplementation {
public:
    VectorStack() = default;
    bool isEmpty() const override;
    size_t size() const override;
    void push(const ValueType& value) override;
    void pop() override;
    const ValueType& top() const override;
private:
     Vector _vector;
};


#endif
