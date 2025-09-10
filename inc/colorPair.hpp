#ifndef COLORPAIR_HPP
#define COLORPAIR_HPP

#include <iostream>

namespace TelCoColorCoder
{
    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    inline constexpr std::array<const char*, 5> MajorColorNames = {
        "White", "Red", "Black", "Yellow", "Violet"};
    inline constexpr std::array<const char*, 5> MinorColorNames = {
        "Blue", "Orange", "Green", "Brown", "Slate"};

    inline constexpr int numberOfMajorColors = MajorColorNames.size();
    inline constexpr int numberOfMinorColors = MinorColorNames.size();

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        ColorPair(MajorColor major, MinorColor minor) :
            majorColor(major), minorColor(minor) {}
        MajorColor getMajor() { return majorColor; }
        MinorColor getMinor() { return minorColor; }
        std::string ToString() const {
            return std::string(MajorColorNames[static_cast<int>(majorColor)]) +
                   " " + MinorColorNames[static_cast<int>(minorColor)];
        }
    };

    inline ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBased = pairNumber - 1;
        return ColorPair(
            static_cast<MajorColor>(zeroBased / numberOfMinorColors),
            static_cast<MinorColor>(zeroBased % numberOfMinorColors));
    }

    inline int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return static_cast<int>(major) * numberOfMinorColors +
               static_cast<int>(minor) + 1;
    }
}

#endif // COLORPAIR_HPP