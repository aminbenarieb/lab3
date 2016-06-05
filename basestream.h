#ifndef BASESTREAM_H
#define BASESTREAM_H

#import "baseobject.h"
#include "abstractfactory.h"

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


class BaseStream
{
protected:
    AbstractFactory *factory;

public:
    virtual ~BaseStream() {}
    virtual BaseObject* loadModel(const StreamInfo) = 0;
};

#endif // BASESTREAM_H