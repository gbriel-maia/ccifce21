package entt;

public class ContaPoupanca extends Conta{
	@Override
	public void sacar(double valor) {
		if (getSaldo() > 0) {
			setSaldo(getSaldo() - valor);
		} else {
			System.out.println("Saldo Insuficiente");
		}

	}

	@Override
	public void depositar(double valor) {
		setSaldo(getSaldo() + valor);

	}

}
