#ifndef TESTPAIR_HPP
#define TESTPAIR_HPP

#include "colorPair.hpp"

namespace TelCoColorCoder {

    void testNumberToPair(int pairNumber,
                          MajorColor expectedMajor,
                          MinorColor expectedMinor);

    void testPairToNumber(MajorColor major,
                          MinorColor minor,
                          int expectedPairNumber);

}

#endif
