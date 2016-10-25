var TennisGame1 = function(player1Name, player2Name) {
    this.player1Score = 0;
    this.player2Score = 0;
    this.player1Name = player1Name;
    this.player2Name = player2Name;
};

TennisGame1.prototype.wonPoint = function(playerName) {
    if (playerName === "player1")
        this.player1Score += 1;
    else
        this.player2Score += 1;
};

TennisGame1.prototype.calculateScore = function(scoreDifferenceOneOverTwo) {
    if (scoreDifferenceOneOverTwo === 1) return "Advantage player1";
    else if (scoreDifferenceOneOverTwo === -1) return "Advantage player2";
    else if (scoreDifferenceOneOverTwo >= 2) return "Win for player1";
    else return "Win for player2";
}

TennisGame1.prototype.isTie = function() {
    return this.player1Score === this.player2Score;
}
TennisGame1.prototype.getScore = function() {
    const scores = ["Love", "Fifteen", "Thirty", "Forty"];
    if (this.isTie()) {
        if (this.player1Score >= 3) {
            return "Deuce";
        }
        return scores[this.player1Score] + "-All";
    } else if (this.player1Score >= 4 || this.player2Score >= 4) {
        var scoreDifferenceOneOverTwo = this.player1Score - this.player2Score;
        return this.calculateScore(scoreDifferenceOneOverTwo);
    } else {
        return scores[this.player1Score] + '-' + scores[this.player2Score];
    }
};

if (typeof window === "undefined") {
    module.exports = TennisGame1;
}