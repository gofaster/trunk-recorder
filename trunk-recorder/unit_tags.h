#ifndef UNIT_TAGS_H
#define UNIT_TAGS_H

#include "unit_tag.h"

#include <string>
#include <vector>

class UnitTags {
    std::vector<UnitTag*> unit_tags;

public:
    UnitTags();
    void load_unit_tags(std::string filename);
    UnitTag* find_unit_tag(long unitID);
    void add(long num, std::string tag);
};
#endif // UNIT_TAGS_H
