#include "testPair.hpp"
#include "manual.hpp"

int main() {
    using namespace TelCoColorCoder;

    testNumberToPair(4, MajorColor::WHITE, MinorColor::BROWN);
    testNumberToPair(5, MajorColor::WHITE, MinorColor::SLATE);

    testPairToNumber(MajorColor::BLACK, MinorColor::ORANGE, 12);
    testPairToNumber(MajorColor::VIOLET, MinorColor::SLATE, 25);

    PrintReferenceManual();
    return 0;
}
