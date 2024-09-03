import java.awt.*;
public class AwtBasic
{
    public static void main(String[] args) 
    {
        MyWindow mw=new MyWindow();
    }
}

class MyWindow extends Frame
{
    MyWindow()
    {
        setSize(200, 200);
        setTitle("MyWindow");
        setVisible(true);
    }
}