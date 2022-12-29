#include "bitboard.hpp"

namespace chessAI
{
    namespace BitboardC
    {
        void Init()
        {
            int i, j;

            // FullBB
            FullBB = 0xffffffffffffffffULL;

            // UnitBB
            for (i = 0; i < SquareLimit; ++i)
            {
                UnitBB[i] = 1 << i;
            }

            // FileBB, RankBB
            for (i = aFile; i < FileLimit; ++i)
            {
                for (j = Rank1; j < RankLimit; ++j)
                {
                    FileBB[i] |= UnitBB[File(i) & Rank(j)];
                    RankBB[j] |= UnitBB[File(i) & Rank(j)];
                }
            }

            fPieceColorBB[White] = RankBB[Rank1] | RankBB[Rank2];
            fPieceColorBB[Black] = RankBB[Rank7] | RankBB[Rank8];
            fPieceTypeBB[Pawn] = RankBB[Rank2] | RankBB[Rank7];
            fPieceTypeBB[Knight] = UnitBB[SQb1] | UnitBB[SQg1] | UnitBB[SQb8] | UnitBB[SQg8];
            fPieceTypeBB[Bishop] = UnitBB[SQc1] | UnitBB[SQf1] | UnitBB[SQc8] | UnitBB[SQf8];
            fPieceTypeBB[Rook] = UnitBB[SQa1] | UnitBB[SQh1] | UnitBB[SQa8] | UnitBB[SQh8];
            fPieceTypeBB[Queen] = UnitBB[SQd1] | UnitBB[SQd8];
            fPieceTypeBB[King] = UnitBB[SQe1] | UnitBB[SQe8];
        }
    }
}