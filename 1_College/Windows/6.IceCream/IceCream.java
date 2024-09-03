import java.awt.event.ActionListener;
import java.awt.FlowLayout;
import javax.swing.*;
import java.awt.event.*;
import javax.swing.JCheckBox;
import javax.swing.JLabel;

public class IceCream 
{
    public static void main(String[] args) 
    {
        MyWindow my=new MyWindow("First Window");
    }    
}

class MyWindow extends JFrame implements ActionListener
{
    JLabel likes;
    JCheckBox a,b,c,d;
    MyWindow(String title)
    {
        super(title);
        setSize(400,300);
        setLayout(new FlowLayout(FlowLayout.LEFT));   //One of the ways for layouting of the window(Easiest)
        setResizable(false);    //Window will not get resized
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        add(new JLabel("Which Ice Creams You Like?"));
        a=new JCheckBox("Vanilla");
        b=new JCheckBox("ButterScotch");
        c=new JCheckBox("Chocolate");
        d=new JCheckBox("StrawBerry");

        ButtonGroup bg=new ButtonGroup();   //With the help of this class we enable only single selection 
        // Or we can add JRadioButton in place of JCheckBox 
        bg.add(a);
        bg.add(b);
        bg.add(c);
        bg.add(d);

        a.addActionListener(this);
        b.addActionListener(this);
        c.addActionListener(this);
        d.addActionListener(this);

        add(a);
        add(b);
        add(c);
        add(d);

        likes=new JLabel("You Like:");
        add(likes);

        setVisible(true);

    }

    public void actionPerformed(ActionEvent e) 
    {
        String s="You like:";
        if(a.isSelected())s=s+a.getText()+",";
        if(b.isSelected())s=s+b.getText()+",";
        if(c.isSelected())s=s+c.getText()+",";
        if(d.isSelected())s=s+d.getText()+",";

        likes.setText(s);  //Update likes label
    }
}
