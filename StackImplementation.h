#pragma once

#include <iostream>

// приходится тянуть ValueType во все места,
using ValueType = double;


class IStackImplementation {
public:
    virtual bool isEmpty() const = 0;
    virtual size_t size() const = 0;
    virtual void push(const ValueType& value) = 0;
    virtual void pop() = 0;
    virtual const ValueType& top() const = 0;
    virtual ~IStackImplementation() = default;
};
