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
        extern Bitboard FullBB;                        // full "1" bit;
        extern Bitboard UnitBB[SquareLimit];           // corresponding to a square
        extern Bitboard FileBB[FileLimit];             // corresponding to a file
        extern Bitboard RankBB[RankLimit];             // corresponding to a rank
        extern Bitboard fPieceColorBB[PlayerLimit];    // corresponding to piece colors of initial position
        extern Bitboard fPieceTypeBB[PieceTypeLimit];  // corresponding to piece types of initial position

        void Init();
    }
}