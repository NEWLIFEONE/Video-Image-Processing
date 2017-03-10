#include "videodevice.h"

videodevice::videodevice()
{
    this->fd = -1;
    this->iCount=4;
    this->iIndex=-1;
    this->buffers=NULL;
}

videodevice::~videodeice()
{

}


int videodevice::open_device()
{
    //ʹ��������ʽ������ͷ�豸
    this->fd = open(DEVICE_NAME,O_RDWR);
    if( -1 == this->fd)
    {
        perror("open");
        return -1;
    }

    return 0;
}


int videodevice::close_device()
{
    if( -1 == close(this->fd))
        return -1;
    return 0;
}

int videodevice::init_device()
{
    //��ѯv4l2�豸�����Ĺ��ܣ������豸��������������Ϣ���汾��Ϣ��
    struct v4l2_capability cap;

    memset(&cap, 0, sizeof(cap));
    if( -1 == ioctl(this->fd, VIDIOC_QUERYCAP, &cap)) //��ѯ��������
    {
        perror("ioctl VIDIOC_QUERYCAP");
        return -1;
    }
    if (!(cap.capabilities & V4L2_CAP_VIDEO_CAPTURE))
    {
        return -1;
    }
    if (!(cap.capabilities & V4L2_CAP_STREAMING))
    {
        return -1;
    }

#if 1
    printf("Capability infrmations: \n");
    printf("driver: %s\n", cap.driver);
    printf("card: %s\n", cap.card);
    printf("bus_info:%s\n", cap.bus_info);
    printf("version:%08x\n", cap.version);
    printf("capabilities:%08x\n", cap.capabilities);
#endif

    //������Ƶ�����ʽ��������Ƶͼ�����ݵĳ�����ͼ���ʽ��YUYV��
    struct v4l2_format fmt;
    memset(&fmt, 0, sizeof(fmt));

    //��Ƶ����������
    fmt.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;

    fmt.fmt.pix.pixelformat = V4L2_PIX_FMT_YUYV;//��ƵԴ��ʽΪYUYV(����JPEG��RGB)
    fmt.fmt.pix.width  = 640;
    fmt.fmt.pix.height = 480;
    fmt.fmt.pix.field  = V4L2_FIELD_INTERLACED; //����ɨ�� ��ʾ����Ҳ�Ǹ���ɨ��

    if (-1 == ioctl(fd, VIDIOC_S_FMT, &fmt))     //������Ƶ��׽��ʽ
    {
        perror("ioctl VIDIOC_S_FMT error");
        return -1;
    }

    return 0;

}























