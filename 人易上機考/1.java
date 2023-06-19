public class Vehicles {
    private String brand;
    private String color;

    public Vehicles(String brand, String color) {
        this.brand = brand;
        this.color = color;
    }
    public String getBrand() {
        return brand;
    }
    
    public void setBrand(String brand) {
        this.brand = brand;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public void showinfo() {
        System.out.println(brand + "  " + color);
    }
}

public class Car extends Vehicles{
    private String sets;
    public Car(String brand, String color, String sets) {
        super(brand, color);
        this.sets = sets;
    }
    public String getSets() {
        return sets;
    }

    public void setSets(String sets) {
        this.sets = sets;
    }
    public void showCar(){
        System.out.println("廠牌:" + getBrand()+"," + "顏色:" + getColor()+"," + "座位:" + getSets()+"人座");
    }
}


public class Moto extends Vehicles{
    private  String cc;
    public Moto(){
    }
    public Moto(String brand, String color, String cc) {
        super(brand, color);
        this.cc = cc;
    }
    public String ccNum() {
        return cc;
    }

    public void ccNum(String cc) {
        this.cc = cc;
    }
    public void  showMoto(){
        System.out.println("廠牌:" + getBrand() +","+ "顏色:" + getColor() +","+ "cc數:" + ccNum());
    }
}
public class main{
    public static void main(String[] args) {
       Car car=new Car("豐田","白色","5");
       car.showCar();
       Moto moto=new Moto("山葉","红色","150");
       moto.showMoto();
       }
}