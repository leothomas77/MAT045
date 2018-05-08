//Lista 2 Questao D - Album de fotos
#include <stdio.h>
int
main ()
{
  int x, y, l1, h1, l2, h2;
  int colou_fotos = 0;;

  scanf ("%d %d", &x, &y);	// dimensoes da pagina

  scanf ("%d %d", &l1, &h1);	// dimensoes da foto 1
  scanf ("%d %d", &l2, &h2);	// dimensoes da foto 2

  //posicao 1
  if ((l1 + l2) <= x && h1 <= y && h2 <= y)
    {
      colou_fotos++;
    }

  //posicao 2
  if ((l1 + h2) <= x && h1 <= y && l2 <= y)
    {
      colou_fotos++;
    }

  //posicao 3
  if ((h1 + l2) <= x && l1 <= y && h2 <= y)
    {
      colou_fotos++;
    }

  //posicao 4
  if ((h1 + h2) <= x && l1 <= y && l2 <= y)
    {
      colou_fotos++;
    }


  if (colou_fotos)
    {
      printf ("S\n");
    }
  else
    {
      printf ("N\n");
    }

  return 0;
}
