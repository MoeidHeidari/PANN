#ifndef ALEPH_TESTS_BASE_HH__
#define ALEPH_TESTS_BASE_HH__

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