#ifndef ALEPH_TESTS_BASE_HH__
#define ALEPH_TESTS_BASE_HH__

#cmakedefine CMAKE_SOURCE_DIR         "@CMAKE_SOURCE_DIR@"
#cmakedefine CMAKE_CURRENT_BINARY_DIR "@CMAKE_CURRENT_BINARY_DIR@"
#cmakedefine CMAKE_PROJECT_BINARY_DIR "@CMAKE_PROJECT_BINARY_DIR@"

#cmakedefine CMAKE_MAJOR_VERSION      "@CMAKE_MAJOR_VERSION@"
#cmakedefine CMAKE_MINOR_VERSION      "@CMAKE_MINOR_VERSION@"
#cmakedefine CMAKE_PATCH_VERSION      "@CMAKE_PATCH_VERSION@"

#include <iostream>
#include <stdexcept>
#include <string>

namespace PANN
{

#define PANN_ASSERT_EQUAL( x, y )                                  \
{                                                                   \
  if( ( x ) != ( y ) )                                              \
  {                                                                 \
    throw std::runtime_error(   std::string( __FILE__ )             \
                              + std::string( ":" )                  \
                              + std::to_string( __LINE__ )          \
                              + std::string( " in " )               \
                              + std::string( __PRETTY_FUNCTION__ )  \
                              + std::string( ": " )                 \
                              + std::to_string( ( x ) )             \
                              + std::string( " != " )               \
                              + std::to_string( ( y ) )             \
    );                                                              \
  }                                                                 \
}


#define PANN_ASSERT_THROW( condition )                             \
{                                                                   \
  if( !( condition ) )                                              \
  {                                                                 \
    throw std::runtime_error(   std::string( __FILE__ )             \
                              + std::string( ":" )                  \
                              + std::to_string( __LINE__ )          \
                              + std::string( " in " )               \
                              + std::string( __PRETTY_FUNCTION__ )  \
    );                                                              \
  }                                                                 \
}

#define PANN_EXPECT_EXCEPTION( expression, exception )             \
{                                                                   \
  try                                                               \
  {                                                                 \
    ( expression );                                                 \
  }                                                                 \
  catch( exception& e )                                             \
  {                                                                 \
  }                                                                 \
  catch( ... )                                                      \
  {                                                                 \
    throw std::runtime_error(   std::string( __FILE__ )             \
                              + std::string( ":" )                  \
                              + std::to_string( __LINE__ )          \
                              + std::string( " in " )               \
                              + std::string( __PRETTY_FUNCTION__ )  \
    );                                                              \
  }                                                                 \
}

#define PANN_TEST_BEGIN( name )\
{\
  std::cerr << "-- Running test \"" << name << "\"...";\
}

#define PANN_TEST_END() \
{\
  std::cerr << "finished\n";\
}


}

#endif