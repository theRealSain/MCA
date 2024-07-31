import java.applet.*;
import java.awt.*;

/*<applet code="House.java" width=300 height=300></applet>*/

public class House extends Applet
{
    public void paint(Graphics g)
    {
        int x[] = {150, 300, 225};
        int y[] = {150, 150, 25};

        g.setColor(Color.blue);
        g.drawRect(150, 150, 150, 200);
        g.setColor(Color.green);
        g.fillRect(150, 180, 50, 70);
        g.setColor(Color.green);
        g.fillRect(250, 180, 50, 70);
        g.setColor(Color.red);
        g.fillRect(200, 270, 50, 80);
        g.setColor(Color.pink);
        g.fillPolygon(x, y, 3);
    }
}