package entt;

public class Imovel {
	private String nome;
	private double preco;

	public Imovel(String nome, double preco) {
		this.nome = nome;
		this.preco = preco;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public double getPreco() {
		return preco;
	}

	public void setPreco(double preco) {
		this.preco = preco;
	}

	public String valorImovel() {
		return getNome() + " R$ " + String.format("%.2f", getPreco());
	}

}
