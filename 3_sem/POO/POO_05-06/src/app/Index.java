package app;

import java.util.Locale;
import java.util.Scanner;

import entt.Cliente;
import entt.PessoaFisica;
import entt.PessoaJuridica;

public class Index {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		System.out.print("Entre com o número de produtos: ");
		int x = sc.nextInt();
		Cliente[] c = new Cliente[x];

		for (int i = 0; i < x; i++) {
			String nom = null, end = null;
			int tel = -1;

			System.out.printf("Produto %d: \n", i+1);
			System.out.print("Comum ou importado (c/i): ");
			char tipo = sc.next().charAt(0);
			switch (tipo) {
			case 'c':
				System.out.print("Nome: ");
				nom = sc.nextLine();
				System.out.print("Cpf: ");
				int cpf = sc.nextInt();
				System.out.print("Endere�o: ");
				end = sc.nextLine();
				System.out.print("Telefone: ");
				tel = sc.nextInt();
				c[i] = new PessoaFisica(nom, end, tel, cpf);
				break;

			case 'i':
				System.out.print("Nome: ");
				nom = sc.nextLine();
				System.out.print("Cnpj: ");
				int cnpj = sc.nextInt();
				System.out.print("Endere�o: ");
				end = sc.nextLine();
				System.out.print("Telefone: ");
				tel = sc.nextInt();
				c[i] = new PessoaJuridica(nom, end, tel, cnpj);
				break;

			default:
				System.out.print("Erro");
				i = x+1;
				break;

			}

			if (i == x-1) {
				System.out.println("Dados dos Clientes:");
				for (int j = 0; j < x; j++) {
					System.out.printf("Cliente %d: \n", j+1);
					System.out.println(c[j].imprimirDados());

				}

			}

		}
		sc.close();

	}

}
