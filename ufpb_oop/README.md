 # 📝 Exercícios de Programação Orientada a Objetos 
Coletânea de exercícios elaborados na disciplina de Programação Orientada a Objetos ministrada na Universidade Federal da Paraíba (UFPB). 

 # 🖥️ Arquivo 01.cpp

 ## 👤 Class People
Apresenta os seguintes conceitos:

- Encapsulamento
  - `protected`
  - `public`
- `this`
  
## 👩🏻‍🏫 Class Teacher 
É uma subclasse da classe base `People`, derivando assim seu membro (`age`) e acresentando um novo membro(`siape`).

## 👨🏻‍🏫 Class Visiting_teacher
É uma subclasse da subclasse `Teacher` que deriva seus membros (´age` e `siape`) e acresentando um novo membro (`code`).

 ## 🎯 Main
 Na função, há a adição de pessoas, professores e professores visitantes com seus respectivos dados e a apresntação dessas informações. 

 Assim,é notório de que somente a subclasse "Visiting_teacher" consegue ter acesso aos membros `age`, `siape` e `code` pois ela é derivada da subclasse `Teacher` que por sua vez se deriva da classe base `People`.
 
 Esse exercício apresenta como ocorre o conceito de herança em POO. 