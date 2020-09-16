import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 	
 		Scanner scn = new Scanner(System.in);

 		String p1 = scn.nextLine();
 		String p2 = scn.nextLine();
 		String p3 = scn.nextLine();

 		if (p1.equals("vertebrado")) {
 			if (p2.equals("ave")) {
 				if (p3.equals("carnivoro")) {

 					System.out.print("aguia\n");

	 			}else if(p3.equals("onivoro")){

	 				System.out.print("pomba\n");

	 			} 
 			}else if(p2.equals("mamifero")){
 				if (p3.equals("onivoro")) {

 					System.out.print("homem\n");

	 			}else if(p3.equals("herbivoro")){

	 				System.out.print("vaca\n");

	 			}
 			}
 		}

 		if (p1.equals("invertebrado")) {
 			if (p2.equals("inseto")) {
 				if (p3.equals("hematofago")) {

 					System.out.print("pulga\n");

	 			}else if(p3.equals("herbivoro")){

	 				System.out.print("lagarta\n");

	 			}
 			}else if(p2.equals("anelideo")){
 				if (p3.equals("hematofago")) {

 					System.out.print("sanguessuga\n");

	 			}else if(p3.equals("onivoro")){

	 				System.out.print("minhoca\n");
	 				
	 			}
 			}
 		}
 
    }
 
}