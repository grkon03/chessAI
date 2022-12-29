#include "board.hpp"

namespace chessAI
{
    // ChessBoard

    ChessBoard::ChessBoard()
    {
        whitePieces = BitboardC::fWhitePiecesBB;
        blackPieces = BitboardC::fBlackPiecesBB;
        pawns = BitboardC::fPawnsBB;
        knights = BitboardC::fKnightsBB;
        bishops = BitboardC::fBishopsBB;
        rooks = BitboardC::fRooksBB;
        queens = BitboardC::fQueensBB;
        kings = BitboardC::fKingsBB;
    }
}