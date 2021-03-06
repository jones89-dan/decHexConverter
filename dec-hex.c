//  dec-hex.c
//  Dec-Hex
//  Decimal-to-hexadecimal and hexadecimal-to-decimal conversion
//  Created by Daniel Jones on 2/21/22.
//

#include <stdio.h>

int main(void)
{
  unsigned int unsignedInteger;
  unsigned int bitPattern;

  printf("Enter an unsigned decimal integer: ");
  scanf("%u", &unsignedInteger);

  printf("Enter a bit pattern in hexadecimal: ");
  scanf("%x", &bitPattern);

  printf("%u is stored as %#010x, and\n", unsignedInteger, unsignedInteger);
  printf("%#010x represents the unsigned decimal integer %u\n",
             bitPattern, bitPattern);

  return 0;
}
