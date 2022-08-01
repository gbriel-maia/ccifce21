package entt;

public class ImovelUsado extends Imovel {
	private double desconto;

	public ImovelUsado(String nome, double preco, double desconto) {
		super(nome, preco);
		this.desconto = desconto;
	}

	public double getDesconto() {
		return desconto;
	}

	public void setDesconto(double desconto) {
		this.desconto = desconto;
	}

	public double precoDesconto() {
		return getPreco() - getDesconto();
	}

	@Override
	public String valorImovel() {
		return getNome() + " R$ " + String.format("%.2f", precoDesconto()) + " (desconto: R$ " + String.format("%.2f", getDesconto()) + ")";
	}

}
