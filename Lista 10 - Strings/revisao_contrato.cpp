#include <iostream>
#include <string>

using namespace std;

string real_valor_contrato(char digito_defeituoso, const string& numero_original) {
	string resultado = "";
	int i = 0;

	for (char c : numero_original) {
		if (c != digito_defeituoso) {
			resultado += c;
		}
	}

	while (i < resultado.size() && resultado[i] == '0') {
		i++;
	}

	resultado = resultado.substr(i);

	if (resultado.empty()) {
		return "0";
	}

	return resultado;
}

int main() {
	char d;
	string n;

	while(true) {
		cin >> d >> n;
		if(d == '0' && n == "0")
			break;
		else {
			cout << real_valor_contrato(d, n) << endl;
		}
	} 

	return 0;
}
