#include "../src/lib/include/Sample.h"
#include "Base.hh"

void runTest()
{
    Sample s;
    
    PANN_ASSERT_EQUAL(s.testFunction(),114);

}

int main()
{
    runTest();
}