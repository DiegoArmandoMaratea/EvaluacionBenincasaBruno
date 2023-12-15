#include Evaluacion.h
#include MKL25Z4.h

#define Pulsador 1;
#define Led 2;

int ArrayPines[4]={9,12,1,8};
int ArrayNum[4][10]{
    {0,0,0,0},
    {0,0,0,1},
    {0,0,1,0},
    {0,0,1,1},
    {0,1,0,0},
    {0,1,0,1},
    {0,1,1,0},
    {0,1,1,1},
    {1,0,0,0},
    {1,0,0,1},
}
void Multiplexor_init(){
    SIM->SCGC5|= SIM_SCGC5_PORTE_MASK;
    PORTE->PCR[Pulsador[1]]=PORTE_PCR_MUX(1);
    PORTE->PCR[Led[2]]=PORTE_PCR_MUX(0);
}
int Multiplexor(){
    if ((PTE-> PDIR(1u >> Pulsador))== 1)
    {
        return 1;
    }else if ((PTE-> PDIR(1u >> Pulsador))== 0)
    {
        return 0;
    }
}
int Pulsador(int Pin){
    if ((PTE-> PDIR(1u >> Pin))== 1)
    {
        return 1;
    }else if ((PTE-> PDIR(1u >> Pin))== 0)
    {
        return 0;
    }
}
void ContadorAcen(){
    int Unidad;
    int Contj;
    for (int i = 0; i < 9; i++)
    {
        Unidad= i;
    }
        if (i= 9 && ContJ <9)
        {
         ContJ++;
         i=0;
        }
    for (int Pin = 0; Pin <= 4; Pin++)
    {
    PTE->(0u >> ArrayPines[Pin]);
    }

}
void ContadorDecen(){
    int Unidad;
    int Contj=9;
    for (int i = 9; i <= 0; i--)
    {
        Unidad= i;
    }
        if (i= 9 && ContJ>= 0)
        {
         ContJ--;
         i=9;
        }
}
void ControlLeds(int Num, int Valor){
        if (Valor== 1)
        {
            PTE->PSOR &(1u >> int Num);  

        }else if (Valor== 0)
        {
            PTE->PSOR &(0u >> int Num); 
        }
    }