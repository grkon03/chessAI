#include "board.hpp"

namespace chessAI
{
    // ChessBoard

    ChessBoard::ChessBoard()
    {
        int i;

        // board info

        for (i = 0; i < PlayerLimit; i++)
        {
            pieceColor[i] = BitboardC::fPieceColorBB[i];
        }
        for (i = 0; i < PieceTypeLimit; i++)
        {
            pieceType[i] = BitboardC::fPieceTypeBB[i];
        }

        // turn info

        spentTurn = 0;
        toPlay = White;

        // tracking info

        for (i = 0; i < trackingMax; i++)
        {
            tracking[i] = ChessMove{SquareLimit, SquareLimit, PieceTypeLimit};
        }
    }
}