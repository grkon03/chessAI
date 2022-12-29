#pragma once

#include <iostream>
#include "square.hpp"

namespace chessAI
{
    typedef uint64_t Bitboard;

    namespace BitboardC
    {
        constexpr int sizeOfBB = sizeof(Bitboard) * 8; // bitboard size
        Bitboard FullBB;                               // full "1" bit;
        Bitboard UnitBB[SquareLimit];                  // bitboard corresponding to a square
        Bitboard FileBB[FileLimit];
        Bitboard RankBB[RankLimit];
        Bitboard fWhitePiecesBB;
        Bitboard fBlackPiecesBB;
        Bitboard fPawnsBB;
        Bitboard fKnightsBB;
        Bitboard fBishopsBB;
        Bitboard fRooksBB;
        Bitboard fQueensBB;
        Bitboard fKingsBB;

        void Init();
    }
}