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
         
        String nome = entrada.nextLine();
        
        double valor_fixo = entrada.nextDouble();
        
        double total_vendas = entrada.nextDouble();
                
        double salario = valor_fixo+(total_vendas * 0.15);

        
        System.out.printf("TOTAL = R$ %.2f\n", salario);  
 
    }
 
}