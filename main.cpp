#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    srand(time(0)); 
    
    string nome, posicao;
    int numero, canto, cantoGol, acao;
    bool ganhou = false;
    bool penalti = false;
    bool certo = false;
    bool hattrick = false;
    bool vitoriaArg = false;
    bool vitoriaArgDois = false;
    
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

    cout << "Escolha o canto que voce vai bater:\n";
    cout << "1- SupDireito\n2- InfDireito\n3- Meio\n4- SupEsquerdo\n5- InfEsquerdo\n";
    cin >> canto;

    cantoGol = rand() % 5 + 1;

    if(canto == cantoGol){
        cout << "\n🧤 GOLEIRO DEFENDEU ❌\nGAME OVER!";
        return 0;
    } else {
        cout << "\n⚽ GOOOOOOL!\n";
    }

    cout << "\nPlacar agora é de: 1 x 0\n\n";
    cout << "---- Depois de um belo contra-ataque o Japão empata o placar! ----\n\n";
    cout << "---- Agora o placar está em 1x1! ----\n\n";
    cout << "No final do jogo tem uma falta:\n\n";
    cout << "Pra voce bater a falta voce precisa ser camisa 9, 10 ou 11\n\n";

    if(numero == 9 || numero == 10 || numero == 11){
        cout << "Escolha o canto da falta:\n";
        cout << "1- SupDireito\n2- InfDireito\n3- Meio\n4- SupEsquerdo\n5- InfEsquerdo\n";
        cin >> canto;
        cantoGol = rand() % 5 + 1;

        if(canto != cantoGol){
            cout << "\n⚽ GOLAÇO!!!\n";
            cout << "\nPlacar final: 2 x 1\n";
            cout << "BRASIL CLASSIFICADO! 🇧🇷🔥\n";
            ganhou = true;
        } else {
            cout << "\n🧤 GOLEIRO DEFENDEU A FALTA ❌\nO Brasil empata e é eliminado.";
            return 0;
        }
    } else {
        cout << "\nVocê não é o batedor oficial.\n";
        cout << "O Brasil empata e é eliminado.\n";
        return 0;
    }
    
   
    if(ganhou){
        cout << R"(
            +---------+------------+---+---+---+---+---+----+
            | GRUPO A | TIME       | P | J | V | E | D | SG |
            +---------+------------+---+---+---+---+---+----+
            |         | Brasil     | 6 | 3 | 2 | 0 | 1 |  3 |
            |         | França     | 6 | 3 | 2 | 0 | 1 |  2 |
            |         | Japão      | 3 | 3 | 1 | 0 | 2 | -2 |
            |         | Canadá     | 3 | 3 | 1 | 0 | 2 | -3 |
            +---------+------------+---+---+---+---+---+----+

         BRASIL CLASSIFICADO PARA AS OITAVAS DE FINAL!
)";

        cout << "--------- O BRASIL AVANÇA RUMO AO HEXA ---------";
        
        cout << R"(
