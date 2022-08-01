package app;

import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.Scanner;

import entt.VeiculoNovo;
import entt.VeiculoUsado;

public class Index {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		System.out.print("Entre com o número de veículos: ");
		int x = sc.nextInt();
		List<VeiculoNovo> vl = new ArrayList<VeiculoNovo>();

		for(int i = 1; i <= x; i++) {
			System.out.printf("Veículo %d: novo ou usado (n/u)? ", i);
			char tipo = sc.next().charAt(0);
			System.out.print("Marca: ");
			String mar = sc.next();
			System.out.print("Modelo: ");
			String mod = sc.next();
			System.out.print("Preço: R$ ");
			double prc = sc.nextDouble();
			switch (tipo) {
			case 'n':
				VeiculoNovo vn = new VeiculoNovo(mar, mod, prc);
				vl.add(vn);
				break;

			case 'u':
				System.out.print("Desconto: R$ ");
				double desc = sc.nextDouble();
				VeiculoNovo vu = new VeiculoUsado(mar, mod, prc, desc);
				vl.add(vu);
				break;

			default:
				i = x + 1;
				System.out.println("Erro");
				break;
			}
		}

		for (VeiculoNovo veiculo : vl) {
			System.out.println(veiculo.valorVeiculo());
		}
		sc.close();

	}

}
