#include <boost/test/included/unit_test.hpp>
#include <sstream> 
#include "printAuthorName.h"

BOOST_AUTO_TEST_CASE(Test_printAuthorName)
{
    std::ostringstream output;
    hrushchev::printAuthorName(output);
    BOOST_CHECK_EQUAL(output.str(), "hrushchev.nikita");
}
