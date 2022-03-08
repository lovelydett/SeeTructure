// Everything should be an object from the view of a canvas
// Author: Yuting Xie
// 2022.3.8

#ifndef OBJECT_H
#define OBJECT_H

#include <string>

namespace seetructure {

class Object {
public:
    Object();
    Object(const Object&);
    Object(const Object&&);
    virtual ~Object();
    virtual std::string to_string() const = 0;
    virtual int size() const = 0;

protected:
    long long object_id_;
    int size_;
};

}  // seetructure

#endif