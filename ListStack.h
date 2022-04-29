#ifndef LISTSTACK_H
#define LISTSTACK_H

#include "StackImplementation.h"

#include <list>

using ValueType = double;
using namespace std;


class ListStack : public IStackImplementation {
public:
    ListStack() = default;
    bool isEmpty() const override;
    size_t size() const override;
    void push(const ValueType& value) override;
    void pop() override;
    const ValueType& top() const override;
private:
    list <ValueType> _list;
};


#endif