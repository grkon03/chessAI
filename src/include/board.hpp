#pragma once

#include "bitboard.hpp"
#include "square.hpp"
#include "player.hpp"
#include "piece.hpp"

namespace chessAI
{
    constexpr int trackingMax = 200;

    struct ChessMove
    {
        Square from;
        Square to;
        PieceType promotion = PieceTypeLimit;
    };

    class ChessBoard
    {
    private:
        // variables

        // board info

        Bitboard pieceColor[PlayerLimit];
        Bitboard pieceType[PieceTypeLimit];

        // turn info

        int spentTurn;
        Player toPlay;

        // tracking info

        ChessMove tracking[trackingMax];

    public:
        ChessBoard();
    };
}