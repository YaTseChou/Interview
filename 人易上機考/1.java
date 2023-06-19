public class Vehicles {
    private String brand;
    private String color;
    public Vehicles() {
    }
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
    public void run() {
        System.out.println("车辆已经启动");
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
        System.out.println("商标:" + getBrand()+"," + "颜色:" + getColor()+"," + "座位:" + getSets()+"座");
    }
}


public class Moto extends Vehicles{
    private  String load;
    public Moto(){
    }
    public Moto(String brand, String color, String load) {
        super(brand, color);
        this.load = load;
    }
    public String getLoad() {
        return load;
    }

    public void setLoad(String load) {
        this.load = load;
    }
    public void  showMoto(){
        System.out.println("商标:" + getBrand() +","+ "颜色:" + getColor() +","+ "载重:" + getLoad());
    }
}
public class main{
    public static void main(String[] args) {
       Car car=new Car("奔驰","白色","5");
       car.showCar();
       Moto moto=new Moto("福田","红色","6.5吨");
       moto.showMoto();
       }
}