-------------------- SEMIFINAIS DA COPA --------------------
                🇧🇷 BRASIL
                   │
                   ├──────────────┐
                🇦🇷 ARGENTINA      │
                                  │
                              FINAL DA COPA
                                  │
                🇫🇷 FRANÇA         │
                   ├──────────────┘
                🇩🇪 ALEMANHA
)";

        cout << "--------- E COMEÇA O JOGO ENTRE BRASIL E ARGENTINA ---------\n\n";
        cout << "No primeiro lance do jogo tem um penalti para a argentina:\n\n ESCOLHA O CANTO QUE O GOLEIRO VAI PULAR:\n\n1- SupDireito\n2- InfDireito\n3- Meio\n4- SupEsquerdo\n5- InfEsquerdo\n";
        cin >> canto;
        cantoGol = rand() % 5 + 1;
        
        if(canto == cantoGol){
            cout << "\n⚽O GOLEIRO SALVA O BRASIL";
            penalti = true;
        } else {
            cout << "\n1 X 0 PARA A ARGENTINA! ❌\n";
            penalti = false;
        }
        
       
        if(penalti == true){
            cout << "\nDEPOIS DE UM MILAGRE QUE O GOLEIRO FAZ A SELEÇÃO FINALMENTE TEM UMA OPORTUNIDADE DE ATACAR!";
            cout << "\nA BOLA CAI EM SEUS PÉS FORA DA ARÉA QUAL A SUA AÇÃO:\n\n";
            cout << "1- CHUTAR DE FORA DA ARÉA\n2- TENTAR ACHAR UM PASSE\n3- TENTAR DRIBLAR PARA SE INFILTRAR NA ZAGA\n";
            cin >> acao;
            
            switch(acao){
                case 1:
                cout << "QUE PAULADA DE FORA DA AREA!";
                certo = true;
                break;
                case 2: 
                cout << "VOCE ERRA O PASSE!";
                certo = false;
                break;
                case 3:
                cout << "UM GOLACO AO ESTILO MESSI!!!!";
                certo = true;
                break;
                default:
                cout << "OPCAO INVALIDA!";
                break;
            }

            if(certo){
                cout << "\n-------------------- 1 X 0 PARA O BRASIL --------------------";
                cout << "\nMESMO COM A VANTAGEM NO PLACAR O JOGO CONTINUA TRUNCADO E DIFICIL!";
                cout << "\nMESSI PEGA NA BOLA, DEIXA A MARCAÇÃO PARA TRÁS E ACHA UM PASSE FENOMENAL NO MEIO DA ZAGA BRASILEIRA\n\n -------------------- 1 X 1 --------------------\n\n A ALEGRIA BRASILEIRA DUROU POUCO!\n\n";
            }
        } 
       
        else {
            cout << "-------------------- A ARGENTINA VEM COM A VANTAGEM DE 0 X 1 --------------------\n\n";
            cout << "MESSI PEGA NA BOLA, DEIXA A MARCAÇÃO PARA TRÁS E ACHA UM PASSE FENOMENAL NO MEIO DA ZAGA BRASILEIRA\n\n -------------------- 0 X 2 --------------------\n\n O JOGO QUE JÁ ESTAVA DIFICL ACABOU DE PIORAR!\n\n";
        }

        
        cout << "A PARTIDA CONTINUA EXTREMAMENTE TRUNCADA, E ESSE GOL ACABOU DE DAR UM GÁS A MAIS PARA OS HERMANOS!\n\n";
        cout << "FINALMENTE ACABA O PRIMEIRO TEMPO, MAS A SELEÇÃO ESTÁ EM TOTAL DESVANTAGEM!\n\n";
        
        cout << R"(
