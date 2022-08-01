package app;

import java.util.ArrayList;
import java.util.List;
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
		List<Produto> pl = new ArrayList<Produto>();

		for (int i = 0; i < x; i++) {
			System.out.printf("Produto %d: \n", i+1);
			System.out.print("Comum ou importado (c/i): ");
			char tipo = sc.next().charAt(0);

			System.out.print("Nome: ");
			String nome = sc.next();
			System.out.print("Preço: R$ ");
			Double preco = sc.nextDouble();

			switch (tipo) {
			case 'c':
				Produto pc = new Produto(nome, preco);
				pl.add(pc);
				break;

			case 'i':
				System.out.print("taxaAlfandega: R$ ");
				Double taxa = sc.nextDouble();
				Produto pi = new ProdutoImportado(nome, preco, taxa);
				pl.add(pi);
				break;

			default:
				System.out.print("Erro");
				i = x+1;
				break;

			}

			if (i == x) {
				System.out.println("Etiquetas de preço:");
				for (Produto produto : pl) {
					System.out.println(produto.etiquetaPreco());

				}

			}

		}
		sc.close();

	}

}
