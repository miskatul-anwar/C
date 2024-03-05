#include <stdio.h>
int main()
{
  char entered_str[30],ch;
  printf("Enter a data to analyze: ");
  gets(entered_str);
  int vowel, consonant, word, digit, other, i;
  i=vowel=consonant=word=digit=other=0;
  while((ch=entered_str[i])!='\0')
  {
    if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A'|| ch=='E'|| ch=='I'|| ch=='O' || ch=='U')
    {
      vowel++;
    }
    else if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z'))
    {
      consonant++;
    }
    else if(ch>='0' && ch<='9')
    {
      digit++;
    }
    else if(ch==' ')
    {
      word+=2;
    }
    else 
    {
      other++;
    }
    i++;
  }
  printf("Number of vowels: \t%d\n", vowel);
  printf("Number of consonants: \t%d\n", consonant);
  printf("Number of digits: \t%d\n",digit);
  printf("Number of words: \t%d\n",word);
  printf("Number of others: \t%d\n", other);

}
