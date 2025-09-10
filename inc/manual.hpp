#ifndef MANUAL_HPP
#define MANUAL_HPP

#include <iostream>
#include "colorPair.hpp"

namespace TelCoColorCoder {
    inline void PrintReferenceManual() {
        std::cout << "----- Color Code Reference Manual -----\n";
        for (int major = 0; major < numberOfMajorColors; ++major) {
            for (int minor = 0; minor < numberOfMinorColors; ++minor) {
                int pairNumber = GetPairNumberFromColor(
                    static_cast<MajorColor>(major),
                    static_cast<MinorColor>(minor));
                ColorPair pair(static_cast<MajorColor>(major),
                               static_cast<MinorColor>(minor));
                std::cout << pairNumber << " : " << pair.ToString() << "\n";
            }
        }
        std::cout << "---------------------------------------\n";
    }
}
#endif