add_executable(cache_test CacheTest.cpp)
target_link_libraries(cache_test CONAN_PKG::catch2)
target_include_directories(cache_test PRIVATE ${CMAKE_SOURCE_DIR}/lib)

add_test(NAME cache_test
         COMMAND cache_test -r junit)
