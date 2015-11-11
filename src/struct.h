
struct s_option {
    char logdir[BUFSIZ];
    char defshell[BUFSIZ];
    char fdl;
    int priority;
    int facility;
    int clearenvironment;
<<<<<<< HEAD
=======
    int immutable_recordings;
>>>>>>> 5c766b9514232365e6d2c778c8a52d705bfa1b5c
    char argallow[BUFSIZ];
};

typedef struct s_option option;
