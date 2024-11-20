public class Main {
    public static void main(String[] args) {
        // Create a Car object
        Car myCar = new Car(120, 50, 4);
        myCar.start();
        myCar.displayFuel();
        myCar.honk();

        // Create a Bicycle object
        Bicycle myBicycle = new Bicycle(15, 0, true);
        myBicycle.start();
        myBicycle.displayFuel();
        myBicycle.ringBell();

        // Experiment with different objects
        Car anotherCar = new Car(100, 40, 2);
        anotherCar.start();
        anotherCar.honk();

        Bicycle anotherBicycle = new Bicycle(10, 0, false);
        anotherBicycle.start();
        anotherBicycle.ringBell();
    }
}