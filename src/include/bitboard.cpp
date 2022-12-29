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

            fWhitePiecesBB = RankBB[Rank1] | RankBB[Rank2];
            fBlackPiecesBB = RankBB[Rank7] | RankBB[Rank8];
            fPawnsBB = RankBB[Rank2] | RankBB[Rank7];
            fKnightsBB = UnitBB[SQb1] | UnitBB[SQg1] | UnitBB[SQb8] | UnitBB[SQg8];
            fBishopsBB = UnitBB[SQc1] | UnitBB[SQf1] | UnitBB[SQc8] | UnitBB[SQf8];
            fRooksBB = UnitBB[SQa1] | UnitBB[SQh1] | UnitBB[SQa8] | UnitBB[SQh8];
            fQueensBB = UnitBB[SQd1] | UnitBB[SQd8];
            fKingsBB = UnitBB[SQe1] | UnitBB[SQe8];
        }
    }
}