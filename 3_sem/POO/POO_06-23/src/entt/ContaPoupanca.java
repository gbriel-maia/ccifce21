package entt;

import intf.Impressao;

public class ContaPoupanca extends Conta implements Impressao{
	@Override
	public void depositar(double valor) {
		setSaldo(getSaldo() + valor);

	}

	@Override
	public void sacar(double valor) {
		if (getSaldo() > 0) {
			setSaldo(getSaldo() - valor);
		} else {
			System.out.println("Saldo Insuficiente");
		}

	}

	@Override
	public void imprimirDadosConta() {
		System.out.println("Conta Poupança\nNúmero: " + getNum() + " Saldo: R$ " + getSaldo());
		
	}

}
