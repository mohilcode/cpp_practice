#include<bits/stdc++.h>
using namespace std;

class Instrument {
public:
    virtual void MakeSound() {
        cout << "Instrument is Playing...\n";
    }

};

class Accordion : public Instrument {
public:
    void MakeSound() {
        cout << "Accordion is Playing...\n";
    }
};

int main()
{
    cout << "Hello World!\n";
    Instrument* i1 = new Accordion();
    i1->MakeSound();

    system("pause>0");
}
