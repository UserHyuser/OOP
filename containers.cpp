#include "container_atd.h"
namespace simple_animals {
	// ������������� ����������
	container::container() : len(0) { }
	// ������� ���������� �� ���������
	void container::Clear() {
		for (int i = 0; i < len; i++) {
			delete cont[i];
		}
		len = 0;
	}

	// ���� ����������� ����������
	void container::In(ifstream &ifst) {
		while (!ifst.eof()) {
			if (((cont[len] = animal::In(ifst)) != 0) && len < 99) {
				len++;
			}
		}
	}

	// ����� ����������� ����������
	void container::Out(ofstream &ofst) {
		ofst << "��������� �������� " << len
			<< " ��������." << endl;
		for (int i = 0; i < len; i++) {
			ofst << i << ": ";
			cont[i]->Out(ofst);
		}
	}
} // end simple_animals namespace
