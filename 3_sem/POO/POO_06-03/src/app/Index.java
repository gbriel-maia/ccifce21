package app;

import java.util.Scanner;

import entt.Funcionario;
import entt.Gerente;
import entt.Programador;

public class Index {

	public static void main(String[] args) {
		Funcionario g = new Gerente();
		Funcionario p = new Programador();

		g.setSalario(100);
		p.setSalario(100);

		int opcao;
		Scanner sc = new Scanner(System.in);

		do {
			menu();
			opcao = sc.nextInt();

			switch (opcao) {
			case 0:
				break;

			case 1:
				do {
					subMenu('g');
					opcao = sc.nextInt();

					switch (opcao) {
					case 0:
						break;

					case 1:
						g.aumentaSalario();
						break;

					case 2:
						g.imprimeDados();
						break;

					default:
						System.out.println("Opção inválida.");
					}

				} while (opcao != 0);
				opcao = 1;
				break;

			case 2:
				do {
					subMenu('p');
					opcao = sc.nextInt();

					switch (opcao) {
					case 0:
						break;

					case 1:
						p.aumentaSalario();
						break;

					case 2:
						p.imprimeDados();
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
        System.out.println("\tFuncionarios");
        System.out.println("0. Sair");
        System.out.println("1. Gerente");
        System.out.println("2. Programador");
        System.out.print("Opcao: ");
    }

	public static void subMenu(char f) {
		if (f == 'g') {
			System.out.println("\tGerente");
		} else {
			System.out.println("\tProgramador");
		}
        System.out.println("0. Voltar");
        System.out.println("1. Aumentar Salario");
        System.out.println("2. Imprimir Dados");
        System.out.print("Opcao: ");
    }

}
    
    