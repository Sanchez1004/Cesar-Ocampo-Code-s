package hangmang;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Date;
import java.util.HashSet;
import java.util.List;
import java.util.Random;
import java.util.Set;
import java.util.logging.Level;
import java.util.logging.Logger;

public class HangmanModel {
    private String secretWord;
    private StringBuilder guessedWord;
    private Set<Character> guessedLetters;
    private String playerName;
    private int score;

    public HangmanModel(String playerName, String category) throws IOException {
        this.playerName = playerName;
        this.secretWord = getSecretWordFromFile("src/hangmang/resources/" + category + ".txt");
        this.guessedWord = initializeGuessedWord();
        this.guessedLetters = new HashSet<>();
        this.score = 100;
    }

    // Retrieves a secret word from a file
    private String getSecretWordFromFile(String filename) throws IOException {
        List<String> words = new ArrayList<>();
        try (BufferedReader reader = new BufferedReader(new FileReader(filename))) {
            String line;
            while ((line = reader.readLine()) != null) {
                // Convert the line into uppercase
                line = line.toUpperCase();
                words.add(line);
            }
        }
        int randomIndex = new Random().nextInt(words.size());
        return words.get(randomIndex);
    }

    // Initializes the guessed word with underscores
    private StringBuilder initializeGuessedWord() {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < secretWord.length(); i++) {
            if (secretWord.charAt(i) == ' ') {
                sb.append(' ');
            } else {
                sb.append('_');
            }
        }
        return sb;
    }

    // Returns the current guessed word
    public String getGuessedWord() {
        return guessedWord.toString();
    }
    
    // Returns the secret word
    public String getSecretWord() {
        return secretWord;
    }

    // Guesses a letter and updates the guessed word and score
    public boolean guessLetter(char letter) {
        guessedLetters.add(letter);
        boolean isCorrect = false;
        for (int i = 0; i < secretWord.length(); i++) {
            if (secretWord.charAt(i) == letter) {
                guessedWord.setCharAt(i, letter);
                isCorrect = true;
            }
        }
        if (!isCorrect) {
            if (score > 10) {
                score -= 10; 
            } else {
                score = 0; 
            }
        }
        return isCorrect;
    }

    // Checks if the game is over (score is 0)
    public boolean isGameOver() {
        return score == 0;
    }
    
    // Checks if the game is won (the secret word is completely guessed)
    public boolean gameWon() throws IOException {
        if (secretWord.equals(guessedWord.toString())) {
            saveScore();
            return true;
        }
        return false;
    }

    // Returns the current score
    public int getScore() {
        return score;
    }

    // Saves the player's score to a file
    public void saveScore() {
        List<String> scores = new ArrayList<>();
        try (BufferedReader reader = new BufferedReader(new FileReader("src/hangmang/resources/" + "puntajes.txt"))) {
            String line;
            while ((line = reader.readLine()) != null) {
                scores.add(line);
            }
        } catch (IOException ex) {
            Logger.getLogger(HangmanModel.class.getName()).log(Level.SEVERE, ex.getMessage(), ex);
        }

        scores.add(playerName + "," + score + "," + new Date());

        scores.sort((s1, s2) -> {
            String[] splitS1 = s1.split(",");
            String[] splitS2 = s2.split(",");
            if (splitS1.length > 1 && splitS2.length > 1) {
                int score1 = Integer.parseInt(splitS1[1]);
                int score2 = Integer.parseInt(splitS2[1]);
                return Integer.compare(score2, score1);
            } else {
                return 0;
            }
        });

        try (FileWriter writer = new FileWriter("src/hangmang/resources/" + "puntajes.txt")) {
            for (int i = 0; i < Math.min(10, scores.size()); i++) {
                writer.write(scores.get(i) + "\n");
            }
        } catch (IOException ex) {
            Logger.getLogger(HangmanModel.class.getName()).log(Level.SEVERE, ex.getMessage(), ex);
        }
    }
    
    // Returns the list of scores from the score file
    public List<String> getScores() throws IOException {
        List<String> scores = new ArrayList<>();
        try (BufferedReader reader = new BufferedReader(new FileReader("src/hangmang/resources/" + "puntajes.txt"))) {
            String line;
            while ((line = reader.readLine()) != null) {
                scores.add(line);
            }
        }
        return scores;
    }

    // Restarts the game with a new player name and category
    public void restartGame(String playerName, String category) {
        try {
            this.playerName = playerName;
            this.secretWord = getSecretWordFromFile("src/hangmang/resources/" + category + ".txt");
            this.guessedWord = initializeGuessedWord();
            this.guessedLetters.clear();
            this.score = 100;
        } catch (IOException ex) {
            Logger.getLogger(HangmanModel.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
}