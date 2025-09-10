#include "colorPair.hpp"

namespace TelCoColorCoder {

    const std::array<const char*, 5> MajorColorNames =
        {"White", "Red", "Black", "Yellow", "Violet"};
    const std::array<const char*, 5> MinorColorNames =
        {"Blue", "Orange", "Green", "Brown", "Slate"};

    const int numberOfMajorColors = MajorColorNames.size();
    const int numberOfMinorColors = MinorColorNames.size();

    ColorPair::ColorPair(MajorColor major, MinorColor minor)
        : majorColor(major), minorColor(minor) {}

    MajorColor ColorPair::getMajor() const { return majorColor; }
    MinorColor ColorPair::getMinor() const { return minorColor; }

    std::string ColorPair::ToString() const {
        return std::string(MajorColorNames[static_cast<int>(majorColor)]) +
               " " + MinorColorNames[static_cast<int>(minorColor)];
    }

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBased = pairNumber - 1;
        return ColorPair(
            static_cast<MajorColor>(zeroBased / numberOfMinorColors),
            static_cast<MinorColor>(zeroBased % numberOfMinorColors)
        );
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return static_cast<int>(major) * numberOfMinorColors +
               static_cast<int>(minor) + 1;
    }

}
