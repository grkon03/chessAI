#include "value.hpp"

namespace chessAI
{
    namespace ValueF
    {
        using namespace ValueC;

        Player IsMateIn(Value v)
        {
            if (v > WHITE_MATEIN)
                return White;
            else if (v < BLACK_MATEIN)
                return Black;
            else
                return NoPlayer;
        }

        int HowMateIn(Value v)
        {
            switch (IsMateIn(v))
            {
            case White:
                return (v - WHITE_MATEIN);
            case Black:
                return (BLACK_MATEIN - v);
            default:
                return 0;
            }
        }

        Value ValueMateIn(Player player, int mateIn)
        {
            switch (player)
            {
            case White:
                return (WHITE_MATEIN + mateIn);
            case Black:
                return (BLACK_MATEIN - mateIn);
            default:
                return 0;
            }
        }
    }
}