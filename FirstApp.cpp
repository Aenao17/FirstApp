#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int da;
struct absente
{
    int zi, luna, an;
    bool motivata;
};
struct bazadate
{
    int cod;
    char nume[51], prenume[101];
    int notemate[11], noterom[11], notefizica[11], notechimie[11], noteinfo[11], noteeng[11], noteesp[11], noteist[11], notegeo[11], notebio[11];
    int tezamate, tezarom, tezafizica, tezachimie, tezainfo, tezaeng, tezaesp, tezaist, tezageo, tezabio;
    float medmate, medrom, medfizica, medchimie, medinfo, medeng, medesp, medist, medgeo, medbio;
    int nrmate, nrrom, nrfizica, nrchimie, nrinfo, nreng, nresp, nrist, nrgeo, nrbio;
    float mediemate, medierom, mediefizica, mediechimie, medieinfo, medieeng, medieesp, medieist, mediegeo, mediebio, mediegenerala;
    absente mate[10], rom[10], fizica[10], chimie[10], info[10], eng[10], esp[10], ist[10], geo[10], bio[10];
    int nrabsmate, nrabsrom, nrabsfizica, nrabschimie, nrabsinfo, nrabseng, nrabsesp, nrabsist, nrabsgeo, nrabsbio, nrabstotal;
} elev[41];
void start()
{
    fstream f("memory.txt");
    int i = 1;
    f >> da;
    while (f >> elev[i].cod)
    {
        int j;
        f >> elev[i].nume >> elev[i].prenume;
        f >> elev[i].nrmate;
        for (j = 0; j < elev[i].nrmate; j++)
            f >> elev[i].notemate[j];
        f >> elev[i].nrrom;
        for (j = 0; j < elev[i].nrrom; j++)
            f >> elev[i].noterom[j];
        f >> elev[i].nrfizica;
        for (j = 0; j < elev[i].nrfizica; j++)
            f >> elev[i].notefizica[j];
        f >> elev[i].nrchimie;
        for (j = 0; j < elev[i].nrchimie; j++)
            f >> elev[i].notechimie[j];
        f >> elev[i].nrinfo;
        for (j = 0; j < elev[i].nrinfo; j++)
            f >> elev[i].noteinfo[j];
        f >> elev[i].nreng;
        for (j = 0; j < elev[i].nreng; j++)
            f >> elev[i].noteeng[j];
        f >> elev[i].nresp;
        for (j = 0; j < elev[i].nresp; j++)
            f >> elev[i].noteesp[j];
        f >> elev[i].nrist;
        for (j = 0; j < elev[i].nrist; j++)
            f >> elev[i].noteist[j];
        f >> elev[i].nrgeo;
        for (j = 0; j < elev[i].nrgeo; j++)
            f >> elev[i].notegeo[j];
        f >> elev[i].nrbio;
        for (j = 0; j < elev[i].nrbio; j++)
            f >> elev[i].notebio[j];
        f >> elev[i].tezamate >> elev[i].tezarom >> elev[i].tezafizica >> elev[i].tezachimie >> elev[i].tezainfo >> elev[i].tezaeng >> elev[i].tezaesp >> elev[i].tezaist >> elev[i].tezageo >> elev[i].tezabio;
        f >> elev[i].medmate >> elev[i].medrom >> elev[i].medfizica >> elev[i].medchimie >> elev[i].medinfo >> elev[i].medeng >> elev[i].medesp >> elev[i].medist >> elev[i].medgeo >> elev[i].medbio;
        f >> elev[i].mediemate >> elev[i].medierom >> elev[i].mediefizica >> elev[i].mediechimie >> elev[i].medieinfo >> elev[i].medieeng >> elev[i].medieesp >> elev[i].medieist >> elev[i].mediegeo >> elev[i].mediebio;
        f >> elev[i].mediegenerala;
        f >> elev[i].nrabsmate;
        for (j = 0; j < elev[i].nrabsmate; j++)
            f >> elev[i].mate[j].zi >> elev[i].mate[j].luna >> elev[i].mate[j].an >> elev[i].mate[j].motivata;
        f >> elev[i].nrabsrom;
        for (j = 0; j < elev[i].nrabsrom; j++)
            f >> elev[i].rom[j].zi >> elev[i].rom[j].luna >> elev[i].rom[j].an >> elev[i].rom[j].motivata;
        f >> elev[i].nrabsfizica;
        for (j = 0; j < elev[i].nrabsfizica; j++)
            f >> elev[i].fizica[j].zi >> elev[i].fizica[j].luna >> elev[i].fizica[j].an >> elev[i].fizica[j].motivata;
        f >> elev[i].nrabschimie;
        for (j = 0; j < elev[i].nrabschimie; j++)
            f >> elev[i].chimie[j].zi >> elev[i].chimie[j].luna >> elev[i].chimie[j].an >> elev[i].chimie[j].motivata;
        f >> elev[i].nrabsinfo;
        for (j = 0; j < elev[i].nrabsinfo; j++)
            f >> elev[i].info[j].zi >> elev[i].info[j].luna >> elev[i].info[j].an >> elev[i].info[j].motivata;
        f >> elev[i].nrabseng;
        for (j = 0; j < elev[i].nrabseng; j++)
            f >> elev[i].eng[j].zi >> elev[i].eng[j].luna >> elev[i].eng[j].an >> elev[i].eng[j].motivata;
        f >> elev[i].nrabsesp;
        for (j = 0; j < elev[i].nrabsesp; j++)
            f >> elev[i].esp[j].zi >> elev[i].esp[j].luna >> elev[i].esp[j].an >> elev[i].esp[j].motivata;
        f >> elev[i].nrabsist;
        for (j = 0; j < elev[i].nrabsist; j++)
            f >> elev[i].ist[j].zi >> elev[i].ist[j].luna >> elev[i].ist[j].an >> elev[i].ist[j].motivata;
        f >> elev[i].nrabsgeo;
        for (j = 0; j < elev[i].nrabsgeo; j++)
            f >> elev[i].geo[j].zi >> elev[i].geo[j].luna >> elev[i].geo[j].an >> elev[i].geo[j].motivata;
        f >> elev[i].nrabsbio;
        for (j = 0; j < elev[i].nrabsbio; j++)
            f >> elev[i].bio[j].zi >> elev[i].bio[j].luna >> elev[i].bio[j].an >> elev[i].bio[j].motivata;
        f >> elev[i].nrabstotal;
        i++;
    }
}
void finish()
{
    fstream g("memory.txt");
    int i = da;
    g << da << endl;
    while (i >= 1)
    {
        int j;
        g << elev[i].cod << " ";
        g << elev[i].nume << " " << elev[i].prenume << " ";
        g << elev[i].nrmate << " ";
        for (j = 0; j < elev[i].nrmate; j++)
            g << elev[i].notemate[j] << " ";
        g << elev[i].nrrom << " ";
        for (j = 0; j < elev[i].nrrom; j++)
            g << elev[i].noterom[j] << " ";
        g << elev[i].nrfizica << " ";
        for (j = 0; j < elev[i].nrfizica; j++)
            g << elev[i].notefizica[j] << " ";
        g << elev[i].nrchimie << " ";
        for (j = 0; j < elev[i].nrchimie; j++)
            g << elev[i].notechimie[j] << " ";
        g << elev[i].nrinfo << " ";
        for (j = 0; j < elev[i].nrinfo; j++)
            g << elev[i].noteinfo[j] << " ";
        g << elev[i].nreng << " ";
        for (j = 0; j < elev[i].nreng; j++)
            g << elev[i].noteeng[j] << " ";
        g << elev[i].nresp << " ";
        for (j = 0; j < elev[i].nresp; j++)
            g << elev[i].noteesp[j] << " ";
        g << elev[i].nrist << " ";
        for (j = 0; j < elev[i].nrist; j++)
            g << elev[i].noteist[j] << " ";
        g << elev[i].nrgeo << " ";
        for (j = 0; j < elev[i].nrgeo; j++)
            g << elev[i].notegeo[j] << " ";
        g << elev[i].nrbio << " ";
        for (j = 0; j < elev[i].nrbio; j++)
            g << elev[i].notebio[j] << " ";
        g << elev[i].tezamate << " " << elev[i].tezarom << " " << elev[i].tezafizica << " " << elev[i].tezachimie << " " << elev[i].tezainfo << " " << elev[i].tezaeng << " " << elev[i].tezaesp << " " << elev[i].tezaist << " " << elev[i].tezageo << " " << elev[i].tezabio << " ";
        g << elev[i].medmate << " " << elev[i].medrom << " " << elev[i].medfizica << " " << elev[i].medchimie << " " << elev[i].medinfo << " " << elev[i].medeng << " " << elev[i].medesp << " " << elev[i].medist << " " << elev[i].medgeo << " " << elev[i].medbio << " ";
        g << fixed << setprecision(2) << elev[i].mediemate << " " << fixed << setprecision(2) << elev[i].medierom << " " << fixed << setprecision(2) << elev[i].mediefizica << " " << fixed << setprecision(2) << elev[i].mediechimie << " " << fixed << setprecision(2) << elev[i].medieinfo << " " << fixed << setprecision(2) << elev[i].medieeng << " " << fixed << setprecision(2) << elev[i].medieesp << " " << fixed << setprecision(2) << elev[i].medieist << " " << fixed << setprecision(2) << elev[i].mediegeo << " " << fixed << setprecision(2) << elev[i].mediebio << " ";
        g << elev[i].mediegenerala << " ";
        g << elev[i].nrabsmate << " ";
        for (j = 0; j < elev[i].nrabsmate; j++)
            g << elev[i].mate[j].zi << " " << elev[i].mate[j].luna << " " << elev[i].mate[j].an << " " << elev[i].mate[j].motivata << " ";
        g << elev[i].nrabsrom << " ";
        for (j = 0; j < elev[i].nrabsrom; j++)
            g << elev[i].rom[j].zi << " " << elev[i].rom[j].luna << " " << elev[i].rom[j].an << " " << elev[i].rom[j].motivata << " ";
        g << elev[i].nrabsfizica << " ";
        for (j = 0; j < elev[i].nrabsfizica; j++)
            g << elev[i].fizica[j].zi << " " << elev[i].fizica[j].luna << " " << elev[i].fizica[j].an << " " << elev[i].fizica[j].motivata << " ";
        g << elev[i].nrabschimie << " ";
        for (j = 0; j < elev[i].nrabschimie; j++)
            g << elev[i].chimie[j].zi << " " << elev[i].chimie[j].luna << " " << elev[i].chimie[j].an << " " << elev[i].chimie[j].motivata << " ";
        g << elev[i].nrabsinfo << " ";
        for (j = 0; j < elev[i].nrabsinfo; j++)
            g << elev[i].info[j].zi << " " << elev[i].info[j].luna << " " << elev[i].info[j].an << " " << elev[i].info[j].motivata << " ";
        g << elev[i].nrabseng << " ";
        for (j = 0; j < elev[i].nrabseng; j++)
            g << elev[i].eng[j].zi << " " << elev[i].eng[j].luna << " " << elev[i].eng[j].an << " " << elev[i].eng[j].motivata << " ";
        g << elev[i].nrabsesp << " ";
        for (j = 0; j < elev[i].nrabsesp; j++)
            g << elev[i].esp[j].zi << " " << elev[i].esp[j].luna << " " << elev[i].esp[j].an << " " << elev[i].esp[j].motivata << " ";
        g << elev[i].nrabsist << " ";
        for (j = 0; j < elev[i].nrabsist; j++)
            g << elev[i].ist[j].zi << " " << elev[i].ist[j].luna << " " << elev[i].ist[j].an << " " << elev[i].ist[j].motivata << " ";
        g << elev[i].nrabsgeo << " ";
        for (j = 0; j < elev[i].nrabsgeo; j++)
            g << elev[i].geo[j].zi << " " << elev[i].geo[j].luna << " " << elev[i].geo[j].an << " " << elev[i].geo[j].motivata << " ";
        g << elev[i].nrabsbio << " ";
        for (j = 0; j < elev[i].nrabsbio; j++)
            g << elev[i].bio[j].zi << " " << elev[i].bio[j].luna << " " << elev[i].bio[j].an << " " << elev[i].bio[j].motivata << " ";
        g << elev[i].nrabstotal;
        i--;
        g << endl;
    }
}
void meniu_adaugareelev()
{
    da++;
    int i = da, j;
    char aux[256], a[256];
    elev[i].cod = i;
    cout << "Nume:";
    cin >> elev[i].nume;
    cout << "Prenume:";
    cin >> elev[i].prenume;
    cout << endl << "Terminat." << endl << endl;
}
void afis_cresca__()
{
    int ok = 0;
    while (ok == 0)
    {
        ok = 1;
        for (int i = 1; i < da; i++)
            if (strcmp(elev[i + 1].nume, elev[i].nume) < 0)
                swap(elev[i], elev[i + 1]), ok = 0;
            else if (strcmp(elev[i + 1].nume, elev[i].nume) == 0)
            {
                if (strcmp(elev[i + 1].prenume, elev[i].prenume) < 0)
                    swap(elev[i], elev[i + 1]), ok = 0;
            }
    }
    cout << endl << "Cod" << " " << "Nume" << endl;
    for (int i = 1; i <= da; i++)
        cout << " " << elev[i].cod << "  " << elev[i].nume << " " << elev[i].prenume << endl;
}
void afis_cresca()
{
    int ok = 0;
    while (ok == 0)
    {
        ok = 1;
        for (int i = 1; i < da; i++)
            if (strcmp(elev[i + 1].nume, elev[i].nume) < 0)
                swap(elev[i], elev[i + 1]), ok = 0;
            else if (strcmp(elev[i + 1].nume, elev[i].nume) == 0)
            {
                if (strcmp(elev[i + 1].prenume, elev[i].prenume) < 0)
                    swap(elev[i], elev[i + 1]), ok = 0;
            }
    }
    cout << endl << "Cod" << " " << "Nume" << "              " << "Prenume" << "                  " << "Medie generala" << "   " << "Numar absente" << endl;
    for (int i = 1; i <= da; i++)
    {
        cout << " " << elev[i].cod << "  " << elev[i].nume;
        int x = strlen(elev[i].nume);
        for (int j = 17; j >= x; j--)
            cout << " ";
        cout << elev[i].prenume;
        x = strlen(elev[i].prenume);
        for (int j = 23; j >= x; j--)
            cout << " ";
        cout << "      " << fixed << setprecision(2) << elev[i].mediegenerala << "       " << " " << "      " << elev[i].nrabstotal << endl;
    }
}
void afis_descresca()
{
    int ok = 0;
    while (ok == 0)
    {
        ok = 1;
        for (int i = 1; i < da; i++)
            if (strcmp(elev[i + 1].nume, elev[i].nume) > 0)
                swap(elev[i], elev[i + 1]), ok = 0;
            else if (strcmp(elev[i + 1].nume, elev[i].nume) == 0)
            {
                if (strcmp(elev[i + 1].prenume, elev[i].prenume) > 0)
                    swap(elev[i], elev[i + 1]), ok = 0;
            }
    }
    cout << endl << "Cod" << " " << "Nume" << "             " << "Prenume" << "                  " << "Medie generala" << "   " << "Numar absente" << endl;
    for (int i = 1; i <= da; i++)
    {
        cout << " " << elev[i].cod << "  " << elev[i].nume;
        int x = strlen(elev[i].nume);
        for (int j = 17; j >= x; j--)
            cout << " ";
        cout << elev[i].prenume;
        x = strlen(elev[i].prenume);
        for (int j = 23; j >= x; j--)
            cout << " ";
        cout << "      " << fixed << setprecision(2) << elev[i].mediegenerala << "       " << " " << "      " << elev[i].nrabstotal << endl;
    }
}
void calculare_medii()
{
    int i;
    for (i = 1; i <= da; i++)
    {
        int x, y;
        elev[i].medmate = elev[i].medrom = elev[i].medfizica = elev[i].medchimie = elev[i].medinfo = elev[i].medeng = elev[i].medesp = elev[i].medist = elev[i].medgeo = elev[i].medbio = 0;
        if (elev[i].nrmate && elev[i].tezamate)
        {
            for (int j = 0; j < elev[i].nrmate; j++)
                elev[i].medmate += elev[i].notemate[j];
            elev[i].medmate /= elev[i].nrmate;
            x = elev[i].medmate * 100;
            y = elev[i].medmate;
            if (x % 100 >= 50)
                elev[i].medmate = y + 1;
            else
                elev[i].medmate = y;
            elev[i].mediemate = 1.00 * (3 * elev[i].medmate + elev[i].tezamate) / 4;
            x = elev[i].mediemate * 100;
            y = elev[i].mediemate;
            if (x % 100 >= 50)
                elev[i].mediemate = y + 1;
            else
                elev[i].mediemate = y;
        }
        if (elev[i].nrrom && elev[i].tezarom)
        {
            for (int j = 0; j < elev[i].nrrom; j++)
                elev[i].medrom += elev[i].noterom[j];
            elev[i].medrom /= elev[i].nrrom;
            x = elev[i].medrom * 100;
            y = elev[i].medrom;
            if (x % 100 >= 50)
                elev[i].medrom = y + 1;
            else
                elev[i].medrom = y;
            elev[i].medierom = 1.00 * (3 * elev[i].medrom + elev[i].tezarom) / 4;
            x = elev[i].medierom * 100;
            y = elev[i].medierom;
            if (x % 100 >= 50)
                elev[i].medierom = y + 1;
            else
                elev[i].medierom = y;
        }
        if (elev[i].nrfizica && elev[i].tezafizica)
        {
            for (int j = 0; j < elev[i].nrfizica; j++)
                elev[i].medfizica += elev[i].notefizica[j];
            elev[i].medfizica /= elev[i].nrfizica;
            x = elev[i].medfizica * 100;
            y = elev[i].medfizica;
            if (x % 100 >= 50)
                elev[i].medfizica = y + 1;
            else
                elev[i].medfizica = y;
            elev[i].mediefizica = 1.00 * (3 * elev[i].medfizica + elev[i].tezafizica) / 4;
            x = elev[i].mediefizica * 100;
            y = elev[i].mediefizica;
            if (x % 100 >= 50)
                elev[i].mediefizica = y + 1;
            else
                elev[i].mediefizica = y;
        }
        if (elev[i].nrchimie && elev[i].tezachimie)
        {
            for (int j = 0; j < elev[i].nrchimie; j++)
                elev[i].medchimie += elev[i].notechimie[j];
            elev[i].medchimie /= elev[i].nrchimie;
            x = elev[i].medchimie * 100;
            y = elev[i].medchimie;
            if (x % 100 >= 50)
                elev[i].medchimie = y + 1;
            else
                elev[i].medchimie = y;
            elev[i].mediechimie = 1.00 * (3 * elev[i].medchimie + elev[i].tezachimie) / 4;
            x = elev[i].mediechimie * 100;
            y = elev[i].mediechimie;
            if (x % 100 >= 50)
                elev[i].mediechimie = y + 1;
            else
                elev[i].mediechimie = y;
        }
        if (elev[i].nrinfo && elev[i].tezainfo)
        {
            for (int j = 0; j < elev[i].nrinfo; j++)
                elev[i].medinfo += elev[i].noteinfo[j];
            elev[i].medinfo /= elev[i].nrinfo;
            x = elev[i].medinfo * 100;
            y = elev[i].medinfo;
            if (x % 100 >= 50)
                elev[i].medinfo = y + 1;
            else
                elev[i].medinfo = y;
            elev[i].medieinfo = 1.00 * (3 * elev[i].medinfo + elev[i].tezainfo) / 4;
            x = elev[i].medieinfo * 100;
            y = elev[i].medieinfo;
            if (x % 100 >= 50)
                elev[i].medieinfo = y + 1;
            else
                elev[i].medieinfo = y;
        }
        if (elev[i].nreng && elev[i].tezaeng)
        {
            for (int j = 0; j < elev[i].nreng; j++)
                elev[i].medeng += elev[i].noteeng[j];
            elev[i].medeng /= elev[i].nreng;
            x = elev[i].medeng * 100;
            y = elev[i].medeng;
            if (x % 100 >= 50)
                elev[i].medeng = y + 1;
            else
                elev[i].medeng = y;
            elev[i].medieeng = 1.00 * (3 * elev[i].medeng + elev[i].tezaeng) / 4;
            x = elev[i].medieeng * 100;
            y = elev[i].medieeng;
            if (x % 100 >= 50)
                elev[i].medieeng = y + 1;
            else
                elev[i].medieeng = y;
        }
        if (elev[i].nresp && elev[i].tezaesp)
        {
            for (int j = 0; j < elev[i].nresp; j++)
                elev[i].medesp += elev[i].noteesp[j];
            elev[i].medesp /= elev[i].nresp;
            x = elev[i].medesp * 100;
            y = elev[i].medesp;
            if (x % 100 >= 50)
                elev[i].medesp = y + 1;
            else
                elev[i].medesp = y;
            elev[i].medieesp = 1.00 * (3 * elev[i].medesp + elev[i].tezaesp) / 4;
            x = elev[i].medieesp * 100;
            y = elev[i].medieesp;
            if (x % 100 >= 50)
                elev[i].medieesp = y + 1;
            else
                elev[i].medieesp = y;
        }
        if (elev[i].nrist && elev[i].tezaist)
        {
            for (int j = 0; j < elev[i].nrist; j++)
                elev[i].medist += elev[i].noteist[j];
            elev[i].medist /= elev[i].nrist;
            x = elev[i].medist * 100;
            y = elev[i].medist;
            if (x % 100 >= 50)
                elev[i].medist = y + 1;
            else
                elev[i].medist = y;
            elev[i].medieist = 1.00 * (3 * elev[i].medist + elev[i].tezaist) / 4;
            x = elev[i].medieist * 100;
            y = elev[i].medieist;
            if (x % 100 >= 50)
                elev[i].medieist = y + 1;
            else
                elev[i].medieist = y;
        }
        if (elev[i].nrgeo && elev[i].tezageo)
        {
            for (int j = 0; j < elev[i].nrgeo; j++)
                elev[i].medgeo += elev[i].notegeo[j];
            elev[i].medgeo /= elev[i].nrgeo;
            x = elev[i].medgeo * 100;
            y = elev[i].medgeo;
            if (x % 100 >= 50)
                elev[i].medgeo = y + 1;
            else
                elev[i].medgeo = y;
            elev[i].mediegeo = 1.00 * (3 * elev[i].medgeo + elev[i].tezageo) / 4;
            x = elev[i].mediegeo * 100;
            y = elev[i].mediegeo;
            if (x % 100 >= 50)
                elev[i].mediegeo = y + 1;
            else
                elev[i].mediegeo = y;
        }
        if (elev[i].nrbio && elev[i].tezabio)
        {
            for (int j = 0; j < elev[i].nrbio; j++)
                elev[i].medbio += elev[i].notebio[j];
            elev[i].medbio /= elev[i].nrbio;
            x = elev[i].medbio * 100;
            y = elev[i].medbio;
            if (x % 100 >= 50)
                elev[i].medbio = y + 1;
            else
                elev[i].medbio = y;
            elev[i].mediebio = 1.00 * (3 * elev[i].medbio + elev[i].tezabio) / 4;
            x = elev[i].mediebio * 100;
            y = elev[i].mediebio;
            if (x % 100 >= 50)
                elev[i].mediebio = y + 1;
            else
                elev[i].mediebio = y;
        }
        elev[i].mediegenerala = (elev[i].mediemate + elev[i].medierom + elev[i].mediefizica + elev[i].mediechimie + elev[i].medieinfo + elev[i].medieeng + elev[i].medieesp + elev[i].medieist + elev[i].mediegeo + elev[i].mediebio) / 10;
    }
}
void afis_crescm()
{
    int ok = 0;
    while (ok == 0)
    {
        ok = 1;
        for (int i = 1; i < da; i++)
            if (elev[i].mediegenerala > elev[i + 1].mediegenerala)
                swap(elev[i], elev[i + 1]);
            else if (elev[i].mediegenerala == elev[i + 1].mediegenerala)
            {
                if (strcmp(elev[i + 1].nume, elev[i].nume) < 0)
                    swap(elev[i], elev[i + 1]), ok = 0;
                else if (strcmp(elev[i + 1].nume, elev[i].nume) == 0)
                {
                    if (strcmp(elev[i + 1].prenume, elev[i].prenume) < 0)
                        swap(elev[i], elev[i + 1]), ok = 0;
                }
            }
    }
    ok = 0;
    while (ok == 0)
    {
        ok = 1;
        for (int i = 1; i < da; i++)
            if (elev[i].mediegenerala > elev[i + 1].mediegenerala)
                swap(elev[i], elev[i + 1]);
            else if (elev[i].mediegenerala == elev[i + 1].mediegenerala)
            {
                if (strcmp(elev[i + 1].nume, elev[i].nume) < 0)
                    swap(elev[i], elev[i + 1]), ok = 0;
                else if (strcmp(elev[i + 1].nume, elev[i].nume) == 0)
                {
                    if (strcmp(elev[i + 1].prenume, elev[i].prenume) < 0)
                        swap(elev[i], elev[i + 1]), ok = 0;
                }
            }
    }
    cout << endl << "Cod" << " " << "Nume" << "              " << "Prenume" << "                  " << "Medie generala" << "   " << "Numar absente" << endl;
    for (int i = 1; i <= da; i++)
    {
        cout << " " << elev[i].cod << "  " << elev[i].nume;
        int x = strlen(elev[i].nume);
        for (int j = 17; j >= x; j--)
            cout << " ";
        cout << elev[i].prenume;
        x = strlen(elev[i].prenume);
        for (int j = 23; j >= x; j--)
            cout << " ";
        cout << "      " << fixed << setprecision(2) << elev[i].mediegenerala << "       " << " " << "      " << elev[i].nrabstotal << endl;
    }
}
void afis_descrescm()
{
    int ok = 0;
    while (ok == 0)
    {
        ok = 1;
        for (int i = 1; i < da; i++)
            if (elev[i].mediegenerala < elev[i + 1].mediegenerala)
                swap(elev[i], elev[i + 1]);
            else if (elev[i].mediegenerala == elev[i + 1].mediegenerala)
            {
                if (strcmp(elev[i + 1].nume, elev[i].nume) > 0)
                    swap(elev[i], elev[i + 1]), ok = 0;
                else if (strcmp(elev[i + 1].nume, elev[i].nume) == 0)
                {
                    if (strcmp(elev[i + 1].prenume, elev[i].prenume) > 0)
                        swap(elev[i], elev[i + 1]), ok = 0;
                }
            }
    }
    ok = 0;
    while (ok == 0)
    {
        ok = 1;
        for (int i = 1; i < da; i++)
            if (elev[i].mediegenerala < elev[i + 1].mediegenerala)
                swap(elev[i], elev[i + 1]);
            else if (elev[i].mediegenerala == elev[i + 1].mediegenerala)
            {
                if (strcmp(elev[i + 1].nume, elev[i].nume) > 0)
                    swap(elev[i], elev[i + 1]), ok = 0;
                else if (strcmp(elev[i + 1].nume, elev[i].nume) == 0)
                {
                    if (strcmp(elev[i + 1].prenume, elev[i].prenume) > 0)
                        swap(elev[i], elev[i + 1]), ok = 0;
                }
            }
    }
    cout << endl << "Cod" << " " << "Nume" << "              " << "Prenume" << "                  " << "Medie generala" << "   " << "Numar absente" << endl;
    for (int i = 1; i <= da; i++)
    {
        cout << " " << elev[i].cod << "  " << elev[i].nume;
        int x = strlen(elev[i].nume);
        for (int j = 17; j >= x; j--)
            cout << " ";
        cout << elev[i].prenume;
        x = strlen(elev[i].prenume);
        for (int j = 23; j >= x; j--)
            cout << " ";
        cout << "      " << fixed << setprecision(2) << elev[i].mediegenerala << "       " << " " << "      " << elev[i].nrabstotal << endl;
    }
}
void afis_elev()
{
    cout << endl << "Selectati codul elevului:" << endl;
    afis_cresca__();
    cout << endl << "Cod:";
    int x, i = -1;
    cin >> x;
    for (int j = 1; j <= da && i == -1; j++)
        if (elev[j].cod == x)
            i = j;
    cout << endl << endl << elev[i].nume << " " << elev[i].prenume << endl;
    cout << "Note matematica:";
    for (int j = 0; j < elev[i].nrmate; j++)
        cout << elev[i].notemate[j] << "  ";
    cout << "TEZA:" << elev[i].tezamate << "  ";
    cout << "Medie:" << elev[i].mediemate << " ";
    cout << "Absente:";
    if (elev[i].nrabsmate == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabsmate; j++)
        {
            cout << elev[i].mate[j].zi << " " << elev[i].mate[j].luna << " " << elev[i].mate[j].an << " " << "Motivata:";
            if (elev[i].mate[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Limba Romana:";
    for (int j = 0; j < elev[i].nrrom; j++)
        cout << elev[i].noterom[j] << "  ";
    cout << "TEZA:" << elev[i].tezarom << "  ";
    cout << "Medie:" << elev[i].medierom << " ";
    cout << "Absente:";
    if (elev[i].nrabsrom == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabsrom; j++)
        {
            cout << elev[i].rom[j].zi << " " << elev[i].rom[j].luna << " " << elev[i].rom[j].an << " " << "Motivata:";
            if (elev[i].rom[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Fizica:";
    for (int j = 0; j < elev[i].nrfizica; j++)
        cout << elev[i].notefizica[j] << "  ";
    cout << "TEZA:" << elev[i].tezafizica << "  ";
    cout << "Medie:" << elev[i].mediefizica << " ";
    cout << "Absente:";
    if (elev[i].nrabsfizica == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabsfizica; j++)
        {
            cout << elev[i].fizica[j].zi << " " << elev[i].fizica[j].luna << " " << elev[i].fizica[j].an << " " << "Motivata:";
            if (elev[i].fizica[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Chimie:";
    for (int j = 0; j < elev[i].nrchimie; j++)
        cout << elev[i].notechimie[j] << "  ";
    cout << "TEZA:" << elev[i].tezachimie << "  ";
    cout << "Medie:" << elev[i].mediechimie << " ";
    cout << "Absente:";
    if (elev[i].nrabschimie == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabschimie; j++)
        {
            cout << elev[i].chimie[j].zi << " " << elev[i].chimie[j].luna << " " << elev[i].chimie[j].an << " " << "Motivata:";
            if (elev[i].chimie[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Informatica:";
    for (int j = 0; j < elev[i].nrinfo; j++)
        cout << elev[i].noteinfo[j] << "  ";
    cout << "TEZA:" << elev[i].tezainfo << "  ";
    cout << "Medie:" << elev[i].medieinfo << " ";
    cout << "Absente:";
    if (elev[i].nrabsinfo == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabsinfo; j++)
        {
            cout << elev[i].info[j].zi << " " << elev[i].info[j].luna << " " << elev[i].info[j].an << " " << "Motivata:";
            if (elev[i].info[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Engleza:";
    for (int j = 0; j < elev[i].nreng; j++)
        cout << elev[i].noteeng[j] << "  ";
    cout << "TEZA:" << elev[i].tezaeng << "  ";
    cout << "Medie:" << elev[i].medieeng << " ";
    cout << "Absente:";
    if (elev[i].nrabseng == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabseng; j++)
        {
            cout << elev[i].eng[j].zi << " " << elev[i].eng[j].luna << " " << elev[i].eng[j].an << " " << "Motivata:";
            if (elev[i].eng[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Spaniola:";
    for (int j = 0; j < elev[i].nresp; j++)
        cout << elev[i].noteesp[j] << "  ";
    cout << "TEZA:" << elev[i].tezaesp << "  ";
    cout << "Medie:" << elev[i].medieesp << " ";
    cout << "Absente:";
    if (elev[i].nrabsesp == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabsesp; j++)
        {
            cout << elev[i].esp[j].zi << " " << elev[i].esp[j].luna << " " << elev[i].esp[j].an << " " << "Motivata:";
            if (elev[i].esp[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Istorie:";
    for (int j = 0; j < elev[i].nrist; j++)
        cout << elev[i].noteist[j] << "  ";
    cout << "TEZA:" << elev[i].tezaist << "  ";
    cout << "Medie:" << elev[i].medieist << " ";
    cout << "Absente:";
    if (elev[i].nrabsist == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabsist; j++)
        {
            cout << elev[i].ist[j].zi << " " << elev[i].ist[j].luna << " " << elev[i].ist[j].an << " " << "Motivata:";
            if (elev[i].ist[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Geografie:";
    for (int j = 0; j < elev[i].nrgeo; j++)
        cout << elev[i].notegeo[j] << "  ";
    cout << "TEZA:" << elev[i].tezageo << "  ";
    cout << "Medie:" << elev[i].mediegeo << " ";
    cout << "Absente:";
    if (elev[i].nrabsgeo == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabsgeo; j++)
        {
            cout << elev[i].geo[j].zi << " " << elev[i].geo[j].luna << " " << elev[i].geo[j].an << " " << "Motivata:";
            if (elev[i].geo[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Biologie:";
    for (int j = 0; j < elev[i].nrbio; j++)
        cout << elev[i].notebio[j] << "  ";
    cout << "TEZA:" << elev[i].tezabio << "  ";
    cout << "Medie:" << elev[i].mediebio << " ";
    cout << "Absente:";
    if (elev[i].nrabsbio == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabsbio; j++)
        {
            cout << elev[i].bio[j].zi << " " << elev[i].bio[j].luna << " " << elev[i].bio[j].an << " " << "Motivata:";
            if (elev[i].bio[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Medie Generala:" << elev[i].mediegenerala << endl;
    cout << endl << "Terminat" << endl;
}
void afis_elev__(int i)
{
    cout << "Note matematica:";
    for (int j = 0; j < elev[i].nrmate; j++)
        cout << elev[i].notemate[j] << "  ";
    cout << "TEZA:" << elev[i].tezamate << "  ";
    cout << "Medie:" << elev[i].mediemate << " ";
    cout << "Absente:";
    if (elev[i].nrabsmate == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabsmate; j++)
        {
            cout << elev[i].mate[j].zi << " " << elev[i].mate[j].luna << " " << elev[i].mate[j].an << " " << "Motivata:";
            if (elev[i].mate[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Limba Romana:";
    for (int j = 0; j < elev[i].nrrom; j++)
        cout << elev[i].noterom[j] << "  ";
    cout << "TEZA:" << elev[i].tezarom << "  ";
    cout << "Medie:" << elev[i].medierom << " ";
    cout << "Absente:";
    if (elev[i].nrabsrom == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabsrom; j++)
        {
            cout << elev[i].rom[j].zi << " " << elev[i].rom[j].luna << " " << elev[i].rom[j].an << " " << "Motivata:";
            if (elev[i].rom[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Fizica:";
    for (int j = 0; j < elev[i].nrfizica; j++)
        cout << elev[i].notefizica[j] << "  ";
    cout << "TEZA:" << elev[i].tezafizica << "  ";
    cout << "Medie:" << elev[i].mediefizica << " ";
    cout << "Absente:";
    if (elev[i].nrabsfizica == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabsfizica; j++)
        {
            cout << elev[i].fizica[j].zi << " " << elev[i].fizica[j].luna << " " << elev[i].fizica[j].an << " " << "Motivata:";
            if (elev[i].fizica[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Chimie:";
    for (int j = 0; j < elev[i].nrchimie; j++)
        cout << elev[i].notechimie[j] << "  ";
    cout << "TEZA:" << elev[i].tezachimie << "  ";
    cout << "Medie:" << elev[i].mediechimie << " ";
    cout << "Absente:";
    if (elev[i].nrabschimie == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabschimie; j++)
        {
            cout << elev[i].chimie[j].zi << " " << elev[i].chimie[j].luna << " " << elev[i].chimie[j].an << " " << "Motivata:";
            if (elev[i].chimie[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Informatica:";
    for (int j = 0; j < elev[i].nrinfo; j++)
        cout << elev[i].noteinfo[j] << "  ";
    cout << "TEZA:" << elev[i].tezainfo << "  ";
    cout << "Medie:" << elev[i].medieinfo << " ";
    cout << "Absente:";
    if (elev[i].nrabsinfo == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabsinfo; j++)
        {
            cout << elev[i].info[j].zi << " " << elev[i].info[j].luna << " " << elev[i].info[j].an << " " << "Motivata:";
            if (elev[i].info[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Engleza:";
    for (int j = 0; j < elev[i].nreng; j++)
        cout << elev[i].noteeng[j] << "  ";
    cout << "TEZA:" << elev[i].tezaeng << "  ";
    cout << "Medie:" << elev[i].medieeng << " ";
    cout << "Absente:";
    if (elev[i].nrabseng == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabseng; j++)
        {
            cout << elev[i].eng[j].zi << " " << elev[i].eng[j].luna << " " << elev[i].eng[j].an << " " << "Motivata:";
            if (elev[i].eng[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Spaniola:";
    for (int j = 0; j < elev[i].nresp; j++)
        cout << elev[i].noteesp[j] << "  ";
    cout << "TEZA:" << elev[i].tezaesp << "  ";
    cout << "Medie:" << elev[i].medieesp << " ";
    cout << "Absente:";
    if (elev[i].nrabsesp == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabsesp; j++)
        {
            cout << elev[i].esp[j].zi << " " << elev[i].esp[j].luna << " " << elev[i].esp[j].an << " " << "Motivata:";
            if (elev[i].esp[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Istorie:";
    for (int j = 0; j < elev[i].nrist; j++)
        cout << elev[i].noteist[j] << "  ";
    cout << "TEZA:" << elev[i].tezaist << "  ";
    cout << "Medie:" << elev[i].medieist << " ";
    cout << "Absente:";
    if (elev[i].nrabsist == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabsist; j++)
        {
            cout << elev[i].ist[j].zi << " " << elev[i].ist[j].luna << " " << elev[i].ist[j].an << " " << "Motivata:";
            if (elev[i].ist[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Geografie:";
    for (int j = 0; j < elev[i].nrgeo; j++)
        cout << elev[i].notegeo[j] << "  ";
    cout << "TEZA:" << elev[i].tezageo << "  ";
    cout << "Medie:" << elev[i].mediegeo << " ";
    cout << "Absente:";
    if (elev[i].nrabsgeo == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabsgeo; j++)
        {
            cout << elev[i].geo[j].zi << " " << elev[i].geo[j].luna << " " << elev[i].geo[j].an << " " << "Motivata:";
            if (elev[i].geo[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Note Biologie:";
    for (int j = 0; j < elev[i].nrbio; j++)
        cout << elev[i].notebio[j] << "  ";
    cout << "TEZA:" << elev[i].tezabio << "  ";
    cout << "Medie:" << elev[i].mediebio << " ";
    cout << "Absente:";
    if (elev[i].nrabsbio == 0)
        cout << '-';
    else
        for (int j = 0; j < elev[i].nrabsbio; j++)
        {
            cout << elev[i].bio[j].zi << " " << elev[i].bio[j].luna << " " << elev[i].bio[j].an << " " << "Motivata:";
            if (elev[i].bio[j].motivata == 1)
                cout << "Da;";
            else
                cout << "Nu;";
            cout << " ";
        }
    cout << endl;
    cout << "Medie Generala:" << elev[i].mediegenerala << endl;
}
void meniu_afis()
{
    int l = 0;

    while (l == 0)
    {
        calculare_medii();
        cout << "Alegeti:" << endl;
        cout << "1-Afisare alfabetic crescator" << endl;
        cout << "2-Afisare alfabetic descrescator" << endl;
        cout << "3-Afisare crescator dupa medii" << endl;
        cout << "4-Afisare descrescator dupa medii" << endl;
        cout << "5-Afisare date elev" << endl;
        cout << "0-Stop";
        int ok;
        cin >> ok;
        if (ok == 1)
            afis_cresca();
        else if (ok == 2)
            afis_descresca();
        else if (ok == 3)
            afis_crescm();
        else if (ok == 4)
            afis_descrescm();
        else if (ok == 5)
            afis_elev();
        else if (ok == 0)
            l = 1;
        else
            cout << endl << "Comanda neexistenta!" << endl;
    }
    cout << endl << "Terminat" << endl << endl;
}
void am()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        int h = 0;
        cout << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        while (h == 0)
        {
            cout << "Nota:";
            cin >> elev[i].notemate[elev[i].nrmate];
            elev[i].nrmate++;
            cout << "Adaugare inca o nota-0" << endl;
            cout << "Finalizat-1" << endl;
            cin >> h;
        }
        cout << endl << "Continuare spre alt elev-0" << endl;
        cout << "Finalzizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void ar()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        int h = 0;
        while (h == 0)
        {
            cout << "Nota:";
            cin >> elev[i].noterom[elev[i].nrrom];
            elev[i].nrrom++;
            cout << "Adaugare inca o nota-0" << endl;
            cout << "Finalizat-1" << endl;
            cin >> h;
        }
        cout << endl << "Continuare spre alt elev-0" << endl;
        cout << "Finalzizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void af()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        int h = 0;
        while (h == 0)
        {
            cout << "Nota:";
            cin >> elev[i].notefizica[elev[i].nrfizica];
            elev[i].nrfizica++;
            cout << "Adaugare inca o nota-0" << endl;
            cout << "Finalizat-1" << endl;
            cin >> h;
        }
        cout << endl << "Continuare spre alt elev-0" << endl;
        cout << "Finalzizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void ac()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        int h = 0;
        while (h == 0)
        {
            cout << "Nota:";
            cin >> elev[i].notechimie[elev[i].nrchimie];
            elev[i].nrchimie++;
            cout << "Adaugare inca o nota-0" << endl;
            cout << "Finalizat-1" << endl;
            cin >> h;
        }
        cout << endl << "Continuare spre alt elev-0";
        cout << "Finalzizat-1";
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void ai()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        int h = 0;
        while (h == 0)
        {
            cout << "Nota:";
            cin >> elev[i].noteinfo[elev[i].nrinfo];
            elev[i].nrinfo++;
            cout << "Adaugare inca o nota-0" << endl;
            cout << "Finalizat-1" << endl;
            cin >> h;
        }
        cout << endl << "Continuare spre alt elev-0" << endl;
        cout << "Finalzizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void ae()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        int h = 0;
        while (h == 0)
        {
            cout << "Nota:";
            cin >> elev[i].noteeng[elev[i].nreng];
            elev[i].nreng++;
            cout << "Adaugare inca o nota-0" << endl;
            cout << "Finalizat-1" << endl;
            cin >> h;
        }
        cout << endl << "Continuare spre alt elev-0" << endl;
        cout << "Finalzizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void as()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        int h = 0;
        while (h == 0)
        {
            cout << "Nota:";
            cin >> elev[i].noteesp[elev[i].nresp];
            elev[i].nresp++;
            cout << "Adaugare inca o nota-0" << endl;
            cout << "Finalizat-1" << endl;
            cin >> h;
        }
        cout << endl << "Continuare spre alt elev-0" << endl;
        cout << "Finalzizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void ah()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        int h = 0;
        while (h == 0)
        {
            cout << "Nota:";
            cin >> elev[i].noteist[elev[i].nrist];
            elev[i].nrist++;
            cout << "Adaugare inca o nota-0" << endl;
            cout << "Finalizat-1" << endl;
            cin >> h;
        }
        cout << endl << "Continuare spre alt elev-0" << endl;
        cout << "Finalzizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void ag()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        int h = 0;
        while (h == 0)
        {
            cout << "Nota:";
            cin >> elev[i].notegeo[elev[i].nrgeo];
            elev[i].nrgeo++;
            cout << "Adaugare inca o nota-0" << endl;
            cout << "Finalizat-1" << endl;
            cin >> h;
        }
        cout << endl << "Continuare spre alt elev-0" << endl;
        cout << "Finalzizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void ab()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        int h = 0;
        while (h == 0)
        {
            cout << "Nota:";
            cin >> elev[i].notebio[elev[i].nrbio];
            elev[i].nrbio++;
            cout << "Adaugare inca o nota-0" << endl;
            cout << "Finalizat-1" << endl;
            cin >> h;
        }
        cout << endl << "Continuare spre alt elev-0" << endl;
        cout << "Finalzizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void meniu_adaugarenote()
{
    int ok = 0;
    while (ok == 0)
    {
        calculare_medii();
        cout << endl << "Selectati o materie:";
        cout << endl << "1-MATEMATICA" << endl;
        cout << "2-LIMBA ROMANA" << endl;
        cout << "3-FIZICA";
        cout << endl << "4-CHIMIE" << endl;
        cout << "5-INFORMATICA" << endl;
        cout << "6-ENGLEZA" << endl;
        cout << "7-SPANIOLA" << endl;
        cout << "8-ISTORIE" << endl;
        cout << "9-GEOGRAFIE" << endl;
        cout << "10-BIOLOGIE" << endl;
        cout << "0-Stop" << endl;
        int l;
        cin >> l;
        if (l == 1)
            am();
        else if (l == 2)
            ar();
        else if (l == 3)
            af();
        else if (l == 4)
            ac();
        else if (l == 5)
            ai();
        else if (l == 6)
            ae();
        else if (l == 7)
            as();
        else if (l == 8)
            ah();
        else if (l == 9)
            ag();
        else if (l == 10)
            ab();
        else if (l == 0)
            ok = 1;
        else
            cout << endl << "Comanda neexistenta!" << endl;
    }
    cout << "Terminat" << endl;
}
void tmate()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, xx;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                xx = j;
        cout << endl << "Nota:";
        int i;
        cin >> i;
        elev[xx].tezamate = i;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void tr()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, xx;
        cin >> x;
        cout << endl << "Nota:";
        int i;
        cin >> i;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                xx = j;
        elev[xx].tezarom = i;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void tf()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, xx;
        cin >> x;
        cout << endl << "Nota:";
        int i;
        cin >> i;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                xx = j;
        elev[xx].tezafizica = i;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void tc()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, xx;
        cin >> x;
        cout << endl << "Nota:";
        int i;
        cin >> i;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                xx = j;
        elev[xx].tezachimie = i;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void ti()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, xx;
        cin >> x;
        cout << endl << "Nota:";
        int i;
        cin >> i;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                xx = j;
        elev[xx].tezainfo = i;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void te()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, xx;
        cin >> x;
        cout << endl << "Nota:";
        int i;
        cin >> i;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                xx = j;
        elev[xx].tezaeng = i;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void ts()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, xx;
        cin >> x;
        cout << endl << "Nota:";
        int i;
        cin >> i;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                xx = j;
        elev[xx].tezaesp = i;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void th()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, xx;
        cin >> x;
        cout << endl << "Nota:";
        int i;
        cin >> i;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                xx = j;
        elev[xx].tezaist = i;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void tg()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, xx;
        cin >> x;
        cout << endl << "Nota:";
        int i;
        cin >> i;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                xx = j;
        elev[xx].tezageo = i;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void tb()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, xx;
        cin >> x;
        cout << endl << "Nota:";
        int i;
        cin >> i;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                xx = j;
        elev[xx].tezabio = i;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void meniu_adaugareteza()
{
    int ok = 0;
    while (ok == 0)
    {

        cout << endl << "Selectati o materie:" << endl;
        cout << "1-MATEMATICA" << endl;
        cout << "2-LIMBA ROMANA" << endl;
        cout << "3-FIZICA" << endl;
        cout << "4-CHIMIE" << endl;
        cout << "5-INFORMATICA" << endl;
        cout << "6-ENGLEZA" << endl;
        cout << "7-SPANIOLA" << endl;
        cout << "8-ISTORIE" << endl;
        cout << "9-GEOGRAFIE" << endl;
        cout << "10-BIOLOGIE" << endl;
        cout << "0-Stop" << endl;
        int l;
        cin >> l;
        if (l == 1)
            tmate();
        else if (l == 2)
            tr();
        else if (l == 3)
            tf();
        else if (l == 4)
            tc();
        else if (l == 5)
            ti();
        else if (l == 6)
            te();
        else if (l == 7)
            ts();
        else if (l == 8)
            th();
        else if (l == 9)
            tg();
        else if (l == 10)
            tb();
        else if (l == 0)
            ok = 1;
        else
            cout << endl << "Comanda neexistenta!" << endl;
        calculare_medii();
    }
}
void abmate()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> elev[i].mate[elev[i].nrabsmate].an;
        cout << "Luna:";
        cin >> elev[i].mate[elev[i].nrabsmate].luna;
        cout << "Ziua:";
        cin >> elev[i].mate[elev[i].nrabsmate].zi;
        cout << endl << "Absenta adaugata!";
        elev[i].nrabsmate++;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void abr()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> elev[i].rom[elev[i].nrabsrom].an;
        cout << "Luna:";
        cin >> elev[i].rom[elev[i].nrabsrom].luna;
        cout << "Ziua:";
        cin >> elev[i].rom[elev[i].nrabsrom].zi;
        cout << endl << "Absenta adaugata!";
        elev[i].nrabsrom++;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void abf()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> elev[i].fizica[elev[i].nrabsfizica].an;
        cout << "Luna:";
        cin >> elev[i].fizica[elev[i].nrabsfizica].luna;
        cout << "Ziua:";
        cin >> elev[i].fizica[elev[i].nrabsfizica].zi;
        cout << endl << "Absenta adaugata!";
        elev[i].nrabsfizica++;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void abc()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> elev[i].chimie[elev[i].nrabschimie].an;
        cout << "Luna:";
        cin >> elev[i].chimie[elev[i].nrabschimie].luna;
        cout << "Ziua:";
        cin >> elev[i].chimie[elev[i].nrabschimie].zi;
        cout << endl << "Absenta adaugata!";
        elev[i].nrabschimie++;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void abi()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> elev[i].info[elev[i].nrabsinfo].an;
        cout << "Luna:";
        cin >> elev[i].rom[elev[i].nrabsinfo].luna;
        cout << "Ziua:";
        cin >> elev[i].rom[elev[i].nrabsinfo].zi;
        cout << endl << "Absenta adaugata!";
        elev[i].nrabsinfo++;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void abe()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> elev[i].eng[elev[i].nrabseng].an;
        cout << "Luna:";
        cin >> elev[i].eng[elev[i].nrabseng].luna;
        cout << "Ziua:";
        cin >> elev[i].eng[elev[i].nrabseng].zi;
        cout << endl << "Absenta adaugata!";
        elev[i].nrabseng++;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void absp()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> elev[i].esp[elev[i].nrabsesp].an;
        cout << "Luna:";
        cin >> elev[i].esp[elev[i].nrabsesp].luna;
        cout << "Ziua:";
        cin >> elev[i].esp[elev[i].nrabsesp].zi;
        cout << endl << "Absenta adaugata!";
        elev[i].nrabsesp++;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void abh()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> elev[i].ist[elev[i].nrabsist].an;
        cout << "Luna:";
        cin >> elev[i].ist[elev[i].nrabsist].luna;
        cout << "Ziua:";
        cin >> elev[i].ist[elev[i].nrabsist].zi;
        cout << endl << "Absenta adaugata!";
        elev[i].nrabsist++;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void abg()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> elev[i].geo[elev[i].nrabsgeo].an;
        cout << "Luna:";
        cin >> elev[i].geo[elev[i].nrabsgeo].luna;
        cout << "Ziua:";
        cin >> elev[i].geo[elev[i].nrabsgeo].zi;
        cout << endl << "Absenta adaugata!";
        elev[i].nrabsgeo++;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void abb()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> elev[i].bio[elev[i].nrabsbio].an;
        cout << "Luna:";
        cin >> elev[i].bio[elev[i].nrabsbio].luna;
        cout << "Ziua:";
        cin >> elev[i].bio[elev[i].nrabsbio].zi;
        cout << endl << "Absenta adaugata!";
        elev[i].nrabsbio++;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void adaugare_absente()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << endl << "Selectati o materie:" << endl;
        cout << "1-MATEMATICA" << endl;
        cout << "2-LIMBA ROMANA" << endl;
        cout << "3-FIZICA" << endl;
        cout << "4-CHIMIE" << endl;
        cout << "5-INFORMATICA" << endl;
        cout << "6-ENGLEZA" << endl;
        cout << "7-SPANIOLA" << endl;
        cout << "8-ISTORIE" << endl;
        cout << "9-GEOGRAFIE" << endl;
        cout << "10-BIOLOGIE" << endl;
        cout << "0-Stop" << endl;
        int l;
        cin >> l;
        if (l == 1)
            abmate();
        else if (l == 2)
            abr();
        else if (l == 3)
            abf();
        else if (l == 4)
            abc();
        else if (l == 5)
            abi();
        else if (l == 6)
            abe();
        else if (l == 7)
            absp();
        else if (l == 8)
            abh();
        else if (l == 9)
            abg();
        else if (l == 10)
            abb();
        else if (l == 0)
            ok = 1;
        else
            cout << endl << "Comanda neexistenta!" << endl;
    }
}
void mabmate()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        int anul, ziua, lunaa;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> anul;
        cout << "Luna:";
        cin >> lunaa;
        cout << "Ziua:";
        cin >> ziua;
        int ii, l = 0;
        for (int j = 0; j < elev[i].nrabsmate && l == 0; j++)
            if (elev[i].mate[j].an == anul && elev[i].mate[j].luna == lunaa && elev[i].mate[j].zi == ziua)
                ii = j, l = 1;
        if (l == 0)
            cout << endl << "Fara absenta la data respectiva!" << endl;
        else
            elev[i].mate[ii].motivata = 1;
        cout << endl << "Absenta motivata!";
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void mabr()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        int anul, ziua, lunaa;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> anul;
        cout << "Luna:";
        cin >> lunaa;
        cout << "Ziua:";
        cin >> ziua;
        int ii, l = 0;
        for (int j = 0; j < elev[i].nrabsrom && l == 0; j++)
            if (elev[i].rom[j].an == anul && elev[i].rom[j].luna == lunaa && elev[i].rom[j].zi == ziua)
                ii = j, l = 1;
        if (l == 0)
            cout << endl << "Fara absenta la data respectiva!" << endl;
        else
            elev[i].rom[ii].motivata = 1;
        cout << endl << "Absenta motivata!";
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void mabf()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        int anul, ziua, lunaa;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> anul;
        cout << "Luna:";
        cin >> lunaa;
        cout << "Ziua:";
        cin >> ziua;
        int ii, l = 0;
        for (int j = 0; j < elev[i].nrabsfizica && l == 0; j++)
            if (elev[i].fizica[j].an == anul && elev[i].fizica[j].luna == lunaa && elev[i].fizica[j].zi == ziua)
                ii = j, l = 1;
        if (l == 0)
            cout << endl << "Fara absenta la data respectiva!" << endl;
        else
            elev[i].fizica[ii].motivata = 1;
        cout << endl << "Absenta motivata!";
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void mabc()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        int anul, ziua, lunaa;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> anul;
        cout << "Luna:";
        cin >> lunaa;
        cout << "Ziua:";
        cin >> ziua;
        int ii, l = 0;
        for (int j = 0; j < elev[i].nrabschimie && l == 0; j++)
            if (elev[i].chimie[j].an == anul && elev[i].chimie[j].luna == lunaa && elev[i].chimie[j].zi == ziua)
                ii = j, l = 1;
        if (l == 0)
            cout << endl << "Fara absenta la data respectiva!" << endl;
        else
            elev[i].chimie[ii].motivata = 1;
        cout << endl << "Absenta motivata!";
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void mabi()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        int anul, ziua, lunaa;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> anul;
        cout << "Luna:";
        cin >> lunaa;
        cout << "Ziua:";
        cin >> ziua;
        int ii, l = 0;
        for (int j = 0; j < elev[i].nrabsinfo && l == 0; j++)
            if (elev[i].info[j].an == anul && elev[i].info[j].luna == lunaa && elev[i].info[j].zi == ziua)
                ii = j, l = 1;
        if (l == 0)
            cout << endl << "Fara absenta la data respectiva!" << endl;
        else
            elev[i].info[ii].motivata = 1;
        cout << endl << "Absenta motivata!";
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void mabe()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        int anul, ziua, lunaa;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> anul;
        cout << "Luna:";
        cin >> lunaa;
        cout << "Ziua:";
        cin >> ziua;
        int ii, l = 0;
        for (int j = 0; j < elev[i].nrabseng && l == 0; j++)
            if (elev[i].eng[j].an == anul && elev[i].eng[j].luna == lunaa && elev[i].eng[j].zi == ziua)
                ii = j, l = 1;
        if (l == 0)
            cout << endl << "Fara absenta la data respectiva!" << endl;
        else
            elev[i].eng[ii].motivata = 1;
        cout << endl << "Absenta motivata!";
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void mabsp()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        int anul, ziua, lunaa;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> anul;
        cout << "Luna:";
        cin >> lunaa;
        cout << "Ziua:";
        cin >> ziua;
        int ii, l = 0;
        for (int j = 0; j < elev[i].nrabsesp && l == 0; j++)
            if (elev[i].esp[j].an == anul && elev[i].esp[j].luna == lunaa && elev[i].esp[j].zi == ziua)
                ii = j, l = 1;
        if (l == 0)
            cout << endl << "Fara absenta la data respectiva!" << endl;
        else
            elev[i].esp[ii].motivata = 1;
        cout << endl << "Absenta motivata!";
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void mabh()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        int anul, ziua, lunaa;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> anul;
        cout << "Luna:";
        cin >> lunaa;
        cout << "Ziua:";
        cin >> ziua;
        int ii, l = 0;
        for (int j = 0; j < elev[i].nrabsist && l == 0; j++)
            if (elev[i].ist[j].an == anul && elev[i].ist[j].luna == lunaa && elev[i].ist[j].zi == ziua)
                ii = j, l = 1;
        if (l == 0)
            cout << endl << "Fara absenta la data respectiva!" << endl;
        else
            elev[i].ist[ii].motivata = 1;
        cout << endl << "Absenta motivata!";
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void mabg()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        int anul, ziua, lunaa;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> anul;
        cout << "Luna:";
        cin >> lunaa;
        cout << "Ziua:";
        cin >> ziua;
        int ii, l = 0;
        for (int j = 0; j < elev[i].nrabsgeo && l == 0; j++)
            if (elev[i].geo[j].an == anul && elev[i].geo[j].luna == lunaa && elev[i].geo[j].zi == ziua)
                ii = j, l = 1;
        if (l == 0)
            cout << endl << "Fara absenta la data respectiva!" << endl;
        else
            elev[i].geo[ii].motivata = 1;
        cout << endl << "Absenta motivata!";
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void mabb()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        int anul, ziua, lunaa;
        cout << endl << "Introduceti data:" << endl;
        cout << "Anul:";
        cin >> anul;
        cout << "Luna:";
        cin >> lunaa;
        cout << "Ziua:";
        cin >> ziua;
        int ii, l = 0;
        for (int j = 0; j < elev[i].nrabsbio && l == 0; j++)
            if (elev[i].bio[j].an == anul && elev[i].bio[j].luna == lunaa && elev[i].bio[j].zi == ziua)
                ii = j, l = 1;
        if (l == 0)
            cout << endl << "Fara absenta la data respectiva!" << endl;
        else
            elev[i].bio[ii].motivata = 1;
        cout << endl << "Absenta motivata!";
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void motivare_absente()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << endl << "Selectati o materie:" << endl;
        cout << "1-MATEMATICA" << endl;
        cout << "2-LIMBA ROMANA" << endl;
        cout << "3-FIZICA" << endl;
        cout << "4-CHIMIE" << endl;
        cout << "5-INFORMATICA" << endl;
        cout << "6-ENGLEZA" << endl;
        cout << "7-SPANIOLA" << endl;
        cout << "8-ISTORIE" << endl;
        cout << "9-GEOGRAFIE" << endl;
        cout << "10-BIOLOGIE" << endl;
        cout << "0-Stop" << endl;
        int l;
        cin >> l;
        if (l == 1)
            mabmate();
        else if (l == 2)
            mabr();
        else if (l == 3)
            mabf();
        else if (l == 4)
            mabc();
        else if (l == 5)
            mabi();
        else if (l == 6)
            mabe();
        else if (l == 7)
            mabsp();
        else if (l == 8)
            mabh();
        else if (l == 9)
            mabg();
        else if (l == 10)
            mabb();
        else if (l == 0)
            ok = 1;
        else
            cout << endl << "Comanda neexistenta!" << endl;
    }
}
void emate()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        cout << endl << "Alegeti nota pe care doriti sa o stergeti(introduceti numarul de ordine al notei)" << endl << "*notele se numeroteaza incepand cu 1 de la stanga la dreapta" << endl;
        int a;
        cin >> a;
        a--;
        for (int j = a; j < elev[i].nrmate - 1; j++)
            elev[i].notemate[j] = elev[i].notemate[j + 1];
        elev[i].nrmate--;
        cout << endl << "Nota anulata!" << endl;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void er()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        cout << endl << "Alegeti nota pe care doriti sa o stergeti(introduceti numarul de ordine al notei)" << endl << "*notele se numeroteaza incepand cu 1 de la stanga la dreapta" << endl;
        int a;
        cin >> a;
        a--;
        for (int j = a; j < elev[i].nrrom - 1; j++)
            elev[i].noterom[j] = elev[i].noterom[j + 1];
        elev[i].nrrom--;
        cout << endl << "Nota anulata!" << endl;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void ef()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        cout << endl << "Alegeti nota pe care doriti sa o stergeti(introduceti numarul de ordine al notei)" << endl << "*notele se numeroteaza incepand cu 1 de la stanga la dreapta" << endl;
        int a;
        cin >> a;
        a--;
        for (int j = a; j < elev[i].nrfizica - 1; j++)
            elev[i].notefizica[j] = elev[i].notefizica[j + 1];
        elev[i].nrfizica--;
        cout << endl << "Nota anulata!" << endl;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void ec()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        cout << endl << "Alegeti nota pe care doriti sa o stergeti(introduceti numarul de ordine al notei)" << endl << "*notele se numeroteaza incepand cu 1 de la stanga la dreapta" << endl;
        int a;
        cin >> a;
        a--;
        for (int j = a; j < elev[i].nrchimie - 1; j++)
            elev[i].notechimie[j] = elev[i].notechimie[j + 1];
        elev[i].nrchimie--;
        cout << endl << "Nota anulata!" << endl;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void ei()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        cout << endl << "Alegeti nota pe care doriti sa o stergeti(introduceti numarul de ordine al notei)" << endl << "*notele se numeroteaza incepand cu 1 de la stanga la dreapta" << endl;
        int a;
        cin >> a;
        a--;
        for (int j = a; j < elev[i].nrinfo - 1; j++)
            elev[i].noteinfo[j] = elev[i].noteinfo[j + 1];
        elev[i].nrinfo--;
        cout << endl << "Nota anulata!" << endl;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void ee()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        cout << endl << "Alegeti nota pe care doriti sa o stergeti(introduceti numarul de ordine al notei)" << endl << "*notele se numeroteaza incepand cu 1 de la stanga la dreapta" << endl;
        int a;
        cin >> a;
        a--;
        for (int j = a; j < elev[i].nreng - 1; j++)
            elev[i].noteeng[j] = elev[i].noteeng[j + 1];
        elev[i].nreng--;
        cout << endl << "Nota anulata!" << endl;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void es()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        cout << endl << "Alegeti nota pe care doriti sa o stergeti(introduceti numarul de ordine al notei)" << endl << "*notele se numeroteaza incepand cu 1 de la stanga la dreapta" << endl;
        int a;
        cin >> a;
        a--;
        for (int j = a; j < elev[i].nresp - 1; j++)
            elev[i].noteesp[j] = elev[i].noteesp[j + 1];
        elev[i].nresp--;
        cout << endl << "Nota anulata!" << endl;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void eh()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        cout << endl << "Alegeti nota pe care doriti sa o stergeti(introduceti numarul de ordine al notei)" << endl << "*notele se numeroteaza incepand cu 1 de la stanga la dreapta" << endl;
        int a;
        cin >> a;
        a--;
        for (int j = a; j < elev[i].nrist - 1; j++)
            elev[i].noteist[j] = elev[i].noteist[j + 1];
        elev[i].nrist--;
        cout << endl << "Nota anulata!" << endl;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void eg()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        cout << endl << "Alegeti nota pe care doriti sa o stergeti(introduceti numarul de ordine al notei)" << endl << "*notele se numeroteaza incepand cu 1 de la stanga la dreapta" << endl;
        int a;
        cin >> a;
        a--;
        for (int j = a; j < elev[i].nrgeo - 1; j++)
            elev[i].notegeo[j] = elev[i].notegeo[j + 1];
        elev[i].nrgeo--;
        cout << endl << "Nota anulata!" << endl;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void eb()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << "Selectati codul elevului:" << endl;
        afis_cresca__();
        cout << endl << "Cod:";
        int x, i;
        cin >> x;
        for (int j = 1; j <= da; j++)
            if (elev[j].cod == x)
                i = j;
        afis_elev__(i);
        cout << endl << "Alegeti nota pe care doriti sa o stergeti(introduceti numarul de ordine al notei)" << endl << "*notele se numeroteaza incepand cu 1 de la stanga la dreapta" << endl;
        int a;
        cin >> a;
        a--;
        for (int j = a; j < elev[i].nrbio - 1; j++)
            elev[i].notebio[j] = elev[i].notebio[j + 1];
        elev[i].nrbio--;
        cout << endl << "Nota anulata!" << endl;
        cout << endl << "Urmatorul elev-0" << endl << "Finalizat-1" << endl;
        cin >> ok;
        if (ok != 0 && ok != 1)
            cout << "Comanda neexistenta!" << endl, ok = 0;
    }
}
void eliminare_nota()
{
    int ok = 0;
    while (ok == 0)
    {
        cout << endl << "Selectati o materie:" << endl;
        cout << "1-MATEMATICA" << endl;
        cout << "2-LIMBA ROMANA" << endl;
        cout << "3-FIZICA" << endl;
        cout << "4-CHIMIE" << endl;
        cout << "5-INFORMATICA" << endl;
        cout << "6-ENGLEZA" << endl;
        cout << "7-SPANIOLA" << endl;
        cout << "8-ISTORIE" << endl;
        cout << "9-GEOGRAFIE" << endl;
        cout << "10-BIOLOGIE" << endl;
        cout << "0-Stop" << endl;
        int l;
        cin >> l;
        if (l == 1)
            emate();
        else if (l == 2)
            er();
        else if (l == 3)
            ef();
        else if (l == 4)
            ec();
        else if (l == 5)
            ei();
        else if (l == 6)
            ee();
        else if (l == 7)
            es();
        else if (l == 8)
            eh();
        else if (l == 9)
            eg();
        else if (l == 10)
            eb();
        else if (l == 0)
            ok = 1;
        else
            cout << endl << "Comanda neexistenta!" << endl;
    }
}
void aranjare()
{
    int ok = 0;
    while (ok == 0)
    {
        ok = 1;
        for (int i = 1; i < da; i++)
            if (strcmp(elev[i + 1].nume, elev[i].nume) < 0)
                swap(elev[i], elev[i + 1]), ok = 0;
            else if (strcmp(elev[i + 1].nume, elev[i].nume) == 0)
            {
                if (strcmp(elev[i + 1].prenume, elev[i].prenume) < 0)
                    swap(elev[i], elev[i + 1]), ok = 0;
            }
    }
}
void meniu_elim()
{
    ofstream g;
    g.open("backup");
    g.close();
    cout << "*ATENTIE! CODURILE ELEVILOR SE VOR SCHIMBA!" << endl;
    int ok = 0;

    while (ok == 0)
    {
        cout << "Continuare spre stergere elev-0" << endl;
        cout << "Renuntare-1" << endl;
        int okk;
        cin >> okk;
        if (okk == 0)
        {
            cout << "Selectati codul elevului pe care doriti sa il stergeti:" << endl;
            afis_cresca__();
            cout << endl << "Cod:";
            int ii = -1, x;
            cin >> x;
            for (int j = 1; j <= da && ii == -1; j++)
                if (elev[j].cod == x)
                    ii = j;
            for (int j = 1; j <= da; j++)
                if (elev[j].cod > elev[ii].cod)
                    elev[j].cod--;
            strcpy(elev[ii].nume, "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz");
            aranjare();
            da--;
            int i = da;
            g << da << endl;
            while (i >= 1)
            {
                int j;
                g << elev[i].cod << " ";
                g << elev[i].nume << " " << elev[i].prenume << " ";
                g << elev[i].nrmate << " ";
                for (j = 0; j < elev[i].nrmate; j++)
                    g << elev[i].notemate[j] << " ";
                g << elev[i].nrrom << " ";
                for (j = 0; j < elev[i].nrrom; j++)
                    g << elev[i].noterom[j] << " ";
                g << elev[i].nrfizica << " ";
                for (j = 0; j < elev[i].nrfizica; j++)
                    g << elev[i].notefizica[j] << " ";
                g << elev[i].nrchimie << " ";
                for (j = 0; j < elev[i].nrchimie; j++)
                    g << elev[i].notechimie[j] << " ";
                g << elev[i].nrinfo << " ";
                for (j = 0; j < elev[i].nrinfo; j++)
                    g << elev[i].noteinfo[j] << " ";
                g << elev[i].nreng << " ";
                for (j = 0; j < elev[i].nreng; j++)
                    g << elev[i].noteeng[j] << " ";
                g << elev[i].nresp << " ";
                for (j = 0; j < elev[i].nresp; j++)
                    g << elev[i].noteesp[j] << " ";
                g << elev[i].nrist << " ";
                for (j = 0; j < elev[i].nrist; j++)
                    g << elev[i].noteist[j] << " ";
                g << elev[i].nrgeo << " ";
                for (j = 0; j < elev[i].nrgeo; j++)
                    g << elev[i].notegeo[j] << " ";
                g << elev[i].nrbio << " ";
                for (j = 0; j < elev[i].nrbio; j++)
                    g << elev[i].notebio[j] << " ";
                g << elev[i].tezamate << " " << elev[i].tezarom << " " << elev[i].tezafizica << " " << elev[i].tezachimie << " " << elev[i].tezainfo << " " << elev[i].tezaeng << " " << elev[i].tezaesp << " " << elev[i].tezaist << " " << elev[i].tezageo << " " << elev[i].tezabio << " ";
                g << elev[i].medmate << " " << elev[i].medrom << " " << elev[i].medfizica << " " << elev[i].medchimie << " " << elev[i].medinfo << " " << elev[i].medeng << " " << elev[i].medesp << " " << elev[i].medist << " " << elev[i].medgeo << " " << elev[i].medbio << " ";
                g << fixed << setprecision(2) << elev[i].mediemate << " " << fixed << setprecision(2) << elev[i].medierom << " " << fixed << setprecision(2) << elev[i].mediefizica << " " << fixed << setprecision(2) << elev[i].mediechimie << " " << fixed << setprecision(2) << elev[i].medieinfo << " " << fixed << setprecision(2) << elev[i].medieeng << " " << fixed << setprecision(2) << elev[i].medieesp << " " << fixed << setprecision(2) << elev[i].medieist << " " << fixed << setprecision(2) << elev[i].mediegeo << " " << fixed << setprecision(2) << elev[i].mediebio << " ";
                g << elev[i].mediegenerala << " ";
                g << elev[i].nrabsmate << " ";
                for (j = 0; j < elev[i].nrabsmate; j++)
                    g << elev[i].mate[j].zi << " " << elev[i].mate[j].luna << " " << elev[i].mate[j].an << " " << elev[i].mate[j].motivata << " ";
                g << elev[i].nrabsrom << " ";
                for (j = 0; j < elev[i].nrabsrom; j++)
                    g << elev[i].rom[j].zi << " " << elev[i].rom[j].luna << " " << elev[i].rom[j].an << " " << elev[i].rom[j].motivata << " ";
                g << elev[i].nrabsfizica << " ";
                for (j = 0; j < elev[i].nrabsfizica; j++)
                    g << elev[i].fizica[j].zi << " " << elev[i].fizica[j].luna << " " << elev[i].fizica[j].an << " " << elev[i].fizica[j].motivata << " ";
                g << elev[i].nrabschimie << " ";
                for (j = 0; j < elev[i].nrabschimie; j++)
                    g << elev[i].chimie[j].zi << " " << elev[i].chimie[j].luna << " " << elev[i].chimie[j].an << " " << elev[i].chimie[j].motivata << " ";
                g << elev[i].nrabsinfo << " ";
                for (j = 0; j < elev[i].nrabsinfo; j++)
                    g << elev[i].info[j].zi << " " << elev[i].info[j].luna << " " << elev[i].info[j].an << " " << elev[i].info[j].motivata << " ";
                g << elev[i].nrabseng << " ";
                for (j = 0; j < elev[i].nrabseng; j++)
                    g << elev[i].eng[j].zi << " " << elev[i].eng[j].luna << " " << elev[i].eng[j].an << " " << elev[i].eng[j].motivata << " ";
                g << elev[i].nrabsesp << " ";
                for (j = 0; j < elev[i].nrabsesp; j++)
                    g << elev[i].esp[j].zi << " " << elev[i].esp[j].luna << " " << elev[i].esp[j].an << " " << elev[i].esp[j].motivata << " ";
                g << elev[i].nrabsist << " ";
                for (j = 0; j < elev[i].nrabsist; j++)
                    g << elev[i].ist[j].zi << " " << elev[i].ist[j].luna << " " << elev[i].ist[j].an << " " << elev[i].ist[j].motivata << " ";
                g << elev[i].nrabsgeo << " ";
                for (j = 0; j < elev[i].nrabsgeo; j++)
                    g << elev[i].geo[j].zi << " " << elev[i].geo[j].luna << " " << elev[i].geo[j].an << " " << elev[i].geo[j].motivata << " ";
                g << elev[i].nrabsbio << " ";
                for (j = 0; j < elev[i].nrabsbio; j++)
                    g << elev[i].bio[j].zi << " " << elev[i].bio[j].luna << " " << elev[i].bio[j].an << " " << elev[i].bio[j].motivata << " ";
                g << elev[i].nrabstotal;
                i--;
                g << endl;
            }
            remove("memory");
            rename("backup", "memory");
            cout << endl << "Elev sters!" << endl;
            ok = 1;
        }
        else if (okk == 1)
            ok = 1;
        else
            cout << "Comanda neexitenta!" << endl;
    }
}
void info()
{
    cout << endl << "CE(Catalog Electronic)" << " v.1.1";
    cout << endl << "Created by Gabriel Oanea";
    cout << endl << "Contact:gabrieloanea17@yahoo.com" << endl;
    cout << "Press f to continue" << endl;
    char i;
    cin >> i;
    cout << endl;
}
void meniu_principal()
{
    cout << "Buna ziua!" << endl;
    cout << "Ce doriti sa faceti?" << endl;
    int l = 0;
    while (l == 0)
    {
        cout << "1-Adaugare elev" << endl;
        cout << "2-Adaugare note elev" << endl;
        cout << "3-Adaugare nota teza elev" << endl;
        cout << "4-Eliminare elev" << endl;
        cout << "5-Afisare elevi" << endl;
        cout << "6-Adaugare absenta elev" << endl;
        cout << "7-Motivare absenta elev" << endl;
        cout << "8-Anulare nota" << endl;
        cout << "9-Informatii Catalog Electronic" << endl;
        cout << "0-Stop" << endl;
        int ok;
        cin >> ok;
        if (ok == 1)
            meniu_adaugareelev();
        else if (ok == 2)
            meniu_adaugarenote();
        else if (ok == 3)
            meniu_adaugareteza();
        else if (ok == 4)
            meniu_elim();
        else if (ok == 5)
            meniu_afis();
        else if (ok == 0)
            cout << "La Revedere!", l = 1;
        else if (ok == 6)
            adaugare_absente();
        else  if (ok == 7)
            motivare_absente();
        else if (ok == 8)
            eliminare_nota();
        else if (ok == 9)
            info();
        else
            cout << endl << "Comanda neexistenta!" << endl << endl;
    }
}
int main()
{
    start();
    meniu_principal();
    finish();
    return 0;
}
