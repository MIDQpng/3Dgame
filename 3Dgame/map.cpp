#include <cassert>
#include "map.h"

static const char map[] = "0000222223220000"\
                        "1              3"\
                        "1           2222"\
                        "1              2"\
                        "0333  3        2"\
                        "0  11 1     3 32"\
                        "0     1222333 32"\
                        "0       2      2"\
                        "2       2      2"\
                        "2              3"\
                        "0  22222       2"\
                        "2      2222    2"\
                        "0  2           2"\
                        "0  2         223"\
                        "0  2           3"\
                        "0002222233333333";

Map::Map() : w(16), h(16) {
    assert(sizeof(map) == w * h + 1);
}

int Map::get(const size_t i, const size_t j) const {
    assert(i < w&& j < h && sizeof(map) == w * h + 1);
    return map[i + j * w] - '0';
}

bool Map::is_empty(const size_t i, const size_t j) const {
    assert(i < w&& j < h && sizeof(map) == w * h + 1);
    return map[i + j * w] == ' ';
}