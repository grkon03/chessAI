#pragma once

#include "player.hpp"

namespace chessAI
{
    // type and constant

    typedef double Value;

    namespace ValueC
    {
        const Value WHITE_MATEIN = 0x100000;
        const Value BLACK_MATEIN = -WHITE_MATEIN;
    }

    // functions

    namespace ValueF
    {
        Player IsMateIn(Value);
        int HowMateIn(Value);
        Value ValueMateIn(Player, int);
    }
}