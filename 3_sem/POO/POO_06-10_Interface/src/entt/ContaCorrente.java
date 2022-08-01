package entt;

public class ContaCorrente extends Conta{
	@Override
	public void sacar(double valor) {
		if (getSaldo() > 0) {
			setSaldo(getSaldo() - valor + (getSaldo() - valor * 0.02));
		} else {
			System.out.println("Saldo Insuficiente");
		}

	}

	@Override
	public void depositar(double valor) {
		setSaldo(getSaldo() + valor);

	}

}
