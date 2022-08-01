package entt;

public class VeiculoNovo {
	private String marca;
	private String modelo;
	private double preco;

	public VeiculoNovo(String nome, String modelo, double preco) {
		this.marca = nome;
		this.modelo = modelo;
		this.preco = preco;
	}

	public String getMarca() {
		return marca;
	}

	public void setMarca(String marca) {
		this.marca = marca;
	}

	public String getModelo() {
		return modelo;
	}

	public void setModelo(String modelo) {
		this.modelo = modelo;
	}

	public double getPreco() {
		return preco;
	}

	public void setPreco(double preco) {
		this.preco = preco;
	}

	public String valorVeiculo() {
		return getMarca() + " - " + getModelo() + " - R$ " + String.format("%.2f", getPreco());
	}

}
