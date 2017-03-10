#ifndef C1SCREEN_H
#define C1SCREEN_H

class C1Screen
{
public:
    C1Screen(int w, int h);
    virtual ~C1Screen();

    virtual bool initDevice() = 0;
    virtual void shutdownDevice() { }

    int displayId;

    int physWidth;
    int physHeight;
};



#endif
