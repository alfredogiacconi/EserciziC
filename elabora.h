void elabora(int contenitore_parametri, char *parametri[]) {
  char buffer[4];
  strncopy(buffer, parametri[1], sizeof(buffer));
  printf(%s\n, buffer);
  printf(%2.2x %2.2x %2.2x\n, 
         (unsigned char) buffer[0],
         (unsigned char) buffer[1],
         (unsigned char) buffer[3])
}
