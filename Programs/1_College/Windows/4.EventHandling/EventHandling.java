import java.awt.FlowLayout;
import javax.swing.*;
import java.awt.event.*;
public class EventHandling 
{
    public static void main(String[] args) 
    {
        MyWindow my=new MyWindow("First Window");
    }   
}

class MyWindow extends JFrame
{
    JButton b1,b2;
    // int count=0;      We exclude this to overcome common variable problem.
    MyWindow(String title)
    {
        super(title);
        setSize(400,300);
        setLayout(new FlowLayout(FlowLayout.RIGHT));   //One of the ways for layouting of the window(Easiest)
        setResizable(false);    //Window will not get resized
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        b1=new JButton("First Button");
        add(b1);
        //Creating one to one listener.
        b1.addActionListener(new ActionListener(){   //Creating listener to catch the clicking of button.
            public void actionPerformed(ActionEvent ae){    //Action event listens only to single click.
                int count=0;
                b1.setText("Button clicked: "+ ++count);    //Creating the function on clicking.
            }    
        });   //Anonimous class is created and is inherited along with creation of an anonimous object.


        b2=new JButton("Second Button");
        add(b2);
        b2.addActionListener(new ActionListener(){   
            public void actionPerformed(ActionEvent ae){  
                int count=0; 
                b2.setText("Button clicked: "+ ++count);   
            }    
        }); 
        setVisible(true);
    }
}