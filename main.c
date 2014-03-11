#include <stdio.h>

#include "helpers.h"

//GtkWidget *fenetre_creer(char *argsString, ...)
//{
//  va_list args;

//  //va_start(args, count);

//  var_end();
//}

int main()
{
  GList *listArgs = lire_args("titre couleur hauteur largeur etc");

  // parcourir la liste des arguments
  GList *cour = listArgs;
  while(cour)
  {
    printf("%s\n", (char*) cour->data);
    cour = cour->next;
  }

  return 0;
}

