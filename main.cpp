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

    switch(canto){

        case 1:
            if(canto != cantoGol){
                cout << "\n⚽ GOOOOOOL NO CANTO SUPERIOR DIREITO!\n";
            } else {
                cout << "\n🧤 GOLEIRO DEFENDEU NO LADO DIREITO ❌\n";
                return 0;
            }
            break;

        case 2:
            if(canto != cantoGol){
                cout << "\n⚽ GOOOOOOL NO CANTO INFERIOR DIREITO!\n";
            } else {
                cout << "\n🧤 GOLEIRO DEFENDEU NO LADO DIREITO ❌\n";
                return 0;
            }
            break;

        case 3:
            if(canto != cantoGol){
                cout << "\n⚽ GOOOOOOL NO MEIO!\n";
            } else {
                cout << "\n🧤 GOLEIRO FICOU PARADO E DEFENDEU ❌\n";
                return 0;
            }
            break;

        case 4:
            if(canto != cantoGol){
                cout << "\n⚽ GOOOOOOL NO CANTO SUPERIOR ESQUERDO!\n";
            } else {
                cout << "\n🧤 GOLEIRO DEFENDEU NO LADO ESQUERDO ❌\n";
                return 0;
            }
            break;

        case 5:
            if(canto != cantoGol){
                cout << "\n⚽ GOOOOOOL NO CANTO INFERIOR ESQUERDO!\n";
            } else {
                cout << "\n🧤 GOLEIRO DEFENDEU NO LADO ESQUERDO ❌\n";
                return 0;
            }
            break;

        default:
            cout << "Opção inválida!\n";
            return 0;
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

        switch(canto){

            case 1:
                if(canto != cantoGol){
                    cout << "\n⚽ GOLAÇO NO CANTO SUPERIOR DIREITO!!!\n";
                } else {
                    cout << "\n🧤 GOLEIRO DEFENDEU A FALTA ❌\n";
                    return 0;
                }
                break;

            case 2:
                if(canto != cantoGol){
                    cout << "\n⚽ GOLAÇO NO CANTO INFERIOR DIREITO!!!\n";
                } else {
                    cout << "\n🧤 GOLEIRO DEFENDEU A FALTA ❌\n";
                    return 0;
                }
                break;

            case 3:
                if(canto != cantoGol){
                    cout << "\n⚽ GOLAÇO NO MEIO!!!\n";
                } else {
                    cout << "\n🧤 GOLEIRO DEFENDEU A FALTA ❌\n";
                    return 0;
                }
                break;

            case 4:
                if(canto != cantoGol){
                    cout << "\n⚽ GOLAÇO NO CANTO SUPERIOR ESQUERDO!!!\n";
                } else {
                    cout << "\n🧤 GOLEIRO DEFENDEU A FALTA ❌\n";
                    return 0;
                }
                break;

            case 5:
                if(canto != cantoGol){
                    cout << "\n⚽ GOLAÇO NO CANTO INFERIOR ESQUERDO!!!\n";
                } else {
                    cout << "\n🧤 GOLEIRO DEFENDEU A FALTA ❌\n";
                    return 0;
                }
                break;

            default:
                cout << "Opção inválida!\n";
                return 0;
        }
        
        if

        cout << "\nPlacar final: 2 x 1\n";
        cout << "BRASIL CLASSIFICADO! 🇧🇷🔥\n";
        ganhou = true;

    } else {
        cout << "\nVocê não é o batedor oficial.\n";
        cout << "O Brasil empata e é eliminado.\n";
    }
    
    if(ganhou == true){
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
                   │
                   │
                   ├──────────────┐
                   │              │
                   │              │
                🇦🇷 ARGENTINA      │
                                  │
                                  │
                                  │
                              FINAL DA COPA
                                  │
                                  │
                                  │
                🇫🇷 FRANÇA         │
                   │              │
                   │              │
                   ├──────────────┘
                   │
                   │
                🇩🇪 ALEMANHA

)";

            cout << "--------- E COMEÇA O JOGO ENTRE BRASIL E ARGENTINA ---------";
            
            cout << "No primeiro lance do jogo tem um penalti para a argentina:\n\n ESCOLHA O CANTO QUE O GOLEIRO VAI PULAR:\n\n1- SupDireito\n2- InfDireito\n3- Meio\n4- SupEsquerdo\n5- InfEsquerdo\n";
            
            cin >> canto 
            
            cantoGol = rand() % 5 + 1;
            
            switch(canto){

            case 1:
                if(canto == cantoGol){
                    cout << "\n⚽O GOLEIRO SALVA O BRASIL";
                    penalti = true;
                } else {
                    cout << "\n1 X 0 PARA A ARGENTINA! ❌\n";
                    return 0;
                }
                break;

            case 2:
                if(canto == cantoGol){
                    cout << "\n⚽O GOLEIRO SALVA O BRASIL";
                    penalti = true;
                } else {
                    cout << "\n 1 X 0 PARA A ARGENTINA! ❌\n";
                    return 0;
                }
                break;

            case 3:
                if(canto == cantoGol){
                    cout << "\n⚽O GOLEIRO SALVA O BRASIL";
                    penalti = true;
                } else {
                    cout << "\n 1 X 0 PARA A ARGENTINA! ❌\n";
                    return 0;
                }
                break;

            case 4:
                if(canto == cantoGol){
                    cout << "\n⚽O GOLEIRO SALVA O BRASIL";
                    penalti = true;
                } else {
                    cout << "\n 1 X 0 PARA A ARGENTINA! ❌\n"
                    return 0;
                }
                break;

            case 5:
                if(canto == cantoGol){
                    cout << "\n⚽O GOLEIRO SALVA O BRASIL";
                    penalti = true;
                } else {
                    cout << "\n 1 X 0 PARA A ARGENTINA! ❌\n";
                    return 0;
                }
                break;

            default:
                cout << "Opção inválida!\n";
                return 0;
        }
        
        if(penalti = true){
            cout << "DEPOIS DE UM MILAGRE QUE O GOLEIRO FAZ A SELEÇÃO FINALMENTE TEM UMA OPORTUNIDADE DE ATACAR!"
            
            cout << "A BOLA CAI EM SEUS PÉS FORA DA ARÉA QUAL A SUA AÇÃO:\n\n";
            
            cout << "1- CHUTAR DE FORA DA ARÉA\n 2- TENTAR ACHAR UM PASSE\n 3- TENTAR DRIBLAR PARA SE INFILTRAR NA ZAGA\n";
            
            switch(acao){
                case 1:
                    cout << "QUE PAULADA DE FORA DA ARÉA!!!\n\n UM GOLAÇO ANTOLÓGICO!!!";
                    certo = true;
                    break;
                case 2:
                    cout << "INFELIZMENTE SEU PASSE FOI INTERCEPTADO\n\n";
                    break;
                case 3: 
                    cout << "UM GOL PUSKAS!!!!\n\n NO ESTILO MESSI HUMILHANDO A ZAGA E DEIXANDO TODOS NO CHÃO!!!!";
                    certo = true;
                    break;
                default:
                    cout << "opção inválida";
            }
            
            if(certo = true){
               cout << "-------------------- 1 X 0 PARA O BRASIL --------------------";
               
               cout << "MESMO COM A VANTAGEM NO PLACAR O JOGO CONTINUA TRUNCADO E DIFICIL!";
               
               cout << "MESSI PEGA NA BOLA, DEIXA A MARCAÇÃO PARA TRÁS E ACHA UM PASSE FENOMENAL NO MEIO DA ZAGA BRASILEIRA\n\n -------------------- 1 X 1 --------------------\n\n A ALEGRIA BRASILEIRA DUROU POUCO!\n\n"
               
               cout << "A PARTIDA CONTINUA EXTREMAMENTE TRUNCADA, E ESSE GOL ACABOU DE DAR UM GÁS A MAIS PARA OS HERMANOS!\n\n";
               
               COUT << "FINALMENTE ACABA O PRIMEIRO TEMPO, MAS A SELEÇÃO ESTÁ EM TOTAL DESVANTAGEM!\n\n";
               
               cout << R"(

-------------------- ESTATÍSTICAS DA PARTIDA --------------------

                  BRASIL  x  ARGENTINA

                                +----------------------------------+--------+---------+
                                | ESTATÍSTICA                      | BRASIL |   ARG   |
                                +----------------------------------+--------+---------+
                                | Posse de bola                    |  32%   |   68%   |
                                | Finalizações                     |   3    |   18    |
                                | Finalizações no gol              |   1    |   11    |
                                | Escanteios                       |   1    |    9    |
                                | Passes certos                    |  142   |   489   |
                                | Faltas cometidas                 |   10   |    6    |
                                | Cartões amarelos                 |   3    |    1    |
                                | Defesas do goleiro               |   8    |    1    |
                                | Chances claras de gol            |   0    |    7    |
                                +----------------------------------+--------+---------+

)";

               cout << "---------- VAMOS TORCER PARA QUE A SELEÇÃO ACORDE NO SEGUNDO TEMPO! ----------\n\n";
               
               cout << "NO COMEÇO DO SEGUNDO TEMPO NICO PAZ SE DESMARCA E FICA APENAS ELE E O GOLEIRO!\n\n 1 X 2 PARA A ARGENTINA\n\n QUE VIRADA DOS HERMANOS\n\n A SELEÇÃO BRASILEIRA FICA NA PIOR!!!\n\n";
               
               cout << "SERÁ QUE ESSE É O FIM DO SONHO DA AMARELINHA?\n\n";
               
               cout << "UM ERRO INESPERADO ACONTECEU, O ZAGUEIRO ARGENTINO RESBALA E DEIXA A BOLA SOBRANDO NO SEU PÉ";
               
               cout << "ESCOLHA SUA AÇÃO:\n\n 1- DRIBLAR O GOLEIRO\n\n 2- CAVAR\n\n 3- TOCAR E FAZER UM GOL VOVÓ\n\n";
               
               cin >> acao;
               
               switch(acao){
                   case 1:
                        cout << "VOCE SE EMBANANA TUDO E DESPERDIÇA A CHANCE DA SELEÇÃO EMPATAR O JOGO\n";
                        cout << "----------- A SELEÇÃO PERDE POR 1 X 3 -----------";
                   return 0;
                   break;
                   case 2:
                       cout << "QUE GOLAÇO DE CAVADINHA!!!!!\n\n QUE ATUAÇÃO HISTÓRICA QUE VOCE ESTÁ FAZENDO!!!\n\n ----------- A SELEÇÃO EMPATA COM UM GOLAÇO -----------";
                       certo = true;
                       hattrick = true;
                       break;
                  case 3:
                       cout << "VOCÊ TOCA E SEU COMPANHEIRO MARCA O GOL DE EMPATE\n\n TUDO IGUAL NO PLACAR ATUALMENTE!!!";
                       certo = true;
                       break;
               }
             
             if(hattrick = true){
                 cout << "DEPOIS DO GOLAÇO QUE VOCE FEZ A ARGENTINA COMEÇOU A TROPEÇAR NOS PRÓPRIOS PÉS:\n\n COM ISSO VOCE VIU UMA BRECHA NA DEFESA, VOCÊ CORRE PEDINDO UM LANÇAMENTO, MAS É PUXADO POR UM DOS ZAGUEIROS ARGENTINOS NA ARÉA\n\n PÊNALTI!!!!!!!!!!! PÊNALTI PARA A SELEÇÃO BRASILEIRA!!!!!!!";
                 
                 cout << "VOCE VAI PARA O PÊNALTI MAIS DECISIVO DA SUA VIDA NO MOMENTO!!\n\n ESCOLHA SABIAMENTE O CANTO QUE VOCE VAI BATER!\n\n";
                 
                 cout << "1- SupDireito\n2- InfDireito\n3- Meio\n4- SupEsquerdo\n5- InfEsquerdo\n";
                 
                 cin >> canto;
                 
                 cantoGol = rand() % 5 + 1;
                 
                 switch(canto){

         case 1:
            if(canto != cantoGol){
                cout << "\n⚽ GOOOOOOL NO CANTO SUPERIOR DIREITO!\n\n A SELEÇÃO BRASILEIRA CHEGA NA FINAL DEPOIS DE UM JOGO HISTÓICO CONTRA SUA MAIOR RIVAL!!!!\n";
                vitoriaArg = true;
            } else {
                cout << "\n🧤 GOLEIRO DEFENDEU NO LADO DIREITO ❌\n";
                return 0;
            }
            break;

        case 2:
            if(canto != cantoGol){
                cout << "\n⚽ GOOOOOOL NO CANTO INFERIOR DIREITO!\n\n A SELEÇÃO BRASILEIRA CHEGA NA FINAL DEPOIS DE UM JOGO HISTÓICO CONTRA SUA MAIOR RIVAL!!!!\n";
                vitoriaArg = true;
            } else {
                cout << "\n🧤 GOLEIRO DEFENDEU NO LADO DIREITO ❌\n";
                return 0;
            }
            break;

        case 3:
            if(canto != cantoGol){
                cout << "\n⚽ GOOOOOOL NO MEIO!\n\n A SELEÇÃO BRASILEIRA CHEGA NA FINAL DEPOIS DE UM JOGO HISTÓICO CONTRA SUA MAIOR RIVAL!!!!\n";
                vitoriaArg = true;
            } else {
                cout << "\n🧤 GOLEIRO FICOU PARADO E DEFENDEU ❌\n";
                return 0;
            }
            break;

        case 4:
            if(canto != cantoGol){
                cout << "\n⚽ GOOOOOOL NO CANTO SUPERIOR ESQUERDO!\n\n A SELEÇÃO BRASILEIRA CHEGA NA FINAL DEPOIS DE UM JOGO HISTÓICO CONTRA SUA MAIOR RIVAL!!!!";
                vitoriaArg = true;
            } else {
                cout << "\n🧤 GOLEIRO DEFENDEU NO LADO ESQUERDO ❌\n";
                return 0;
            }
            break;

        case 5:
            if(canto != cantoGol){
                cout << "\n⚽ GOOOOOOL NO CANTO INFERIOR ESQUERDO!\n\n A SELEÇÃO BRASILEIRA CHEGA NA SEMIFINAL DEPOIS DE UM JOGO HISTÓICO CONTRA SUA MAIOR RIVAL"
                vitoriaArg = true;
            } else {
                cout << "\n🧤 GOLEIRO DEFENDEU NO LADO ESQUERDO ❌\n";
                return 0;
            }
            break;

        default:
            cout << "Opção inválida!\n";
            return 0;
    }
            if(vitoriaArg == true){
                cout << R"(

-------------------- FASE FINAL DA COPA --------------------

                🇧🇷 BRASIL
                   │
                   │
                   │
                   ├──────────────┐
                   │              │
                   │              │
                🇦🇷 ARGENTINA      │
                                  │
                                  │
                                  │
                         🇧🇷 BRASIL NA FINAL
                                  │
                                  │
                                  │
                🇫🇷 FRANÇA         │
                   │              │
                   │              │
                   ├──────────────┘
                   │
                   │
                🇩🇪 ALEMANHA


-------------------- FINAL DA COPA DO MUNDO --------------------

                    🇧🇷 BRASIL  x  🇩🇪 ALEMANHA

            O JOGO MAIS IMPORTANTE DA SUA CARREIRA COMEÇA AGORA!

)";
            }else {
                cout << "VOCE PERDEU O PÊNALTI, MAS NAO PERDEU AS ESPERANÇAS"
            }
                 
             }
               
            } else {
                cout << "-------------------- O JOGO CONTINUA EMPATADO EM 0 X 0 --------------------\n\n";
                cout << "MESSI PEGA NA BOLA, DEIXA A MARCAÇÃO PARA TRÁS E ACHA UM PASSE FENOMENAL NO MEIO DA ZAGA BRASILEIRA\n\n -------------------- 0 X 1 --------------------\n\n O JOGO QUE JÁ ESTAVA DIFICL ACABOU DE PIORAR!\n\n"
                
                
            }
        }
            
            
    } else {
        cout << R"(

            +---------+------------+---+---+---+---+---+----+
            | GRUPO A | TIME       | P | J | V | E | D | SG |
            +---------+------------+---+---+---+---+---+----+
            |         | França     | 7 | 3 | 2 | 1 | 0 |  4 |
            |         | Japão      | 4 | 3 | 1 | 1 | 1 |  0 |
            |         | Brasil     | 3 | 3 | 1 | 0 | 2 | -1 |
            |         | Canadá     | 3 | 3 | 1 | 0 | 2 | -3 |
            +---------+------------+---+---+---+---+---+----+

            ❌ BRASIL ELIMINADO NA FASE DE GRUPOS

)";
    return 0;
    }
    
    
    

    return 0;
}