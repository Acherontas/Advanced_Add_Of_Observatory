#ifndef SIMPL_OBSER_H
#define SIMPL_OBSER_H
#include <iostream>
using namespace std;

class simpl_obser
{
    public:
        simpl_obser();
        virtual ~simpl_obser();
        simpl_obser(const simpl_obser& other);
        simpl_obser& operator=(const simpl_obser& other);
        int ar_apot[20]={5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6};
        int arr_ari[20]={1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3};
        int arr_dex[20]={4,3,2,1,0,8,7,6,5,4,3,2,1,0,8,7,6,5,4,3};

        int expose_ari(int arar,int dxdx);
        int expose_dex(int arar,int dxdx);
        void show_guid();




    protected:

    private:
};

#endif // SIMPL_OBSER_H
