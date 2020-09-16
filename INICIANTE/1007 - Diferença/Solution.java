import java.io.IOException;
import java.util.Scanner;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner entrada = new Scanner(System.in);
         
        int a = entrada.nextInt();
         
        int b = entrada.nextInt();
        
        int c = entrada.nextInt();
        
        int d = entrada.nextInt();
        
        int diferenca = ((a*b) - (c*d));

         
        System.out.print("DIFERENCA = "+ diferenca +"\n");
 
    }
 
}