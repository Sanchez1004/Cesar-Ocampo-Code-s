package hangmang;

import java.awt.Graphics2D;
import java.awt.geom.Ellipse2D;
import java.awt.geom.Line2D;
import java.awt.geom.QuadCurve2D;

public class FiguresController {
    public HangmanModel model;
    
    public void drawFigures(Graphics2D g2) {
        switch (model.getScore()) {
            case 100:
                Line2D nooseDown = new Line2D.Double(50, 300, 150, 300);
                g2.draw(nooseDown);
                break;
            case 90:
                Line2D noose = new Line2D.Double(100, 300, 100, 50);
                g2.draw(noose);
                break;
            case 80:
                Line2D nooseTop = new Line2D.Double(100, 50, 150, 50);
                g2.draw(nooseTop);
                break;
            case 70:
                Line2D nooseTop2 = new Line2D.Double(150, 50, 150, 75);
                g2.draw(nooseTop2);
                break;
            case 60:
                Ellipse2D head = new Ellipse2D.Double(125, 75, 50, 50);
                g2.draw(head);
                break;
            case 50:
                Line2D body = new Line2D.Double(150, 125, 150, 200);
                g2.draw(body);
                break;
            case 40:
                Line2D arm1 = new Line2D.Double(150, 125, 125, 175);
                g2.draw(arm1);
                break;
            case 30:
                Line2D arm2 = new Line2D.Double(150, 125, 175, 175);
                g2.draw(arm2);
                break;
            case 20:
                Line2D leg1 = new Line2D.Double(150, 200, 125, 250);
                g2.draw(leg1);
                break;
            case 10:
                Line2D leg2 = new Line2D.Double(150, 200, 175, 250);
                g2.draw(leg2);
                break;
            case 0:
                Line2D rightEye1 = new Line2D.Double(135, 85, 145, 95);
                Line2D rightEye2 = new Line2D.Double(145,85, 135, 95);
                g2.draw(rightEye1);
                g2.draw(rightEye2);
                Line2D leftEye1 = new Line2D.Double(155, 85, 165, 95);
                Line2D leftEye2 = new Line2D.Double(165,85, 155, 95);
                g2.draw(leftEye1);
                g2.draw(leftEye2);
                QuadCurve2D mouth = new QuadCurve2D.Double(147, 110, 150, 110, 154, 110);
                g2.draw(mouth);
                break;
            default:
                break;
        }
     }   
}
