boost
===================
Standalone port of boost c++ library (v1.44 + tiny update from v1.46).
Adaptation for old compilers with c++03 supported only.

Description
---------------------
Included libraries: boost.exeption, boost.smart_ptr.

# Build options

```
mkdir boost_source-build
cd boost_source-build
cmake -DCMAKE_BUILD_TYPE=Debug ../boost_source
cmake --build .
```
