#pragma once

#include "bitboard.hpp"
#include "square.hpp"
#include "player.hpp"

namespace chessAI
{
    class ChessBoard
    {
    private:
        // variables
        Bitboard whitePieces;
        Bitboard blackPieces;
        Bitboard pawns;
        Bitboard knights;
        Bitboard bishops;
        Bitboard rooks;
        Bitboard queens;
        Bitboard kings;

    public:
        ChessBoard();
    };
}