package hangmang;

import javax.swing.*;
import java.awt.*;
import javax.swing.JButton;

/**
 * @Cesar Ocampo
 */
public class HangmanView extends javax.swing.JFrame  {
    HangmanController controller;
        
    public String secWord;
    public String category;
    public String playerName;
    
    Color buttonColor;
    
    public HangmanView() {
        buttonColor = new Color(255,195,0);
        initComponents();
        this.setVisible(true);
        askInitialData();
    }
    
    public void askInitialData() {
        // Create an array of options for the user to choose from
        String[] options = {"Ciudades de Colombia", "Frases Celebres", 
                             "Libros", "Paises de America", "Peliculas"};
        
        // Create a dropdown menu with the options
        JComboBox<String> optionsMenu = new JComboBox<>(options);
        int result;
        do {
            // Prompt the user to enter their name
            playerName = JOptionPane.showInputDialog(null, "Introduce tu nombre: ");
            // If the user did not enter a name, show a warning and ask if they want to continue
            if (playerName == null || playerName.trim().isEmpty()) {
                result = JOptionPane.showConfirmDialog(null, "Debes introducir un nombre. ¿Deseas continuar?", "Advertencia", JOptionPane.YES_NO_OPTION);
                if (result == JOptionPane.NO_OPTION) {
                    // If the user chooses not to continue, exit the program
                    System.exit(0);
                }
            }
        } while (playerName == null || playerName.trim().isEmpty());
        
        // Show the dropdown menu and get the selected category
        JOptionPane.showConfirmDialog(null, optionsMenu, "Elige una opcion: ",
                                        JOptionPane.DEFAULT_OPTION);
        category = (String)optionsMenu.getSelectedItem();   
    }

    public void restartGame() {
        // Remove all components from the panel
        jPanel2.removeAll();
        jPanel2.revalidate();
        jPanel2.repaint();
        
        // Enable all components in the main panel
        enableAllComponents(jPanel1);
    }
    
    private void enableAllComponents(JPanel panel) {
        // Get all components in the panel
        Component[] components = panel.getComponents();
        for (Component component : components) {
            if (component instanceof JButton) {
                // Enable the button and set its background color
                JButton button = (JButton) component;
                button.setEnabled(true);
                button.setBackground(buttonColor);
            }
        }
    }
    
    public void updateScore(int score) {
        scoreLabel.setText(Integer.toString(score));
    }
    
    public void updateGuessedWord(String secWord) { 
        secretWord.setText(secWord);
    }
    
    public String getCategory() {
        return category;
    }
    
    public String getPlayerName() {
        return playerName;
    }
    
    public void setController(HangmanController controller) {
        this.controller = controller;
    }

    public HangmanController getController() {
        return controller;
    }
    
