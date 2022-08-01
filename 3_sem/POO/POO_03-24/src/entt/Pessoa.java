package entt;

public class Pessoa {
	public String nome;
	public int idade;
	public double altura;

	@Override
    public String toString() {
    	return nome + ", " 
    		+ idade + " anos de idade, " 
    		+ String.format("%.2f", altura) + " de altura";
    }

}
