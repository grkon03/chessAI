#include "square.hpp"

namespace chessAI
{
    namespace SquareF
    {
        template <>
        File enum_cast<File>(Square sq) { return (sq == SquareLimit) ? FileLimit : File(sq % 8); }

        template <>
        Rank enum_cast<Rank>(Square sq) { return (sq == SquareLimit) ? RankLimit : Rank(sq / 8); }
    }
}