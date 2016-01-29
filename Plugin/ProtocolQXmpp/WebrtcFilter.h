#ifndef CWEBRTCFILTER_H_2016_03_23
#define CWEBRTCFILTER_H_2016_03_23

#include <QObject>
namespace rtc{
    class Thread;
}
class CWebrtcConductor;
class CWebrtcFilter : public QObject
{
    Q_OBJECT
public:
    explicit CWebrtcFilter(CWebrtcConductor* pWebrtcConductor, QObject *parent = 0);

    virtual bool eventFilter(QObject *obj, QEvent *event);
    
private:
    CWebrtcConductor* m_pWebrtcConductor;
};

#endif // CWEBRTCFILTER_H_2016_03_23
