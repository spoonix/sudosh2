#include "super.h"

void
mklogdir (char *logdir)
{
  struct stat d;
  mode_t logdir_mode;

  logdir_mode = S_IRUSR | S_IWUSR | S_IXUSR | S_IWGRP | S_IXGRP |
    S_IWOTH | S_IXOTH | S_IFDIR;

  /* Make the log dir if it doesn't exist */
  if (stat (logdir, &d) == -1)
    {
      if (mkdir (logdir, logdir_mode) == -1)
	{
	  char str[BUFSIZ];

	  snprintf (str, BUFSIZ - 1, "mkdir(%s)", logdir);
	  perror (str);
	  fprintf (stderr,
		   "Directory %s needs to exist and be created by root with the permissions of 0733\n",
		   logdir);
	  exit (EXIT_FAILURE);
	}
<<<<<<< HEAD
      fprintf (stderr, "[info]: created directory %s\r\n",
	       logdir);
=======
      fprintf (stderr, "[info]: created directory %s\r\n", logdir);
>>>>>>> 5c766b9514232365e6d2c778c8a52d705bfa1b5c
    }

  /* Set perms if they're not what we require */
  if (d.st_mode != logdir_mode)
<<<<<<< HEAD
      {
=======
    {
>>>>>>> 5c766b9514232365e6d2c778c8a52d705bfa1b5c
      if (chmod (logdir, logdir_mode) == -1)
	{
	  char str[BUFSIZ];

	  snprintf (str, BUFSIZ - 1, "chmod(%s)", logdir);
	  perror (str);
	  fprintf (stderr,
		   "Directory %s needs to to have its permissions set to 0733.\n",
		   logdir);
	  exit (EXIT_FAILURE);
	}
<<<<<<< HEAD
      fprintf (stderr, "[info]: chmod 0733 directory %s\n",
	       logdir);
    }
}

=======
      fprintf (stderr, "[info]: chmod 0733 directory %s\n", logdir);
    }
}
>>>>>>> 5c766b9514232365e6d2c778c8a52d705bfa1b5c
