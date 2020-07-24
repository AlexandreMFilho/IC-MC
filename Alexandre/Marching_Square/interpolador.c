float interpolador(float,float,float);

float interpolador(float v1,float v2,float alfa){
  v = (alfa-v1)/(v2-v1);
  return v1+(v*(v2-v1));
}
