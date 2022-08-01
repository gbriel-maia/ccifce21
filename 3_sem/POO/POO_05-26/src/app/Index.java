package app;

import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.Scanner;

import entt.Imovel;
import entt.ImovelUsado;

public class Index {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		System.out.print("Entre com o número de imóveis: ");
		int x = sc.nextInt();
		List<Imovel> il = new ArrayList<Imovel>();

		for(int i = 1; i <= x; i++) {
			System.out.printf("Imóvel %d: novo ou usado (n/u)? ", i);
			char tipo = sc.next().charAt(0);
			System.out.print("Nome: ");
			String nom = sc.next();
			System.out.print("Preço: R$ ");
			double prc = sc.nextDouble();
			switch (tipo) {
			case 'n':
				Imovel imn = new Imovel(nom, prc);
				il.add(imn);
				break;

			case 'u':
				System.out.print("Desconto: R$ ");
				double desc = sc.nextDouble();
				Imovel imu = new ImovelUsado(nom, prc, desc);
				il.add(imu);
				break;

			default:
				i = x + 1;
				System.out.println("Erro");
				break;
			}
		}

		for (Imovel imovel : il) {
			System.out.println(imovel.valorImovel());
		}
		sc.close();

	}

}
