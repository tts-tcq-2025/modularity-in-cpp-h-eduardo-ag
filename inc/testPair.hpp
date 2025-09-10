#ifndef TESTPAIR_HPP
#define TESTPAIR_HPP

#include "colorPair.hpp"
#include <assert.h>


inline void testNumberToPair(int pairNumber,
                             TelCoColorCoder::MajorColor expectedMajor,
                             TelCoColorCoder::MinorColor expectedMinor) {
    using namespace TelCoColorCoder;
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

inline void testPairToNumber(TelCoColorCoder::MajorColor major,
                             TelCoColorCoder::MinorColor minor,
                             int expectedPairNumber) {
    using namespace TelCoColorCoder;
    int pairNumber = GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

#endif // TESTPAIR_HPP