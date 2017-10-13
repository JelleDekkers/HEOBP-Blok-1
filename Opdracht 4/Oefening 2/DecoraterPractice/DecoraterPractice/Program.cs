using System;
using System.Collections.Generic;


class Program {
    static void Main(string[] args) {
        // Let us create a Simple Cake Base first
        CakeBase cakeBase = new CakeBase();
        PrintProductDetails(cakeBase);

        // Lets add cream to the cake
        CreamDecorator creamCake = new CreamDecorator(cakeBase);
        PrintProductDetails(creamCake);

        // Let now add a Cherry on it
        CherryDecorator cherryCake = new CherryDecorator(creamCake);
        PrintProductDetails(cherryCake);

        // Lets now add Scent to it
        ArtificialScentDecorator scentedCake = new ArtificialScentDecorator(cherryCake);
        PrintProductDetails(scentedCake);

        // Finally add a Name card on the cake
        NameCardDecorator nameCardOnCake = new NameCardDecorator(scentedCake);
        PrintProductDetails(nameCardOnCake);

        // Lets now create a simple Pastry
        PastryBase pastry = new PastryBase();
        PrintProductDetails(pastry);

        // Lets just add cream and cherry only on the pastry 
        CreamDecorator creamPastry = new CreamDecorator(pastry);
        CherryDecorator cherryPastry = new CherryDecorator(creamPastry);
        PrintProductDetails(cherryPastry);
    }

    static void PrintProductDetails(BakeryComponent item) {
        Console.WriteLine("Item: " + item.GetName() + " Price: " + item.GetPrice());
    }
}

public abstract class BakeryComponent {
    public abstract string GetName();
    public abstract double GetPrice();
}

class CakeBase : BakeryComponent {
    private string name = "Cake Base";
    private double price = 200.0;

    public override string GetName() {
        return name;
    }

    public override double GetPrice() {
        return price;
    }
}

class PastryBase : BakeryComponent {
    private string name = "Pastry Base";
    private double price = 20.0;

    public override string GetName() {
        return name;
    }

    public override double GetPrice() {
        return price;
    }
}

public abstract class Decorator : BakeryComponent {
    BakeryComponent baseComponent;

    protected string name = "Undefined Decorator";
    protected double price = 0.0;

    protected Decorator(BakeryComponent baseComponent) {
        this.baseComponent = baseComponent;
    }

    public override string GetName() {
        return string.Format("{0}, {1}", baseComponent.GetName(), name);
    }

    public override double GetPrice() {
        return price + baseComponent.GetPrice();
    }
}

class ArtificialScentDecorator : Decorator {
    public ArtificialScentDecorator(BakeryComponent baseComponent) : base(baseComponent) {
        name = "Artificial Scent";
        price = 3.0;
    }
}

class CherryDecorator : Decorator {
    public CherryDecorator(BakeryComponent baseComponent) : base(baseComponent) {
        name = "Cherry";
        price = 2.0;
    }
}

class CreamDecorator : Decorator {
    public CreamDecorator(BakeryComponent baseComponent) : base(baseComponent) {
        name = "Cream";
        price = 1.0;
    }
}
class NameCardDecorator : Decorator {
    private int discountRate = 5;

    public NameCardDecorator(BakeryComponent baseComponent) : base(baseComponent) {
        name = "Name Card";
        price = 4.0;
    }

    public override string GetName() {
        return base.GetName() + string.Format("\n(Please Collect your discount card for {0}%)", discountRate);
    }
}