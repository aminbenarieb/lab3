#ifndef BASESTREAM_H
#define BASESTREAM_H

#import "baseobject.h"
#include "abstractfactory.h"

#include "qdebug.h"

enum SourceType
{
    SOURCE_UNDEFINED,
    SOURCE_FILE
};
struct StreamInfo
{
    SourceType sourceType;
    const char *sourceName;
};

class EmptyStreamSourceException : public BaseException
{
public:
    virtual const char* what()
    {
        return "Source stream is not set!";
    }
};


class BaseStreamImp
{
public:
    virtual ~BaseStreamImp() {}
    virtual BaseObject* loadModel(const char*, BaseModel*) = 0;
    virtual void loadCameraParams(const char*, double &,double &,double &, double &,double &,double &) = 0;
};

class BaseStream
{
protected:
    AbstractFactory *factory;
    BaseStreamImp *imp;

public:
    virtual ~BaseStream() {}
    virtual BaseObject* loadModel(const char*) = 0;
    virtual BaseCamera* loadCamera(const char*) = 0;
};

#endif // BASESTREAM_H
