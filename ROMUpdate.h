#ifndef __ROMUPDATE_H__
#define __ROMUPDATE_H__

#include "Locations.h"
#include "Lairs.h"
#include "ItemPool.h"
#include "TextUpdate.h"

#include <fstream>
#include <vector>

#define CHEST_DATA_ADDRESS        0xAADE

namespace ROMUpdate {
    void ROMUpdateTextAndItems(const LairList& randomizedLairs,
                               std::fstream &ROMFile,
                               const std::string& seed);
    void ROMUpdateLairs(const LairList& randomizedLairs,
                        std::fstream &ROMFile);
    void ROMUpdateMapSprites(Lair sprites[], std::fstream &ROMFile);
}

#endif // __ROMUPDATE_H__
