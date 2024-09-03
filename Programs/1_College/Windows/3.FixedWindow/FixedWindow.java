import java.awt.FlowLayout;

import javax.swing.*;
public class FixedWindow 
{
    public static void main(String[] args) 
    {
        MyWindow my=new MyWindow("First Window");
    }   
}

class MyWindow extends JFrame
{
    JButton b1,b2,b3;
    MyWindow(String title)
    {
        super(title);
        setSize(400,300);
        setLayout(new FlowLayout(FlowLayout.RIGHT));   //One of the ways for layouting of the window(Easiest)
        setResizable(false);    //Window will not get resized
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        b1=new JButton("First Button");
        add(b1);
        b2=new JButton("Second Button");
        add(b2);
        b3=new JButton("Third Button");
        add(b3);
        setVisible(true);
    }
}