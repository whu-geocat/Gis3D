/*******************************************************************************
**     FileName: BasicIO.h
**    ClassName: BasicIO
**       Author: Geocat & LittleBottle
**  Create Time: 2022/11/14 17:29
**  Description: 
*******************************************************************************/

#ifndef BASICIO_H
#define BASICIO_H

namespace gis3d
{
    class BasicIO
    {
    public:
        BasicIO();
        virtual ~BasicIO() = 0;

        virtual bool read() = 0;
        virtual bool write() = 0;

    protected:
    }; // class BasicIO
} // namespace gis3d
#endif // BASICIO_H