#include "manual.hpp"
#include "colorPair.hpp"
#include <iostream>

namespace TelCoColorCoder {

    void PrintReferenceManual() {
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
