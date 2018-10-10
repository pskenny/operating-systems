package os.lab4;
/*
 * Two threads w/ output "tic\ntoc..." and terminates after 20 seconds
 */

public class TicToc {

	public static void main(String[] args) {
		// see producer consumer example. You need a shared object to pass 
		// terminate threads after 20s
	}

	private synchronized void speak(String text) {

	}

	class Tic implements Runnable {
		@Override
		public void run() {
			speak("Tic");
		}
	}

	class Toc implements Runnable {
		@Override
		public void run() {
			speak("Toc");
		}
	}

}
