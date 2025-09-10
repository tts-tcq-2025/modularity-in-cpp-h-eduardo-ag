#ifndef TESTPAIR_HPP
#define TESTPAIR_HPP

#include "colorPair.hpp"


void testNumberToPair(int pairNumber,
                    TelCoColorCoder::MajorColor expectedMajor,
                    TelCoColorCoder::MinorColor expectedMinor);

void testPairToNumber(
                    TelCoColorCoder::MajorColor major,
                    TelCoColorCoder::MinorColor minor,
                    int expectedPairNumber);


#endif // TESTPAIR_HPP