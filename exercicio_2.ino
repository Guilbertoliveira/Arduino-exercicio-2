  int Pisca;

  
void setup() {
  // put your setup code here, to run once:


  // Esse exercicio demonstra como funciona a entrada de corrente eletrica com o input
  
 pinMode (10, OUTPUT);
 pinMode (9, OUTPUT);
 pinMode (8, OUTPUT);
 pinMode (7, INPUT);

  Pisca = 500;

}

void loop() {


// criando botao para fazer a verificação se ele esta ativo ou não

int estadoBotao;

// com isso fazemos a comparação com o digitalRead e colocamos na variavel estadoBotao

estadoBotao = digitalRead(7);


  
  digitalWrite (10, estadoBotao);
  
  
  digitalWrite (9, estadoBotao);
 
   
   digitalWrite (8, estadoBotao);
   
}
