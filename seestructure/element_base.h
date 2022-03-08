// The base for any data element implementation
// Author: Yuting Xie
// 2022.3.8

#ifndef ELEMENT_BASE_H
#define ELEMENT_BASE_H

#include "./object.h"

namespace seetructure {

class ElementBase : protected Object{
public:
    ElementBase();
    ElementBase(const ElementBase&);
    ElementBase(const ElementBase&&);
    virtual ~ElementBase();
    virtual std::string to_string() const override = 0;
    int size() const override; // size of an element could only be one

private:
    
};

}  // seestructure 


#endif