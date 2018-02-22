#include <stdio.h>

struct trojkat{
   float x,y,z;
};

float ob(struct trojkat tr){
    
    
    return tr.x+tr.y+tr.z;
}

void  zmiana(struct trojkat troj1, struct trojkat *troj2){

*troj2=troj1;
}
    
    


int main()
{
    struct trojkat tr;
    tr.x =5;
    tr.y =6;
    tr.z =2;
    
    struct trojkat tr2;
    tr.x =51;
    tr.y =6;
    tr.z =2;
    
    
    printf("obwod trojkata to %.2f\n",ob(tr));
    zmiana(tr,&tr2);
    
    return 0;
}
