struct agenda{
	char nome[100];
	char telefone[10];
	char celular[10];
	int tam;
};
void cadastro(struct agenda pt[]); //função para o cadastro de contatos na agenda
void statusagenda(struct agenda pt[]); //função que mostra o estado da agenda
void pesquisarcontatos(struct agenda pt[]); //função para pesquisar um contato na agenda
void alterarcontatos(struct agenda pt[]); //função para alterar um contato na agenda
void excluircontato(struct agenda pt[]); //função para excluir um contato da agenda
void exibircontatos(struct agenda pt[]); //função que mostra todos os contatos cadastrados
