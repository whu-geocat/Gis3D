/*******************************************************************************
**     FileName: DrawObject.h
**    ClassName: DrawObject
**       Author: Geocat & LittleBottle
**  Create Time: 2022/11/14 17:38
**  Description: 
*******************************************************************************/

#ifndef DRAWOBJECT_H
#define DRAWOBJECT_H

#include <MetaObject.h>
#include <memory>

namespace gis3d
{
    class DrawConfiguration
    {
    public:
        DrawConfiguration();
        virtual ~DrawConfiguration();
    };

    class DrawObject : public MetaObject
    {
    public:
        DrawObject();
        virtual ~DrawObject() = 0;

        virtual bool init(std::shared_ptr<DrawConfiguration> conf);

        virtual void drawPoint() = 0;
        virtual void drawPoints() = 0;
        virtual void drawLine() = 0;
        virtual void drawLines() = 0;
        virtual void drawTriangle() = 0;
        virtual void drawTriangles() = 0;
        virtual void drawQuad() = 0;
        virtual void drawQuads() = 0;
        virtual void drawPolygon() = 0;
        virtual void drawPolygons() = 0;
        virtual void drawMesh() = 0;

    protected:
        bool m_bInitialized;
    }; // class DrawObject
} // namespace gis3d
#endif // DRAWOBJECT_H