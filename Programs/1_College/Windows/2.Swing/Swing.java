import javax.swing.*;
public class Swing
{
    public static void main(String[] args) 
    {
        MyWindow mw=new MyWindow();
    }
}

class MyWindow extends JFrame
{
    MyWindow()
    {
        setSize(200, 200);
        setTitle("MyWindow");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }
}