    private void initComponents() {

        jInternalFrame1 = new javax.swing.JInternalFrame();
        jPanel1 = new javax.swing.JPanel();
        A = new javax.swing.JButton();
        B = new javax.swing.JButton();
        C = new javax.swing.JButton();
        D = new javax.swing.JButton();
        E = new javax.swing.JButton();
        F = new javax.swing.JButton();
        G = new javax.swing.JButton();
        H = new javax.swing.JButton();
        I = new javax.swing.JButton();
        J = new javax.swing.JButton();
        K = new javax.swing.JButton();
        L = new javax.swing.JButton();
        M = new javax.swing.JButton();
        N = new javax.swing.JButton();
        Ñ = new javax.swing.JButton();
        O = new javax.swing.JButton();
        P = new javax.swing.JButton();
        Q = new javax.swing.JButton();
        R = new javax.swing.JButton();
        S = new javax.swing.JButton();
        T = new javax.swing.JButton();
        U = new javax.swing.JButton();
        V = new javax.swing.JButton();
        W = new javax.swing.JButton();
        X = new javax.swing.JButton();
        Y = new javax.swing.JButton();
        Z = new javax.swing.JButton();
        jPanel3 = new javax.swing.JPanel();
        secretWord = new java.awt.Label();
        jPanel2 = new javax.swing.JPanel();
        jPanel4 = new javax.swing.JPanel();
        showScores = new javax.swing.JButton();
        restartGame = new javax.swing.JButton();
        actualScore = new javax.swing.JLabel();
        scoreLabel = new javax.swing.JLabel();

        jInternalFrame1.setVisible(true);

        javax.swing.GroupLayout jInternalFrame1Layout = new javax.swing.GroupLayout(jInternalFrame1.getContentPane());
        jInternalFrame1.getContentPane().setLayout(jInternalFrame1Layout);
        jInternalFrame1Layout.setHorizontalGroup(
            jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 0, Short.MAX_VALUE)
        );
        jInternalFrame1Layout.setVerticalGroup(
            jInternalFrame1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 0, Short.MAX_VALUE)
        );

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Hangman Game");
        setAutoRequestFocus(false);
        setBackground(new java.awt.Color(25, 65, 89));
        setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));

        A.setBackground(new java.awt.Color(255, 195, 0));
        A.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        A.setText("A");
        A.setBorder(null);
        A.setBorderPainted(false);
        A.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        A.setFocusable(false);
        A.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        A.setPreferredSize(new java.awt.Dimension(47, 25));
        A.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                AMouseClicked(evt);
            }
        });
        jPanel1.add(A);

        B.setBackground(new java.awt.Color(255, 195, 0));
        B.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        B.setText("B");
        B.setBorder(null);
        B.setBorderPainted(false);
        B.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        B.setFocusable(false);
        B.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        B.setPreferredSize(new java.awt.Dimension(47, 25));
        B.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                BMouseClicked(evt);
            }
        });
        jPanel1.add(B);

        C.setBackground(new java.awt.Color(255, 195, 0));
        C.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        C.setText("C");
        C.setBorder(null);
        C.setBorderPainted(false);
        C.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        C.setFocusable(false);
        C.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        C.setPreferredSize(new java.awt.Dimension(47, 25));
        C.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                CMouseClicked(evt);
            }
        });
        jPanel1.add(C);

        D.setBackground(new java.awt.Color(255, 195, 0));
        D.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        D.setText("D");
        D.setBorder(null);
        D.setBorderPainted(false);
        D.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        D.setFocusable(false);
        D.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        D.setPreferredSize(new java.awt.Dimension(47, 25));
        D.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                DMouseClicked(evt);
            }
        });
        jPanel1.add(D);

        E.setBackground(new java.awt.Color(255, 195, 0));
        E.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        E.setText("E");
        E.setBorder(null);
        E.setBorderPainted(false);
        E.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        E.setFocusable(false);
        E.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        E.setPreferredSize(new java.awt.Dimension(47, 25));
        E.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                EMouseClicked(evt);
            }
        });
        jPanel1.add(E);

        F.setBackground(new java.awt.Color(255, 195, 0));
        F.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        F.setText("F");
        F.setBorder(null);
        F.setBorderPainted(false);
        F.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        F.setFocusable(false);
        F.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        F.setPreferredSize(new java.awt.Dimension(47, 25));
        F.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                FMouseClicked(evt);
            }
        });
        jPanel1.add(F);

        G.setBackground(new java.awt.Color(255, 195, 0));
        G.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        G.setText("G");
        G.setBorder(null);
        G.setBorderPainted(false);
        G.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        G.setFocusable(false);
        G.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        G.setPreferredSize(new java.awt.Dimension(47, 25));
        G.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                GMouseClicked(evt);
            }
        });
        jPanel1.add(G);

        H.setBackground(new java.awt.Color(255, 195, 0));
        H.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        H.setText("H");
        H.setBorder(null);
        H.setBorderPainted(false);
        H.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        H.setFocusable(false);
        H.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        H.setPreferredSize(new java.awt.Dimension(47, 25));
        H.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                HMouseClicked(evt);
            }
        });
        jPanel1.add(H);

        I.setBackground(new java.awt.Color(255, 195, 0));
        I.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        I.setText("I");
        I.setBorder(null);
        I.setBorderPainted(false);
        I.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        I.setFocusable(false);
        I.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        I.setPreferredSize(new java.awt.Dimension(47, 25));
        I.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                IMouseClicked(evt);
            }
        });
        jPanel1.add(I);

        J.setBackground(new java.awt.Color(255, 195, 0));
        J.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        J.setText("J");
        J.setBorder(null);
        J.setBorderPainted(false);
        J.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        J.setFocusable(false);
        J.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        J.setPreferredSize(new java.awt.Dimension(47, 25));
        J.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                JMouseClicked(evt);
            }
        });
        jPanel1.add(J);

        K.setBackground(new java.awt.Color(255, 195, 0));
        K.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        K.setText("K");
        K.setBorder(null);
        K.setBorderPainted(false);
        K.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        K.setFocusable(false);
        K.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        K.setPreferredSize(new java.awt.Dimension(47, 25));
        K.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                KMouseClicked(evt);
            }
        });
        jPanel1.add(K);

        L.setBackground(new java.awt.Color(255, 195, 0));
        L.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        L.setText("L");
        L.setBorder(null);
        L.setBorderPainted(false);
        L.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        L.setFocusable(false);
        L.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        L.setPreferredSize(new java.awt.Dimension(47, 25));
        L.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                LMouseClicked(evt);
            }
        });
        jPanel1.add(L);

        M.setBackground(new java.awt.Color(255, 195, 0));
        M.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        M.setText("M");
        M.setBorder(null);
        M.setBorderPainted(false);
        M.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        M.setFocusable(false);
        M.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        M.setPreferredSize(new java.awt.Dimension(47, 25));
        M.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                MMouseClicked(evt);
            }
        });
        jPanel1.add(M);

        N.setBackground(new java.awt.Color(255, 195, 0));
        N.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        N.setText("N");
        N.setBorder(null);
        N.setBorderPainted(false);
        N.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        N.setFocusable(false);
        N.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        N.setPreferredSize(new java.awt.Dimension(47, 25));
        N.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                NMouseClicked(evt);
            }
        });
        jPanel1.add(N);

        Ñ.setBackground(new java.awt.Color(255, 195, 0));
        Ñ.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        Ñ.setText("Ñ");
        Ñ.setBorder(null);
        Ñ.setBorderPainted(false);
        Ñ.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        Ñ.setFocusable(false);
        Ñ.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        Ñ.setPreferredSize(new java.awt.Dimension(47, 25));
        Ñ.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                ÑMouseClicked(evt);
            }
        });
        jPanel1.add(Ñ);

        O.setBackground(new java.awt.Color(255, 195, 0));
        O.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        O.setText("O");
        O.setBorder(null);
        O.setBorderPainted(false);
        O.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        O.setFocusable(false);
        O.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        O.setPreferredSize(new java.awt.Dimension(47, 25));
        O.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                OMouseClicked(evt);
            }
        });
        jPanel1.add(O);

        P.setBackground(new java.awt.Color(255, 195, 0));
        P.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        P.setText("P");
        P.setBorder(null);
        P.setBorderPainted(false);
        P.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        P.setFocusable(false);
        P.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        P.setPreferredSize(new java.awt.Dimension(47, 25));
        P.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                PMouseClicked(evt);
            }
        });
        jPanel1.add(P);

        Q.setBackground(new java.awt.Color(255, 195, 0));
        Q.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        Q.setText("Q");
        Q.setBorder(null);
        Q.setBorderPainted(false);
        Q.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        Q.setFocusable(false);
        Q.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        Q.setPreferredSize(new java.awt.Dimension(47, 25));
        Q.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                QMouseClicked(evt);
            }
        });
        jPanel1.add(Q);

        R.setBackground(new java.awt.Color(255, 195, 0));
        R.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        R.setText("R");
        R.setBorder(null);
        R.setBorderPainted(false);
        R.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        R.setFocusable(false);
        R.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        R.setPreferredSize(new java.awt.Dimension(47, 25));
        R.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                RMouseClicked(evt);
            }
        });
        jPanel1.add(R);

        S.setBackground(new java.awt.Color(255, 195, 0));
        S.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        S.setText("S");
        S.setBorder(null);
        S.setBorderPainted(false);
        S.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        S.setFocusable(false);
        S.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        S.setPreferredSize(new java.awt.Dimension(47, 25));
        S.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                SMouseClicked(evt);
            }
        });
        jPanel1.add(S);

        T.setBackground(new java.awt.Color(255, 195, 0));
        T.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        T.setText("T");
        T.setBorder(null);
        T.setBorderPainted(false);
        T.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        T.setFocusable(false);
        T.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        T.setPreferredSize(new java.awt.Dimension(47, 25));
        T.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                TMouseClicked(evt);
            }
        });
        jPanel1.add(T);

        U.setBackground(new java.awt.Color(255, 195, 0));
        U.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        U.setText("U");
        U.setBorder(null);
        U.setBorderPainted(false);
        U.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        U.setFocusable(false);
        U.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        U.setPreferredSize(new java.awt.Dimension(47, 25));
        U.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                UMouseClicked(evt);
            }
        });
        jPanel1.add(U);

        V.setBackground(new java.awt.Color(255, 195, 0));
        V.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        V.setText("V");
        V.setBorder(null);
        V.setBorderPainted(false);
        V.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        V.setFocusable(false);
        V.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        V.setPreferredSize(new java.awt.Dimension(47, 25));
        V.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                VMouseClicked(evt);
            }
        });
        jPanel1.add(V);

        W.setBackground(new java.awt.Color(255, 195, 0));
        W.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        W.setText("W");
        W.setBorder(null);
        W.setBorderPainted(false);
        W.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        W.setFocusable(false);
        W.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        W.setPreferredSize(new java.awt.Dimension(47, 25));
        W.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                WMouseClicked(evt);
            }
        });
        jPanel1.add(W);

        X.setBackground(new java.awt.Color(255, 195, 0));
        X.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        X.setText("X");
        X.setBorder(null);
        X.setBorderPainted(false);
        X.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        X.setFocusable(false);
        X.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        X.setPreferredSize(new java.awt.Dimension(47, 25));
        X.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                XMouseClicked(evt);
            }
        });
        jPanel1.add(X);

        Y.setBackground(new java.awt.Color(255, 195, 0));
        Y.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        Y.setText("Y");
        Y.setBorder(null);
        Y.setBorderPainted(false);
        Y.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        Y.setFocusable(false);
        Y.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        Y.setPreferredSize(new java.awt.Dimension(47, 25));
        Y.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                YMouseClicked(evt);
            }
        });
        jPanel1.add(Y);

        Z.setBackground(new java.awt.Color(255, 195, 0));
        Z.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        Z.setText("Z");
        Z.setBorder(null);
        Z.setBorderPainted(false);
        Z.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        Z.setFocusable(false);
        Z.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        Z.setPreferredSize(new java.awt.Dimension(47, 25));
        Z.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                ZMouseClicked(evt);
            }
        });
        jPanel1.add(Z);

        secretWord.setAlignment(java.awt.Label.CENTER);
        secretWord.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        secretWord.setFont(new java.awt.Font("Candara", 1, 24)); // NOI18N
        secretWord.setName("secretWord"); // NOI18N
        secretWord.setText("ESPERANDO A QUE ESCOJA CATEGORÍA");

        javax.swing.GroupLayout jPanel3Layout = new javax.swing.GroupLayout(jPanel3);
        jPanel3.setLayout(jPanel3Layout);
        jPanel3Layout.setHorizontalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel3Layout.createSequentialGroup()
                .addComponent(secretWord, javax.swing.GroupLayout.PREFERRED_SIZE, 1011, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 0, Short.MAX_VALUE))
        );
        jPanel3Layout.setVerticalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(secretWord, javax.swing.GroupLayout.DEFAULT_SIZE, 121, Short.MAX_VALUE)
        );

        javax.swing.GroupLayout jPanel2Layout = new javax.swing.GroupLayout(jPanel2);
        jPanel2.setLayout(jPanel2Layout);
        jPanel2Layout.setHorizontalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 367, Short.MAX_VALUE)
        );
        jPanel2Layout.setVerticalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 0, Short.MAX_VALUE)
        );

        showScores.setText("VER PUNTAJES");
        showScores.setAutoscrolls(true);
        showScores.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                showScoresMouseClicked(evt);
            }
        });

        restartGame.setText("REINICIAR JUEGO");
        restartGame.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                restartGameMouseClicked(evt);
            }
        });

        actualScore.setFont(new java.awt.Font("Candara", 1, 12)); // NOI18N
        actualScore.setText("Score:");
        actualScore.setToolTipText("");

        scoreLabel.setFont(new java.awt.Font("Candara", 1, 14)); // NOI18N
        scoreLabel.setText("100");

        javax.swing.GroupLayout jPanel4Layout = new javax.swing.GroupLayout(jPanel4);
        jPanel4.setLayout(jPanel4Layout);
        jPanel4Layout.setHorizontalGroup(
            jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel4Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(restartGame, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(showScores, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addGroup(jPanel4Layout.createSequentialGroup()
                        .addGap(0, 54, Short.MAX_VALUE)
                        .addComponent(actualScore, javax.swing.GroupLayout.PREFERRED_SIZE, 44, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(scoreLabel, javax.swing.GroupLayout.PREFERRED_SIZE, 45, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(20, 20, 20)))
                .addContainerGap())
        );
        jPanel4Layout.setVerticalGroup(
            jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel4Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(showScores, javax.swing.GroupLayout.PREFERRED_SIZE, 48, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addComponent(restartGame, javax.swing.GroupLayout.PREFERRED_SIZE, 48, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addGroup(jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(actualScore, javax.swing.GroupLayout.PREFERRED_SIZE, 32, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(scoreLabel, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addGap(33, 33, 33))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(jPanel3, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, 200, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(110, 110, 110)
                        .addComponent(jPanel2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(jPanel4, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addContainerGap())))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jPanel2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, 281, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(0, 25, Short.MAX_VALUE))
                    .addComponent(jPanel4, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(jPanel3, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addContainerGap())
        );

        pack();
    }

    private void AMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'A';
        controller.handleButtonAction(A, letter);
        A.setEnabled(false);
    }

    private void BMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'B';
        controller.handleButtonAction(B, letter);
        B.setEnabled(false);
    }

    private void CMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'C';
        controller.handleButtonAction(C, letter);
        C.setEnabled(false);
    }

    private void DMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'D';
        controller.handleButtonAction(D, letter);
        D.setEnabled(false);
    }

    private void EMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'E';
        controller.handleButtonAction(E, letter);
        E.setEnabled(false);
    }

    private void FMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'F';
        controller.handleButtonAction(F, letter);
        F.setEnabled(false);
    }

    private void GMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'G';
        controller.handleButtonAction(G, letter);
        G.setEnabled(false);
    }

    private void HMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'H';
        controller.handleButtonAction(H, letter);
        H.setEnabled(false);
    }

    private void IMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'I';
        controller.handleButtonAction(I, letter);
        I.setEnabled(false);
    }

    private void JMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'J';
        controller.handleButtonAction(J, letter);
        J.setEnabled(false);
    }

    private void KMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'K';
        controller.handleButtonAction(K, letter);
        K.setEnabled(false);
    }

    private void LMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'L';
        controller.handleButtonAction(L, letter);
        L.setEnabled(false);
    }

    private void MMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'M';
        controller.handleButtonAction(M, letter);
        M.setEnabled(false);
    }

    private void NMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'N';
        controller.handleButtonAction(N, letter);
        N.setEnabled(false);
    }

    private void OMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'O';
        controller.handleButtonAction(O, letter);
        O.setEnabled(false);
    }

    private void PMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'P';
        controller.handleButtonAction(P, letter);
        P.setEnabled(false);
    }

    private void QMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'Q';
        controller.handleButtonAction(Q, letter);
        Q.setEnabled(false);
    }

    private void RMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'R';
        controller.handleButtonAction(R, letter);
        R.setEnabled(false);
    }

    private void SMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'S';
        controller.handleButtonAction(S, letter);
        S.setEnabled(false);
    }

    private void TMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'T';
        controller.handleButtonAction(T, letter);
        T.setEnabled(false);
    }

    private void UMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'U';
        controller.handleButtonAction(U, letter);
        U.setEnabled(false);
    }

    private void VMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'V';
        controller.handleButtonAction(V, letter);
        V.setEnabled(false);
    }

    private void WMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'W';
        controller.handleButtonAction(W, letter);
        W.setEnabled(false);
    }

    private void XMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'X';
        controller.handleButtonAction(X, letter);
        X.setEnabled(false);
    }

    private void YMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'Y';
        controller.handleButtonAction(Y, letter);
        Y.setEnabled(false);
    }

    private void ZMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'Z';
        controller.handleButtonAction(Z, letter);
        Z.setEnabled(false);
    }

    private void showScoresMouseClicked(java.awt.event.MouseEvent evt) {
        controller.showScores();
    }

    private void restartGameMouseClicked(java.awt.event.MouseEvent evt) {
        int option = JOptionPane.showConfirmDialog(this, "¿Desea reiniciar el juego?", "Reiniciar Juego", JOptionPane.YES_NO_OPTION);
                if (option == JOptionPane.YES_OPTION) {
                    askInitialData();
                    restartGame();
                    controller.restartHandler();
                } 
    }

    private void ÑMouseClicked(java.awt.event.MouseEvent evt) {
        char letter = 'Ñ';
        controller.handleButtonAction(Ñ, letter);
        Ñ.setEnabled(false);
    }

    public static void main(String args[]) {
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException | InstantiationException | IllegalAccessException | javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(HangmanView.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }

        java.awt.EventQueue.invokeLater(() -> {
            new HangmanView().setVisible(true);
        });
    }

    public javax.swing.JButton A;
    public javax.swing.JButton B;
    public javax.swing.JButton C;
    public javax.swing.JButton D;
    public javax.swing.JButton E;
    public javax.swing.JButton F;
    public javax.swing.JButton G;
    public javax.swing.JButton H;
    public javax.swing.JButton I;
    public javax.swing.JButton J;
    public javax.swing.JButton K;
    public javax.swing.JButton L;
    public javax.swing.JButton M;
    public javax.swing.JButton N;
    public javax.swing.JButton O;
    public javax.swing.JButton P;
    public javax.swing.JButton Q;
    public javax.swing.JButton R;
    public javax.swing.JButton S;
    public javax.swing.JButton T;
    public javax.swing.JButton U;
    public javax.swing.JButton V;
    public javax.swing.JButton W;
    public javax.swing.JButton X;
    public javax.swing.JButton Y;
    public javax.swing.JButton Z;
    private javax.swing.JLabel actualScore;
    private javax.swing.JInternalFrame jInternalFrame1;
    public javax.swing.JPanel jPanel1;
    public javax.swing.JPanel jPanel2;
    public javax.swing.JPanel jPanel3;
    private javax.swing.JPanel jPanel4;
    private javax.swing.JButton restartGame;
    private javax.swing.JLabel scoreLabel;
    public java.awt.Label secretWord;
    private javax.swing.JButton showScores;
    public javax.swing.JButton Ñ;
}
