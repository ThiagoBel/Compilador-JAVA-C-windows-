### Compilador de Java usando C++
Ele funciona **APENAS** para Windows, pois usa o **BATCH** para rodar.

# Como usar?
- **1. Tenha o Java instalado.**  
  - É necessário para conseguir executar os arquivos Java.
  
- **2. Coloque o programa e o seu arquivo `.java` na mesma pasta.**  
  - Isso é importante para que o programa encontre o arquivo Java corretamente.

- **3. Escolha como executar o programa:**  
  - Se você tiver o **MinGW** instalado, execute pelo código C++.
  - Caso contrário, use o arquivo `.exe` fornecido.

- **4. Informe o nome do arquivo Java quando solicitado.**  
  - Digite apenas o nome do arquivo, **sem a extensão**.  
    Exemplo: Para `MeuPrograma.java`, digite apenas `MeuPrograma`.  
  - Certifique-se de que o arquivo realmente termina com `.java`, pois o programa só funciona com essa extensão.

- **5. Caso algo dê errado:**  
  - Abra o **Prompt de Comando** e digite:  
    - `java -version`  
    - `javac -version`  
  - Pressione **ENTER** após cada comando.  
  - Ambos devem mostrar as versões instaladas. Se não aparecerem, pode ser que o Java não esteja instalado corretamente.

# Como funciona?
- **1. O programa cria automaticamente um arquivo `.bat` (script do Windows).**  
  - Ele inclui as informações necessárias, como o nome do arquivo Java.  

- **2. O arquivo `.bat` executa o Java diretamente.**  
  - Ele compila e executa o seu programa usando o Batch.

