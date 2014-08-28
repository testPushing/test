char str[] = {"You win! What could I have asked to guess this answer?"};
char str2[] = {"Give a question answering yes for your answer, and no for my answer: "};
int len = strlen(str);
for(i=0;i<len;i++) {
  putchar(str[i]);
  sleep(20);
}
sleep(30);
int len = strlen(str2);
for(i=0;i<len;i++) {
  putchar(str2[i]);
  sleep(20);
}