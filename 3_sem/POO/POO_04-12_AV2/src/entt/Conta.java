package entt;

public class Conta {
	private int num;
	private String titular;
	private double saldo;

	public String deposito(double valor) {
		if (valor > 0) {
			saldo += valor;
		}
		return "Saldo: R$ " + String.format("%.2f", saldo); 
	}

	public String saque(double valor) {
		valor += 2;
		if (valor > 0 && valor <= saldo) {
			saldo -= (valor);
		} else {
			System.out.printf("Saldo insuficiente para valor = R$ %.2f\n", valor);
		}
		return "Saldo: R$ " + String.format("%.2f", saldo); 
	}

	public void setId(int num) {
		this.num = num;
	}

	public void setTitular(String titular) {
		this.titular = titular;
	}

	@Override
	public String toString() {
		return "Conta Numero = " + num + ", Titular = " + titular + ", Saldo = R$ " + String.format("%.2f", saldo);
	}

}
