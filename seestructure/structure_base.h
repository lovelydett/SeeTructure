// The base for any data structure implementation
// Author: Yuting Xie
// 2022.3.8

#ifndef STRCTURE_BASE_H
#define STRCTURE_BASE_H

#include "./element_base.h"
#include "./object.h"

namespace seetructure{

class StructureBase : protected Object {
public:
    StructureBase();
    StructureBase(const StructureBase&);
    StructureBase(const StructureBase&&);
    virtual ~StructureBase();
    virtual std::string to_string() const override = 0;
    virtual int size() const override = 0;

private:
    virtual bool Add(const ElementBase*) = 0;
    virtual bool Remove(const ElementBase*) = 0;
};

}  // seetructure

#endif