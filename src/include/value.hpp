#pragma once

#include "player.hpp"

namespace chessAI
{
    // type and constant

    typedef double Value;

    const Value WHITE_MATEIN = 0x100000;
    const Value BLACK_MATEIN = -WHITE_MATEIN;

    // functions

    Player IsMateIn(Value);
    int MateIn(Value);
    Value ValueMateIn(Player, int);
}