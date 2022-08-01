package entt;

public class VeiculoUsado extends VeiculoNovo {
	private double desconto;

	public VeiculoUsado(String marca, String modelo, double preco, double desconto) {
		super(marca, modelo, preco);
		this.desconto = desconto;
	}

	public double getDesconto() {
		return desconto;
	}

	public void setDesconto(double desconto) {
		this.desconto = desconto;
	}

	public double precoDesconto() {
		if (getDesconto() > getPreco()) {
			return 0;
		} else {
			return getPreco() - getDesconto();
		}
	}

	@Override
	public String valorVeiculo() {
		return getMarca() + " - " + getModelo() + " - R$ " + String.format("%.2f", precoDesconto()) + " (desconto: R$ " + String.format("%.2f", getDesconto()) + ")";
	}

}
