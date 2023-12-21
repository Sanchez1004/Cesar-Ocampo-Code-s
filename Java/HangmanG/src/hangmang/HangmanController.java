package hangmang;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.io.IOException;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JButton;
import javax.swing.JOptionPane;

/**
 * HangmanController class controls the game logic and user interactions in the Hangman game.
 * It handles button actions, updates the view, and manages the game state.
 *
 * @Cesar Ocampo
 */

public class HangmanController {
    private HangmanModel model;
    private HangmanView view;
    private FiguresController figures;
    private Color rColor;
    private Color wColor;
    
    HangmanController() {
        try {
            rColor = new Color(44, 137, 91);
            wColor = new Color(223, 116, 74);
            view = new HangmanView();
            view.setController(this);
            
            model = new HangmanModel(view.getPlayerName(), view.getCategory());
            
            figures = new FiguresController();
            figures.model = model;
            
            view.updateGuessedWord(model.getGuessedWord());
            view.secretWord.revalidate();
            updateHangman();
        } catch (IOException ex) {
            Logger.getLogger(HangmanController.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    /**
     * Handles the action when a button is clicked.
     * If the guessed letter is correct, updates the view and checks if the game is won.
     * If the guessed letter is incorrect, updates the view and checks if the game is over.
     *
     * @param button The button that was clicked
     * @param letter The letter that was guessed
     */
    public void handleButtonAction(JButton button, char letter){
        if(model.guessLetter(letter)) {
            view.updateGuessedWord(model.getGuessedWord());
            view.updateScore(model.getScore());
            button.setBackground(rColor);
            try {
                if(model.gameWon()) {                    
                    int option = JOptionPane.showConfirmDialog(this.view,
                            "FELICIDADES, COMPLETASTE LA PALABRA!\nQuieres jugar de nuevo?",
                            "GAME WON", JOptionPane.YES_NO_OPTION);
                    if (option == JOptionPane.YES_OPTION) {
                        view.askInitialData();
                        model.restartGame(view.getPlayerName(),view.getCategory());
                        view.updateGuessedWord(model.getGuessedWord());
                        view.restartGame();
                    } else {
                        System.exit(0);
                    }
                }
            } catch (IOException ex) {
                Logger.getLogger(HangmanController.class.getName()).log(Level.SEVERE, null, ex);
            }
        }else {
            if(model.isGameOver()) {
                view.updateScore(model.getScore());
                int option = JOptionPane.showConfirmDialog(this.view, "PUTANJE LLEGÓ A 0\nLA PALABRA ERA: " + model.getSecretWord() + "\nQuieres jugar de nuevo?", "Game Over", JOptionPane.YES_NO_OPTION);
                if (option == JOptionPane.YES_OPTION) {
                    view.askInitialData();
                    model.restartGame(view.getPlayerName(), view.getCategory());
                    view.updateGuessedWord(model.getGuessedWord());
                    view.restartGame();
                } else {
                    System.exit(0);
                }
            } else {
                view.updateScore(model.getScore());
                button.setBackground(wColor);
                updateHangman();
            }        
        }
    }
    
    /**
     * Shows the top 10 scores in a dialog box.
     * If there is an error retrieving the scores, shows an error message.
     */
    public void showScores() {
        try {
            List<String> scores = model.getScores();
            String scoresText = String.join("\n", scores);
            JOptionPane.showMessageDialog(null, scoresText, "TOP 10 SCORES", JOptionPane.INFORMATION_MESSAGE);
        } catch (IOException ex) {
            JOptionPane.showMessageDialog(null, "Error retrieving scores", "Error", JOptionPane.ERROR_MESSAGE);
        }
    }
    
    /**
     * Updates the hangman figure in the view.
     */
    public void updateHangman() {
        Graphics g2 = view.jPanel2.getGraphics();
        figures.drawFigures((Graphics2D) g2);
    }
    
    /**
     * Restarts the game by resetting the model and updating the view.
     */
    public void restartHandler() {
        model.restartGame(view.getPlayerName() ,view.getCategory());
        view.updateGuessedWord(model.getGuessedWord());
        view.updateScore(model.getScore());
    }
    
    /**
     * The main method that starts the Hangman game.
     */
    public static void main(String[] args) {
        HangmanController controller = new HangmanController();
    }
}
