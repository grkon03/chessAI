#pragma once

namespace chessAI
{
    enum PieceType : int
    {
        Pawn,
        Knight,
        Bishop,
        Rook,
        Queen,
        King,
        PieceTypeLimit,
    };

    enum Piece : int
    {
        WPawn,
        BPawn,
        WKnight,
        BKnight,
        WBishop,
        BBishop,
        WRook,
        BRook,
        WQueen,
        BQueen,
        WKing,
        BKing,
        PieceLimit,
    };
}