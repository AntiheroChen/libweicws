#define PCRE_STATIC
#include <iostream>
#include "pcrecpp.h"

using namespace std;

int main() {
    string sent = "[����] #��������# @MCHOTDOG�ṷ����������� http://t.cn/h0VJQ  �������� @΢�����ֺУ�";
	pcrecpp::StringPiece input(sent);
	pcrecpp::RE pattern("(https?|ftp|file):"
            "//[-A-Za-z0-9+&@#/%?=~_|!:,.;]*"
            "[-A-Za-z0-9+&@#/%=~_|]");

	while (pattern.Consume(&input)) {
	}

	return 0;
}
