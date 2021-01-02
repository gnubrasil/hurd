# Boot script file for booting GNU Hurd.  Each line specifies a file to be
# loaded by the boot loader (the first word), and actions to be done with it.
# Arquivo de script de inicialização para inicializar o GNU Hurd. Cada linha especifica um arquivo a ser
# carregado pelo gerenciador de inicialização (a primeira palavra) e as ações a serem realizadas com ele.

# First, the bootstrap filesystem.  It needs several ports as arguments,
# as well as the user flags from the boot loader.
# Primeiro, o sistema de arquivos bootstrap. Ele precisa de várias portas como argumentos,
# bem como os sinalizadores de usuário do carregador de boot.
/hurd/ext2fs --multiboot-command-line=${kernel-command-line} --host-priv-port=${host-port} --device-master-port=${device-port} --exec-server-task=${exec-task} -T device ${root-device} $(task-create) $(task-resume)

# Now the exec server; to load the dynamically-linked exec server program,
# we have the boot loader in fact load and run ld.so, which in turn
# loads and runs /hurd/exec.  This task is created, and its task port saved
# in ${exec-task} to be passed to the fs above, but it is left suspended;
# the fs will resume the exec task once it is ready.
# Agora o servidor exec; para carregar o programa servidor exec vinculado dinamicamente,
# temos o carregador de boot de fato carregado e executado ld.so, que por sua vez
# carrega e executa / hurd / exec. Esta tarefa é criada e sua porta de tarefa salva
# em $ {exec-task} a ser passado para o fs acima, mas é deixado suspenso;
# o fs retomará a tarefa exec assim que estiver pronta.
/lib/ld.so /hurd/exec $(exec-task=task-create)
