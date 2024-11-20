public class Vehicle {
    protected int speed;
    protected int fuel;

    public Vehicle(int speed, int fuel) {
        this.speed = speed;
        this.fuel = fuel;
    }

    public void start() {
        System.out.println("Vehicle started.");
    }

    public void displayFuel() {
        System.out.println("Fuel level: " + fuel);
    }
}
