package entt;

public class PessoaJuridica extends Cliente {
	private int cnpj;

	public PessoaJuridica(String nome, String endereco, int telefone, int cnpj) {
		super(nome, endereco, telefone);
		this.cnpj = cnpj;
	}

	public double getCnpj() {
		return cnpj;
	}

	public void setCnpj(int cnpj) {
		this.cnpj = cnpj;
	}

	@Override
	public String imprimirDados() {
		return "Nome:" + getNome() + ", cpf: " + getCnpj() + ", Endere�o: " + getEndereco() + ", Telefone: " + getTelefone();
	}

}
