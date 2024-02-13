import java.rmi.Remote;
import java.rmi.RemoteException;
public interface Interface extends Remote {
    String ranks(String input) throws RemoteException;}