-------------------- ESTATÍSTICAS DA PARTIDA --------------------
                  BRASIL  x  ARGENTINA
                +----------------------------------+--------+---------+
                | ESTATÍSTICA                      | BRASIL |   ARG   |
                +----------------------------------+--------+---------+
                | Posse de bola                    |  32%   |   68%   |
                | Finalizações                     |   3    |   18    |
                | Defesas do goleiro               |   8    |   1     |
                +----------------------------------+--------+---------+
)";

        cout << "---------- VAMOS TORCER PARA QUE A SELEÇÃO ACORDE NO SEGUNDO TEMPO! ----------\n\n";
        cout << "NO COMEÇO DO SEGUNDO TEMPO NICO PAZ SE DESMARCA E FICA APENAS ELE E O GOLEIRO!\n\n 1 X 2 (ou 0x3) PARA A ARGENTINA\n\n QUE VIRADA DOS HERMANOS\n\n A SELEÇÃO BRASILEIRA FICA NA PIOR!!!\n\n";
        cout << "SERÁ QUE ESSE É O FIM DO SONHO DA AMARELINHA?\n\n";
        cout << "UM ERRO INESPERADO ACONTECEU, O ZAGUEIRO ARGENTINO RESBALA E DEIXA A BOLA SOBRANDO NO SEU PÉ";
        cout << "\nESCOLHA SUA AÇÃO:\n\n 1- DRIBLAR O GOLEIRO\n 2- CAVAR\n 3- TOCAR E FAZER UM GOL VOVÓ\n";
        cin >> acao;

        if(acao == 1){
            cout << "VOCE SE EMBANANA TUDO E DESPERDIÇA A CHANCE DA SELEÇÃO EMPATAR O JOGO\n";
            cout << "----------- A SELEÇÃO PERDE O JOGO -----------";
            return 0;
        } else if(acao == 2) {
            cout << "QUE GOLAÇO DE CAVADINHA!!!!!\n\n ----------- A SELEÇÃO EMPATA COM UM GOLAÇO -----------";
            hattrick = true;
        } else {
            cout << "VOCÊ TOCA E SEU COMPANHEIRO MARCA O GOL DE EMPATE\n\n TUDO IGUAL NO PLACAR ATUALMENTE!!!";
            hattrick = false; 
        }

       
        if(hattrick){
             cout << "\nDEPOIS DO GOLAÇO QUE VOCE FEZ A ARGENTINA COMEÇOU A TROPEÇAR NOS PRÓPRIOS PÉS:\n\n PÊNALTI!!!!!!!!!!! PÊNALTI PARA A SELEÇÃO BRASILEIRA!!!!!!!";
             cout << "\nESCOLHA O CANTO: ";
             cin >> canto;
             cantoGol = rand() % 5 + 1;
             if(canto != cantoGol) vitoriaArg = true;
        } else {
            cout << "\nA PARTIDA VAI PROS PÊNALTIS\n\n ESCOLHA O SEU CANTO E REZE:\n";
            cin >> canto;
            cantoGol = rand() % 5 + 1;
            if(canto != cantoGol) vitoriaArg = true;
        }

        if(vitoriaArg){
            cout << "\n⚽ GOOOOOOL!!! BRASIL NA FINAL!!!!\n";
            cout << R"(
-------------------- FINAL DA COPA DO MUNDO --------------------
                    🇧🇷 BRASIL  x  ALEMANHA 🇩🇪
            O JOGO MAIS IMPORTANTE DA SUA CARREIRA COMEÇA AGORA!
)";

                cout << "\n--------- COMEÇA A FINAL DA COPA DO MUNDO ---------\n\n";
        cout << "A Alemanha começa pressionando muito!\n\n";
        cout << "Com 10 minutos de jogo, cruzamento na área e o atacante alemão cabeceia...\n\n";
        cout << "ESCOLHA O QUE VOCÊ VAI FAZER:\n\n";
        cout << "1- TENTAR TIRAR DE CABEÇA\n2- TENTAR DOMINAR\n3- DEIXAR PRO GOLEIRO\n";
        cin >> acao;

        if(acao == 1){
            cout << "\nVOCÊ SOBE MAIS ALTO QUE TODO MUNDO E TIRA A BOLA!\n";
        } 
        else if(acao == 2){
            cout << "\nVOCÊ ERRA O DOMÍNIO E A ALEMANHA FAZ O GOL ❌\n";
            cout << "----------- 1 X 0 PARA A ALEMANHA -----------\n";
        } 
        else {
            cout << "\nO GOLEIRO SAI MAL E A ALEMANHA FAZ O GOL ❌\n";
            cout << "----------- 1 X 0 PARA A ALEMANHA -----------\n";
        }

        cout << "\nO BRASIL COMEÇA A REAGIR NO JOGO!\n";
        cout << "A bola sobra pra você na entrada da área!\n\n";
        cout << "ESCOLHA SUA AÇÃO:\n\n";
        cout << "1- CHUTAR DE PRIMEIRA\n2- DOMINAR E CHUTAR\n3- DRIBLAR O ZAGUEIRO\n";
        cin >> acao;

        if(acao == 1){
            cout << "\nQUE CHUTAÇO!!! ⚽ GOOOOOOL DO BRASIL!!!\n";
            cout << "----------- 1 X 1 -----------\n";
        }
        else if(acao == 2){
            cout << "\nVOCÊ DOMINA, MAS DEMORA MUITO E A ZAGA CORTA ❌\n";
        }
        else {
            cout << "\nVOCÊ DRIBLA O ZAGUEIRO E CHUTA NO CANTO!!! ⚽ GOOOOOOL!!!\n";
            cout << "----------- 1 X 1 -----------\n";
        }

        cout << "\nO JOGO FICA MUITO EQUILIBRADO!\n\n";
        cout << "NO FINAL DO SEGUNDO TEMPO TEM FALTA PARA O BRASIL!\n";
        cout << "SÓ VOCÊ PODE BATER ESSA FALTA!\n\n";

        cout << "ESCOLHA O CANTO:\n";
        cout << "1- SupDireito\n2- InfDireito\n3- Meio\n4- SupEsquerdo\n5- InfEsquerdo\n";
        cin >> canto;

        cantoGol = rand() % 5 + 1;

        if(canto != cantoGol){
            cout << "\n⚽ GOLAÇO!!!!!!!!!\n";
            cout << "----------- 2 X 1 PARA O BRASIL -----------\n";
        } 
        else {
            cout << "\n🧤 O GOLEIRO DEFENDE!!!!\n";
            cout << "O JOGO VAI PARA OS PÊNALTIS!\n\n";

            cout << "ESCOLHA O CANTO DO PÊNALTI:\n";
            cin >> canto;
            cantoGol = rand() % 5 + 1;

            if(canto != cantoGol){
                cout << "\n⚽ GOOOOOOL!!!\n";
                cout << "----------- BRASIL CAMPEÃO DO MUNDO -----------\n";
            } else {
                cout << "\n🧤 DEFENDEU...\n";
                cout << "----------- A ALEMANHA É CAMPEÃ -----------\n";
                return 0;
            }
        }

        cout << R"(

-------------------- FIM DA FINAL --------------------

        🇧🇷 BRASIL CAMPEÃO DO MUNDO 🇧🇷

                ⭐⭐⭐⭐⭐⭐ HEXA ⭐⭐⭐⭐⭐⭐

        PARABÉNS " )" << nome << R"( " !!!

)";
        } else {
            cout << "\n🧤 DEFENDEU! O SONHO ACABOU.";
        }
    }

    return 0;
}