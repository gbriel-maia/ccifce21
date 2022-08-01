package app;

import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.Scanner;

import entt.Conta;
import entt.ContaCorrente;
import entt.ContaPoupanca;

public class Index {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		List<Conta> cl = new ArrayList<Conta>();

		for (int i = 1; i <= 2; i++) {
			if (i == 1) {
				System.out.println("Conta Corrente");
			} else {
				System.out.println("Conta Poupanca");
			}
			System.out.print("Nome: ");
			String nome = sc.next();
			System.out.print("Primeiro Deposito: R$ ");
			double saldo = sc.nextDouble();
			if (i == 1) {
				Conta cc = new ContaCorrente(i, nome, saldo);
				cl.add(cc);
			} else {
				Conta cp = new ContaPoupanca(i, nome, saldo);
				cl.add(cp);
			}
			System.out.println("\n");
		}

		int opcao;

		do {
			menu();
			opcao = sc.nextInt();

			switch (opcao) {
			case 0:
				break;

			case 1:
				do {
					System.out.println("\n\tConta Corrente Numero: " + String.format("%04d", cl.get(0).getNumero()));
					subMenu();
					opcao = sc.nextInt();

					switch (opcao) {
					case 0:
						break;

					case 1:
						System.out.print("Digite o valor que deseja sacar: R$ ");
						cl.get(0).sacar(sc.nextDouble());
						break;

					case 2:
						System.out.print("Digite o valor que deseja depositar: R$ ");
						cl.get(0).depositar(sc.nextDouble());
						break;

					case 3:
						cl.get(0).imprimir();
						break;

					default:
						System.out.println("Opção inválida.");
					}

				} while (opcao != 0);
				opcao = 1;
				break;

			case 2:
				do {
					System.out.println("\n\tConta Poupanca Numero: " + String.format("%04d", cl.get(1).getNumero()));
					subMenu();
					opcao = sc.nextInt();

					switch (opcao) {
					case 0:
						break;

					case 1:
						System.out.print("Digite o valor que deseja sacar: R$ ");
						cl.get(1).sacar(sc.nextDouble());
						break;

					case 2:
						System.out.print("Digite o valor que deseja depositar: R$ ");
						cl.get(1).depositar(sc.nextDouble());
						break;

					case 3:
						cl.get(1).imprimir();
						break;

					default:
						System.out.println("Opção inválida.");
					}

				} while (opcao != 0);
				opcao = 2;
				break;

			default:
				System.out.println("Opção inválida.");
			}

		} while (opcao != 0);
		sc.close();

	}

	public static void menu() {
		System.out.println("\n\tContas");
		System.out.println("0. Sair");
		System.out.println("1. Corrente");
		System.out.println("2. Poupanca");
		System.out.print("Opcao: ");
	}

	public static void subMenu() {
		System.out.println("0. Voltar");
		System.out.println("1. Sacar");
		System.out.println("2. Depositar");
		System.out.println("3. Imprimir Dados");
		System.out.print("Opcao: ");
	}

}
