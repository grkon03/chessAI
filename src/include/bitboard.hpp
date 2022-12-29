#pragma once

#include <iostream>
#include "piece.hpp"
#include "player.hpp"
#include "square.hpp"

namespace chessAI
{
    typedef uint64_t Bitboard;

    namespace BitboardC
    {
        constexpr int sizeOfBB = sizeof(Bitboard) * 8; // bitboard size
        Bitboard FullBB;                               // full "1" bit;
        Bitboard UnitBB[SquareLimit];                  // corresponding to a square
        Bitboard FileBB[FileLimit];                    // corresponding to a file
        Bitboard RankBB[RankLimit];                    // corresponding to a rank
        Bitboard fPieceColorBB[PlayerLimit];           // corresponding to piece colors of initial position
        Bitboard fPieceTypeBB[PieceTypeLimit];         // corresponding to piece types of initial position

        void Init();
    }
}