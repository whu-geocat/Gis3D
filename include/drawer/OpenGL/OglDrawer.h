/*******************************************************************************
**     FileName: OglDrawer.h
**    ClassName: OglDrawer
**       Author: Geocat & LittleBottle
**  Create Time: 2022/11/14 17:57
**  Description: 
*******************************************************************************/

#ifndef OGLDRAWER_H
#define OGLDRAWER_H

#include <core/DrawObject.h>

namespace gis3d
{
    class OglDrawer: public DrawObject
    {
    public:
        OglDrawer();
        virtual ~OglDrawer();

    protected:
    }; // class OglDrawer
} // namespace gis3d
#endif // OGLDRAWER_H