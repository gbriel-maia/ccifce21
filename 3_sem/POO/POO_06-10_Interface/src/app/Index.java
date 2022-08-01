package app;

import entt.Conta;
import entt.ContaCorrente;
import entt.ContaPoupanca;

public class Index {

	public static void main(String[] args) {
		Conta cc = new ContaCorrente();
		Conta cp = new ContaPoupanca();

		cc.depositar(100);
		cc.sacar(10);
		cp.depositar(100);
		cp.sacar(10);
	}

}
