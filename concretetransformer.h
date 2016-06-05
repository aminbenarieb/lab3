#ifndef CONCRETETRANSFORMER_H
#define CONCRETETRANSFORMER_H

#include "basetransformer.h"

class ConcreteTransformer : public BaseTransformer
{
public:
    ConcreteTransformer();


    virtual void transformPoint(Point* const p) const;
    virtual void transformParams(double*,double*,double*) const;
};

#endif // CONCRETETRANSFORMER_H