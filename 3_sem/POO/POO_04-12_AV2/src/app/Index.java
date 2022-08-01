package app;

import java.util.Locale;
import java.util.Scanner;

import entt.Conta;

public class Index {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		Conta c = new Conta();

		System.out.println("Dados da conta");
		System.out.print("Numero: ");
		c.setId(sc.nextInt());

		System.out.print("Titular: ");
		c.setTitular(sc.next());
		System.out.print("Deposito Inicial: R$ ");
		c.deposito(sc.nextDouble());

		System.out.println("\n" + c);

		System.out.print("Novo Deposito: R$ ");
		c.deposito(sc.nextDouble());

		System.out.println("\n" + c);

		System.out.print("Novo Saque (taxa = R$ 2.00): R$ ");
		c.saque(sc.nextDouble());

		System.out.println("\n" + c);

		sc.close();

	}

}