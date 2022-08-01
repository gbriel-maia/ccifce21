package entt;

public class Aluno {
	private int mat;
	private String nome;
	private double n1, n2, trab;
	private double p1 = 2.5, p2 = 2.0;

	public double media() {
		return (p1 * n1 + p1 * n2 + p2 * trab) / (2 * p1 + p2);
	}

	public double medfinal() {
		if (media() < 6) {
			return (6 - media());
		}
		return 0;
	}

	public void setMat(int mat) {
		this.mat = mat;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setN1(double n1) {
		this.n1 = n1;
	}

	public void setN2(double n2) {
		this.n2 = n2;
	}

	public void setTrab(double trab) {
		this.trab = trab;
	}

	@Override
    public String toString() {
		if (medfinal() == 0) {
	    	return "Matricula: " + mat + "\n" 
				+ "Nome: " + nome + "\n" 
				+ "Media: " + String.format("%.2f", media());
		} else {
	    	return "Matricula: " + mat + "\n" 
				+ "Nome: " + nome + "\n" 
				+ "Media: " + String.format("%.2f", media()) + "\n" 
				+ "Final: " + String.format("%.2f", medfinal());
		}
    }

}
