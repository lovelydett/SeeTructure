// The base for any canvas implementation
// Author: Yuting Xie
// 2022.3.8

#ifndef CANVAS_BASE_H
#define CANVAS_BASE_H

#include "../object.h"

namespace seetructure{
namespace canvas { 

class CanvasBase {
public:
    virtual bool Display(const seetructure::Object*) = 0;
};

}  // canvas
}  // seetructure

#endif