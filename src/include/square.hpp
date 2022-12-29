#pragma once

#include <stdexcept>

namespace chessAI
{
    /*
        Square = Rank * 8 + File
    */
    enum Square : int
    {
        SQa1,
        SQb1,
        SQc1,
        SQd1,
        SQe1,
        SQf1,
        SQg1,
        SQh1,
        SQa2,
        SQb2,
        SQc2,
        SQd2,
        SQe2,
        SQf2,
        SQg2,
        SQh2,
        SQa3,
        SQb3,
        SQc3,
        SQd3,
        SQe3,
        SQf3,
        SQg3,
        SQh3,
        SQa4,
        SQb4,
        SQc4,
        SQd4,
        SQe4,
        SQf4,
        SQg4,
        SQh4,
        SQa5,
        SQb5,
        SQc5,
        SQd5,
        SQe5,
        SQf5,
        SQg5,
        SQh5,
        SQa6,
        SQb6,
        SQc6,
        SQd6,
        SQe6,
        SQf6,
        SQg6,
        SQh6,
        SQa7,
        SQb7,
        SQc7,
        SQd7,
        SQe7,
        SQf7,
        SQg7,
        SQh7,
        SQa8,
        SQb8,
        SQc8,
        SQd8,
        SQe8,
        SQf8,
        SQg8,
        SQh8,
        SquareLimit,
    };

    enum File : int
    {
        aFile,
        bFile,
        cFile,
        dFile,
        eFile,
        fFile,
        gFile,
        hFile,
        FileLimit,
    };

    enum Rank : int
    {
        Rank1,
        Rank2,
        Rank3,
        Rank4,
        Rank5,
        Rank6,
        Rank7,
        Rank8,
        RankLimit,
    };

    // conversions

    Square operator&(File f, Rank r) { return (f == FileLimit || r == RankLimit) ? SquareLimit : Square(r * 8 + f); }

    namespace SquareF
    {
        // operations

        template <typename Type>
        Type enum_cast(Square sq) { throw std::bad_cast; }

        template <>
        File enum_cast<File>(Square sq) { return (sq == SquareLimit) ? FileLimit : File(sq % 8); }

        template <>
        Rank enum_cast<Rank>(Square sq) { return (sq == SquareLimit) ? RankLimit : Rank(sq / 8); }

    }
}