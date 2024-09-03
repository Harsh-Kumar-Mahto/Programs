import java.awt.FlowLayout;
import javax.swing.*;
import java.awt.event.*;
public class ListenerClass{
    public static void main(String[] args) 
    {
        MyWindow mw=new MyWindow("First Window");
    }   
}

class MyWindow extends JFrame implements ActionListener
{
    JButton b1,b2;
    int c1=0;
    int c2=0;
    // int count=0;      We exclude this to overcome common variable problem.
    MyWindow(String title)
    {
        super(title);
        setSize(400,300);
        setLayout(new FlowLayout(FlowLayout.LEFT));   //One of the ways for layouting of the window(Easiest)
        setResizable(false);    //Window will not get resized
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        b1=new JButton("First Button");
        add(b1);
        b1.addActionListener(this);    //this used to refer the current object.
        b2=new JButton("Second Button");
        add(b2);
        b2.addActionListener(this); 
        setVisible(true);
    }
    public void actionPerformed(ActionEvent ae)    //Action event listens only to single click.
    {    
        if(ae.getSource()==b1)
        b1.setText("Button clicked: "+ ++c1);    //Creating the function on clicking.
        if(ae.getSource()==b2)
        b2.setText("Button clicked: "+ ++c2); 
    }  
}