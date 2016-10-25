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

const bool moreThanForty(int s1, int s2) {
    return s1 >= 4 || s2 >= 4;
}

const std::string announceMoreThanForty(std::string player, int diff) {
    if (diff == 1) {
        return "Advantage " + player;
    } else {
        return "Win for " + player;
    }
}

const std::string announceRegularScore(int s1, int s2) {
    return namedScore(s1) + "-" + namedScore(s2);
}

const std::string announceTiedScore(int score) {
    switch (score)
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

const std::string tennis_score(int p1Score, int p2Score) {
    if (scoreIsTied(p1Score, p2Score)) {
        return announceTiedScore(p1Score);
    }
    if (moreThanForty(p1Score, p2Score)) {
        if (p1Score > p2Score) {
            return announceMoreThanForty("player1", p1Score - p2Score);
        }
        return announceMoreThanForty("player2", p2Score - p1Score);

    }
    return announceRegularScore(p1Score, p2Score);
}


