/*******************************************************************************
**     FileName: Vec.hpp
**    ClassName: Vec
**       Author: Geocat & LittleBottle
**  Create Time: 2022/11/14 16:49
**  Description: 
*******************************************************************************/

#ifndef VEC_H
#define VEC_H

namespace gis3d
{
    template <typename T, typename N>
    class Vec
    {
    public:
        explicit constexpr Vec();
        ~Vec();

        constexpr Vec(const Vec<T, N>& other);
        constexpr Vec& operator=(const Vec<T, N>& other);
        T &operator[](int index);
        bool operator==()(const Vec<T, N> &other);
        // +\-\*\/
        static Vec &operator+(const Vec<T, N> &left, const Vec<T, N> &right);
        static Vec &operator+(const Vec<T, N> &left, const Vec<T, N> &right);

        static Vec &operator-(const Vec<T, N> &left, const Vec<T, N> &right);
        static Vec &operator-(const Vec<T, N> &left, const Vec<T, N> &right);

        static Vec &operator*(const Vec<T, N> &left, const Vec<T, N> &right);
        static Vec &operator*(const Vec<T, N> &left, const Vec<T, N> &right);
        
        static Vec &operator/(const Vec<T, N> &left, T constRight);

        static bool operator<(const Vec<T, N> &left, const Vec<T, N> &right);
        static bool operator>(const Vec<T, N> &left, const Vec<T, N> &right);

    protected:
        T m_data[N];
    }; // class Vec

    template <typename T>
    using Vec2 = Vec<T, 2>;

    using vec2i = Vec2<int>;
    using vec2ui = Vec2<unsigned int>;
    using vec2f = Vec2<float>;
    using vec2d = Vec2<double>;

    template <typename T>
    using Vec3 = Vec<T, 3>;

    using vec3i = Vec3<int>;
    using vec3ui = Vec3<unsigned int>;
    using vec3f = Vec3<float>;
    using vec3d = Vec3<double>;

    template <typename T>
    using Vec4 = Vec<T, 4>;

    using vec4i = Vec4<int>;
    using vec4ui = Vec4<unsigned int>;
    using vec4f = Vec4<float>;
    using vec4d = Vec4<double>;

} // namespace gis3d

#include <Operations.tpp>
#endif // VEC_H