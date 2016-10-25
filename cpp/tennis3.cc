#include <string>

const bool nobodyMoreThanForty(int score1, int score2) {
  return score1 < 4 && score2 < 4;
}

const bool notDeuce(int score1, int score2) {
  return score1 + score2 < 6;
}

const bool tied(int score1, int score2) {
  return score1 == score2;
}

const bool oneOff(int score1, int score2) {
  return (score1 - score2) * (score1 - score2) == 1;
}

const std::string tennis_score(int p1, int p2) {
  if (nobodyMoreThanForty(p1, p2) && notDeuce(p1, p2)) {
    std::string p[4] = {"Love", "Fifteen", "Thirty", "Forty"};
    return (tied(p1, p2)) ? p[p1] + "-All" : p[p1] + "-" + p[p2];
  }
  if (tied(p1, p2))
    return "Deuce";
  std::string player = p1 > p2 ? "player1" : "player2";
  return oneOff(p1, p2) ? "Advantage " + player : "Win for " + player;
}