
class liquid {
private:
	int cursor_riga;
	int cursor_colonna;
	int x_max;
	int y_max;
public:
	char visual[2][17];

	liquid (){
		x_max = 16;
		y_max = 2;
		for (int i=0; i<y_max; i++){
			for (int j=0; j<x_max+1; j++){
				visual[i][j] = ' ';

				if (j==x_max)
					visual[i][j] = 0;
			}
		}
		cursor_riga = 0;
		cursor_colonna = 0;
	}

	~liquid () {};

	void init (int x, int y){
		if (x != x_max || y != ymax){
			// error
		}
	}

	void clear(){
		for (int i=0; i<y_max; i++){
			for (int j=0; j<x_max+1; j++){
				visual[i][j] = ' ';
				if (j==x_max)
					visual[i][j] = 0;
			}
		}
	}

	void setCursor (int riga, int colonna){
		cursor_riga = riga;
		cursor_colonna = colonna;
	}

	void print (char c){
		visual[cursor_riga][cursor_colonna] = c;
	}

	void print (char * s){
		char * p = s;

		for (; *p!=0; p++){
			this->print(*p);
			this->cursor_colonna++;

			if (cursor_riga == x_max){
				this->cursor_colonna = 0;
				this->cursor_riga++;
			}
		} 
	}
};