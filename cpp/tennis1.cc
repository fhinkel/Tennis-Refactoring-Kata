#include <string>

const bool scoreIsTied(int s1, int s2) {
    return s1 == s2;
}

const std::string namedScore(int score) {
    switch(score)
    {
        case 0:
            return "Love";
        case 1:
            return "Fifteen";
        case 2:
            return "Thirty";
        case 3:
            return"Forty";
        default:
            return "Error!";
    }
}

const bool moreThanForty()

const std::string tennis_score(int p1Score, int p2Score) {
    if (scoreIsTied(p1Score, p2Score))
    {
        switch (p1Score)
        {
            case 0:
                return "Love-All";
            case 1:
                return "Fifteen-All";
            case 2:
                return "Thirty-All";
            default:
                return "Deuce";

        }
    }
    else if (p1Score>=4 || p2Score>=4)
    {
        int minusResult = p1Score-p2Score;
        if (minusResult==1) return "Advantage player1";
        else if (minusResult ==-1) return "Advantage player2";
        else if (minusResult>=2) return "Win for player1";
        else return "Win for player2";
    }
    else
    {
        return namedScore(p1Score) + "-" + namedScore(p2Score);
    }
}


