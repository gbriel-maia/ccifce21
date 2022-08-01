package entt;

public class ProdutoImportado extends Produto {
	private double taxaAlfandega;

	public ProdutoImportado(String nome, double preco, double taxaAlfandega) {
		super(nome, preco);
		this.taxaAlfandega = taxaAlfandega;
	}

	public double getTaxaAlfandega() {
		return taxaAlfandega;
	}

	public void setTaxaAlfandega(double taxaAlfandega) {
		this.taxaAlfandega = taxaAlfandega;
	}

	public double totalPreco() {
		return getPreco() + taxaAlfandega;
	}

	@Override
	public String etiquetaPreco() {
    	return getNome() + " R$ " + String.format("%.2f", totalPreco()) + " (taxa alf�ndega: R$ " + String.format("%.2f", getTaxaAlfandega()) + ")";
	}
}
