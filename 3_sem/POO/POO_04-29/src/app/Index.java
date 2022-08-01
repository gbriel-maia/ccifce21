package app;

import java.util.Locale;
import java.util.Scanner;

import entt.Produto;
import entt.ProdutoImportado;

public class Index {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		System.out.print("Entre com o numero de produtos: ");
		int x = sc.nextInt();
		Produto[] p = new Produto[x];

		for (int i = 0; i < x; i++) {
			System.out.printf("Produto %d: \n", i+1);
			System.out.print("Comum ou importado (c/i): ");
			char tipo = sc.next().charAt(0);

			System.out.print("Nome: ");
			String nome = sc.next();
			System.out.print("Pre�o: R$ ");
			Double preco = sc.nextDouble();

			switch (tipo) {
			case 'c':
				p[i] = new Produto(nome, preco);
				break;

			case 'i':
				System.out.print("taxaAlfandega: R$ ");
				Double tax = sc.nextDouble();
				p[i] = new ProdutoImportado(nome, preco, tax);
				break;

			default:
				System.out.print("Erro");
				i = x+1;
				break;

			}

			if (i == x-1) {
				System.out.println("Etiquetas de pre�o:");
				for (int j = 0; j < x; j++) {
					System.out.println(p[j].etiquetaPreco());

				}

			}

		}
		sc.close();

	}

}
