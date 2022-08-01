package entt;

public class PessoaFisica extends Cliente {
	private int cpf;
	
	public PessoaFisica(String nome, String endereco, int telefone, int cpf) {
		super(nome, endereco, telefone);
		this.cpf = cpf;
	}

	public double getCpf() {
		return cpf;
	}

	public void setCpf(int cpf) {
		this.cpf = cpf;
	}

	@Override
	public String imprimirDados() {
		return "Nome:" + getNome() + ", cpf: " + getCpf() + ", Endere�o: " + getEndereco() + ", Telefone: " + getTelefone();
	}

}
