public class vehicle {

        int no_of_seats, no_of_wheels;
        void Bike(){
        no_of_seats = 2;
        no_of_wheels = 2;
        System.out.println("Number of seats in a bike: " + no_of_seats); System.out.println("Number of wheels on a bike: " + no_of_wheels);
        }
        void Car(){
        no_of_seats = 8;
        no_of_wheels = 4;
        System.out.println("Number of seats in a car: " + no_of_seats); System.out.println("Number of wheels on a car: " + no_of_wheels);
        }
        }
        public class q2 {
        public static void main(String[] args) { System.out.println("~ INFORMATION ON BIKE ~"); Vehicle B = new Vehicle();
        B.Bike();
        System.out.println("~ INFORMATION ON CAR ~"); Vehicle C = new Vehicle();
        C.Car();
        }

}
