/*******************************************************************************
**     FileName: ShpIO.h
**    ClassName: ShpIO
**       Author: Geocat & LittleBottle
**  Create Time: 2022/11/14 17:52
**  Description: 
*******************************************************************************/

#ifndef SHPIO_H
#define SHPIO_H

#include <BasicIO.h>

namespace gis3d
{
    class ShpIO: public BasicIO
    {
    public:
        ShpIO();
        virtual ~ShpIO();

    protected:
    }; // class ShpIO
} // namespace gis3d
#endif // SHPIO_H