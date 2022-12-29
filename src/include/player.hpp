#pragma once

namespace chessAI
{
    enum Player : int
    {
        NoPlayer = -1,
        White = 0,
        Black,
        PlayerLimit,
    };

    inline Player operator!(Player p) { return ((p == White) || (p == Black)) ? Player(1 - int(p)) : p; }
    inline Player &operator++(Player &p) { return (p = !p); }
}