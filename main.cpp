#include "Individuo.h"
#include "Lugar.h"
#include "Zorro.h"
#include "Conejo.h"


int main()
{
    Zorro zorro = Zorro();
    Conejo conejo = Conejo();
    cout << zorro.tipo() << "\n" << conejo.tipo() << endl;

    conejo.setVivo();

    if (conejo.getVivo() == true)
        cout << "esta vivo" << endl;
    if (conejo.getVivo() == false)
        cout << "ta mas tieso que mi verg*" << endl;

    return 0;
}
