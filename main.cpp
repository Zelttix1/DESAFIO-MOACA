#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    srand(time(0)); 
    
    string nome, posicao;
    int numero, canto, cantoGol;
    
    cout << "--------- BEM VINDO AO SIMULADOR DA COPA DO MUNDO ---------\n";
    
    cout << "Digite seu nome: ";
    cin >> nome;
    
    cout << "Digite seu numero: ";
    cin >> numero;
    
    cout << "Digite sua posição: ";
    cin >> posicao;
    
    cout << "---------- FASE DE GRUPOS ----------";
    
    cout << R"(

+---------+------------+---+---+---+---+---+----+
| GRUPO A | TIME       | P | J | V | E | D | SG |
+---------+------------+---+---+---+---+---+----+
|         | Brasil     | 0 | 0 | 0 | 0 | 0 |  0 |
|         | França     | 0 | 0 | 0 | 0 | 0 |  0 |
|         | Japão      | 0 | 0 | 0 | 1 | 0 |  0 |
|         | Canadá     | 0 | 0 | 0 | 1 | 0 |  0 |
+---------+------------+---+---+---+---+---+----+

+---------+------------+---+---+---+---+---+----+
| GRUPO B | TIME       | P | J | V | E | D | SG |
+---------+------------+---+---+---+---+---+----+
|         | Argentina  | 0 | 0 | 0 | 0 | 0 |  0 |
|         | Alemanha   | 0 | 0 | 0 | 0 | 0 |  0 |
|         | México     | 0 | 0 | 0 | 0 | 0 |  0 |
|         | EUA        | 0 | 0 | 0 | 0 | 0 |  0 |
+---------+------------+---+---+---+---+---+----+

)";

    cout << "Então voce é o " << nome << " sua posição é " << posicao << ", e o seu numero é: " << numero << "!\n\n";
    
    cout << "---------- SEU PRIMEIRO JOGO É CONTRA O JAPÃO ----------\n\n";

    cout << "escolha o canto que voce vai bater: \n 1- SupDireito\n 2- InfDireito\n 3- Meio\n 4- SupEsquerdo\n 5- InfEsquerdo\n";
    cin >> canto;

    cantoGol = rand() % 5 + 1; 
    if(canto == cantoGol) {
        cout << "🧤 GOLEIRO DEFENDEU! VOCE ERROU O PENALTI!\n";
        return 0;
    } else {
        cout << "⚽ GOOOOOOL!\n\n";
        cout << "O placar agora é de: 1 X 0\n\n";
        cout << "O goleiro pulou no canto: " << cantoGol << "\n\n";
    }

    cout << "---- Depois de um belo contra-ataque o Japão empata o placar! ----\n\n";
    cout << "---- Agora o placar está em 1x1! ----\n\n";

    cout << "No final do jogo tem uma falta: \n\n";
    cout << "---------- PRA VOCE TER A CHANCE DE BATER A FALTA VOCE TEM QUE SER CAMISA: 9, 10 OU 11\n\n";

    if(numero == 10 || numero == 11 || numero == 9){
        cout << "escolha o canto que voce vai bater: \n 1- SupDireito\n 2- InfDireito\n 3- Meio\n 4- SupEsquerdo\n 5- InfEsquerdo\n\n";
        cin >> canto;
        
        cantoGol = rand() % 5 + 1; 
        
        if (canto == cantoGol){
            cout << "🧤 GOLEIRO DEFENDEU! VOCE PERDEU A FALTA!\n\n";
            cout << "DEPOIS DISSO A SELEÇÃO É ELIMINADA NA FASE DE GRUPOS!\n\n";
            
            cout << R"(

+---------+------------+---+---+---+---+---+----+
| GRUPO A | TIME       | P | J | V | E | D | SG |
+---------+------------+---+---+---+---+---+----+
|         | França     | 6 | 2 | 2 | 0 | 0 | +3 |
|         | Japão      | 4 | 2 | 1 | 1 | 0 | +1 |
|         | Brasil     | 1 | 2 | 0 | 1 | 1 | -1 |
|         | Canadá     | 0 | 2 | 0 | 0 | 2 | -3 |
+---------+------------+---+---+---+---+---+----+

❌ BRASIL ELIMINADO NA FASE DE GRUPOS

)";
            return 0;
        } else {
            cout << "⚽ GOOOOOOL!!! QUE GOLAÇO!!!\n";
            cout << "Placar agora é de: 2 X 1\n\n";
        }

    } else {
        cout << "--------- O BRASIL EMPATA O JOGO ----------\n\n";
        cout << "DEPOIS DESSE EMPATE A SELEÇÃO NÃO CONSEGUE ENCAIXAR E É ELIMINADA NA FASE DE GRUPOS!\n\n";
        
        cout << R"(

+---------+------------+---+---+---+---+---+----+
| GRUPO A | TIME       | P | J | V | E | D | SG |
+---------+------------+---+---+---+---+---+----+
|         | França     | 6 | 2 | 2 | 0 | 0 | +3 |
|         | Japão      | 4 | 2 | 1 | 1 | 0 | +1 |
|         | Brasil     | 1 | 2 | 0 | 1 | 1 | -1 |
|         | Canadá     | 0 | 2 | 0 | 0 | 2 | -3 |
+---------+------------+---+---+---+---+---+----+

❌ BRASIL ELIMINADO NA FASE DE GRUPOS

)";
        return 0;
    }
    
    cout << R"(

+---------+------------+---+---+---+---+---+----+
| GRUPO A | TIME       | P | J | V | E | D | SG |
+---------+------------+---+---+---+---+---+----+
|         | Brasil     | 6 | 2 | 2 | 0 | 0 | +4 |
|         | França     | 3 | 2 | 1 | 0 | 1 |  0 |
|         | Japão      | 1 | 2 | 0 | 1 | 1 | -2 |
|         | Canadá     | 1 | 2 | 0 | 1 | 1 | -2 |
+---------+------------+---+---+---+---+---+----+

✅ BRASIL CLASSIFICADO PARA O MATA-MATA!

)";

    



    
    
    

    return 0;
}
