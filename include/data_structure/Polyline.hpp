/*******************************************************************************
**     FileName: Polyline.hpp
**    ClassName: Polyline
**       Author: Geocat & LittleBottle
**  Create Time: 2022/11/14 17:00
**  Description: 
*******************************************************************************/

#ifndef POLYLINE_H
#define POLYLINE_H

#include <Vec.hpp>

namespace gis3d
{
    template<typename T, typename D, int N = 0>
    class Polyline
    {
    public:
        Polyline();
        Polyline(int n, Vec<T, N>... points);
        ~Polyline();

        Vec<T, N> &operator[](int idx);
        Vec<T, N> &operator[](int idx) const;

        using iterator = std::vector<Vec<T, N>>::iterator;

        iterator begin();
        iterator end();

        bool isPolygon() const { return m_vPoints.front() == m_vPoints.back(); }

        /**
         * @brief 判断是否包含给定的顶点。
         * 
         * @param point 
         * @return true 
         * @return false 
         */
        bool contain(const Vec<T, N> &point);

        static bool contain(const Polyline<T, N>& left, const Polyline<T, N>& right);

    protected:
        std::vector<Vec<T, N>> m_vPoints;
        bool m_bIsPolygon;
    };

    template<typename T>
    using Polyline2 = Polyline<T, 2>;

    using Polyline2i = Polyline2<int>;
    using Polyline2ui = Polyline2<unsigned int>;
    using Polyline2f = Polyline2<float>;
    using Polyline2d = Polyline2<double>;

    template <typename T>
    using Polyline3 = Polyline<T, 3>;

    using Polyline3i = Polyline3<int>;
    using Polyline3ui = Polyline3<unsigned int>;
    using Polyline3f = Polyline3<float>;
    using Polyline3d = Polyline3<double>;
} // namespace gis3d

#include <Operations.tpp>
#endif // POLYLINE_H