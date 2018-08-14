#ifndef DATA_H
#define DATA_H


class Data{

    private:

        int dia;
        int mes;
        int ano;

    public:

        Data(int d, int m, int a);

        int getDia();
        int getMes();
        int getAno();

        void setDia(int d);
        void setMes(int m);
        void setAno(int a);
        void avancaDia();

};
#endif
