import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;
import java.util.Scanner;

public class Client {
    private Client() {}
    public static void main(String[] args) {
        String host =  (args.length < 1) ? null : args[0];
        try {
            Registry registry = LocateRegistry.getRegistry(host);
            Interface stub = (Interface) registry.lookup("hello");
            Scanner scanner = new Scanner(System.in);
            System.out.print("Введите введите двух или более значное число: ");
            String input = scanner.nextLine();
            String response = stub.ranks(input);
            System.out.println("response: " + response);
        }

        catch (Exception e) {
            System.err.println("Client exception: " + e.toString());
            e.printStackTrace();
        }
    }
}