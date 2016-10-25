#include <string>

const bool somebodyMoreThanForty(int score1, int score2) {
  return score1 >= 4 || score2 >= 4;
}

const bool tied(int score1, int score2) {
  return score1 == score2;
}

const bool deuce(int score1, int score2) {
  return tied(score1, score2) && score1 >= 3;
}

const bool oneOff(int score1, int score2) {
  return (score1 - score2) * (score1 - score2) == 1;
}

const std::string tennis_score(int p1, int p2) {
  if (deuce(p1, p2)) {
    return "Deuce";
  }
  if (somebodyMoreThanForty(p1, p2)) {
    std::string player = p1 > p2 ? "player1" : "player2";
    return oneOff(p1, p2) ? "Advantage " + player : "Win for " + player;
  }
  std::string p[4] = {"Love", "Fifteen", "Thirty", "Forty"};
  return (tied(p1, p2)) ? p[p1] + "-All" : p[p1] + "-" + p[p2];

}