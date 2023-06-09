import java.applet.*;
import java.awt.*;
import java.awt.event.*;
public class MyappletEx extends Applet implements ActionListener  
{
    String name = " ", gender = " "; 
    int age;
    TextField n = new TextField(10);
    CheckboxGroup g = new CheckboxGroup();
    Checkbox m = new Checkbox("Male", g, true);
    Checkbox f = new Checkbox("Female", g, false);
    Choice c = new Choice();
    Label l1 = new Label("Enter Name: ");
    Label l2 = new Label("Select Gender: ");
    Label l3 = new Label("Age: ");
    Button b1 = new Button("Submit");
    public void init()
    {
        add(l1);
        add(n);
        add(l2);
        add(m);
        add(f);
        add(l3);
        c.add("18");
        c.add("19");
        c.add("20");
        c.add("21");
        add(c);
        add(b1);
        b1.addActionListener(this);
    }
    public void paint(Graphics g)
    {
        g.drawString("Name: "+name, 20, 100);
        g.drawString("Gender: "+gender, 20, 120);
        g.drawString("Age: "+age, 20, 140);
    }
    public void actionPerformed(ActionEvent e)
    {
        name = n.getText();
        gender = g.getSelectedCheckbox().getLabel();
        age = Integer.parseInt(c.getSelectedItem());
        repaint();
    }
}

// <APPLET code="MyappletEx" width = "500" height = "400"> </APPLET>
