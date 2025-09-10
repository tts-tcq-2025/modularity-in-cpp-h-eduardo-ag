#ifndef COLORPAIR_HPP
#define COLORPAIR_HPP

#include <iostream>

namespace TelCoColorCoder
{
    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    inline const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet" };
    inline int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

    inline const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate" };
    inline int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;

    public:
        ColorPair(MajorColor major, MinorColor minor) :
            majorColor(major), minorColor(minor) {}

        MajorColor getMajor() { return majorColor; }
        MinorColor getMinor() { return minorColor; }

        std::string ToString() {
            std::string colorPairStr = MajorColorNames[majorColor];
            colorPairStr += " ";
            colorPairStr += MinorColorNames[minorColor];
            return colorPairStr;
        }
    };

    inline ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    inline int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
}

#endif // COLORPAIR_HPP