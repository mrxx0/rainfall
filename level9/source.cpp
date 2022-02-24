_ZN1N13setAnnotationEPc(argv, classe1)
{
	taille = strlen(argv[1]);
	memcpy(classe1, argv[1], taille)
}

Classe void
[
	buffer[106];
]
main
{
	si argc < 2
		exit;
	Allocation instance classe 1;
	_ZN1NC2Ei(classe1);
	Allocation instance classe 2;
	_ZN1NC2Ei(classe2);

	_ZN1N13setAnnotationEPc(argv, classe1)

}