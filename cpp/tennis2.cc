#include <string>

std::string regularScore(int score) {
  if (score == 0)
    return "Love";
  if (score == 1)
    return "Fifteen";
  if (score == 2)
    return "Thirty";
  if (score == 3)
    return "Forty";
  return "Error!";
}

const std::string tennis_score(int p1Score, int p2Score) {
  if (p1Score == p2Score) {
    if (p1Score <= 2) {
      return regularScore(p1Score) + "-All";
    }
    return "Deuce";
  }

  if (p1Score >= 4 || p2Score >= 4) {
    if (p1Score - p2Score >= 2) {
      return "Win for player1";
    }
    if (p2Score - p1Score >= 2) {
      return "Win for player2";
    }

    if (p1Score > p2Score) {
      return "Advantage player1";
    }

    if (p2Score > p1Score) {
      return "Advantage player2";
    }
  }

  std::string P1res = regularScore(p1Score);
  std::string P2res = regularScore(p2Score);
  return P1res + "-" + P2res;

}
