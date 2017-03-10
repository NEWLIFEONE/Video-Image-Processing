#ifndef VIDEODEVICE_H
#define VIDEODEVICE_H


#include <stdio.h>
#include <sys/types.h>
#include <linux/videodev.h>

#define DEVICE_NAME "/dev/video0"

class videodevice
{
private:
    typedef struct VideoBuffer{
        unsigned char * start;
        size_t length;
    }VideoBuffer;
    VideoBuffer * buffers;

    int fd;                     //�򿪵��豸�ļ�������
    unsigned int iCount;        //��ʾ�������֡
    int iIndex;                 //��ʾ�ڼ�֡


public:
    videodevice();
    ~videodeice();
    int open_device();
    int close_device();
    int init_device();
    int init_mmap();
    int init_v4l2();
    int start_capturing();
    int stop_capturing();

};

#endif // VIDEODEVICE_H
