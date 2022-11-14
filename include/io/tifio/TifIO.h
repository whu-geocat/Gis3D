/*******************************************************************************
**     FileName: TifIO.h
**    ClassName: TifIO
**       Author: Geocat & LittleBottle
**  Create Time: 2022/11/14 17:53
**  Description: 
*******************************************************************************/

#ifndef TIFIO_H
#define TIFIO_H

#include <BasicIO.h>

namespace gis3d
{
    class TifIO: public BasicIO
    {
    public:
        TifIO();
        virtual ~TifIO();

    protected:
    }; // class TifIO
} // namespace gis3d
#endif // TIFIO_H