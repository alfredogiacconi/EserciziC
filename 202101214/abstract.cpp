public abstract class Azione {
	private:
		String nome;
	
	public:
		Azione(String s) {nome=s;}
		void esegui();
		abstract String dettagli();
		void debug() {
		std::count << "Il mio nome è" << nome << "\n" << dettagli();
		};
}

class Tweet : Azione {
	private:
		String messaggio;
	
	public:
	Tweet(String s, String m) : tweet(n) {messaggio=m; }	
	String dettagli() { return messaggio; }
}

class Email : Azione {
	private:
		String messaggio;
		String destinatario;
	
	public:
	Email(String m, String d) {messaggio=m; destinatario=d; }	
	String dettagli() { 
		String risultato = messaggio << " " << destinatario;
		return risultato; }
}
