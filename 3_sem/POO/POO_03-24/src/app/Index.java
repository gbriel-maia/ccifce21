package app;

import java.util.Locale;
import java.util.Scanner;

import entt.Pessoa;

public class Index {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		Pessoa p = new Pessoa();
		
		System.out.println("Entre com os dados da pessoa");
		System.out.print("Nome: ");
		p.nome = sc.nextLine();
		System.out.print("Idade: ");
		p.idade = sc.nextInt();
		System.out.print("Altura: ");
		p.altura = sc.nextDouble();
		
		System.out.println(p);

		sc.close();

	}

}
