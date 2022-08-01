package app;

import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.Scanner;

import entt.Funcionario;
import entt.FuncionarioProprio;
import entt.FuncionarioTercerizado;

public class Index {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		System.out.print("Entre com o numero de produtos: ");
		int x = sc.nextInt();
		List<Funcionario> fl = new ArrayList<Funcionario>();

		for (int i = 1; i <= x; i++) {
			System.out.printf("Funcion�rio %d: \n", i);
			System.out.print("Tercerizado (s/n)? ");
			char tipo = sc.next().charAt(0);
			System.out.print("Nome: ");
			String nome = sc.nextLine();
			System.out.print("Horas Trabalhadas: ");
			int horaTrab = sc.nextInt();
			System.out.print("Valor da Hora: R$ ");
			Double valorHora = sc.nextDouble();
			switch (tipo) {
			case 'n':
				Funcionario fp = new FuncionarioProprio(nome, horaTrab, valorHora);
				fl.add(fp);
				break;

			case 's':
				System.out.print("Valor Hora: R$ ");
				Double valorAdc = sc.nextDouble();
				Funcionario ft = new FuncionarioTercerizado(nome, horaTrab, valorHora, valorAdc);
				fl.add(ft);
				break;

			default:
				System.out.print("Erro");
				i = x + 1;
				break;

			}

			if (i == x) {
				System.out.println("Pagamentos:");
				for (Funcionario funcionario : fl) {
					System.out.println(funcionario.getNome() + " - R$ " + funcionario.pagamento());

				}

			}

		}
		sc.close();

	}

}
