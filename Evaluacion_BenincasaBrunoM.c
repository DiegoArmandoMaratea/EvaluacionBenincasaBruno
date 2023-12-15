#include Evaluacion.h
#include MKL25Z4.h

int Main(){
Multiplexor_init();
while (1)
{
ControlLeds(5, 0);
ControlLeds(8, 0);
    if (Multiplexor()= 1)
    {
        ContadorAcen();
        ControlLeds(5, 1);

    }else if (Multiplexor()= 0)
    {
        ContadorDecen();
        ControlLeds(8, 1);
    }
}
}
