#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

struct Characters
{
    QString character;
    int number;
};

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    Characters a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,x,y,z,w;
    QList<Characters> analystic = {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
    QStringList alphabet = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    static QString cipherText;

private slots:
    void on_btnClose_clicked();

    void on_cipher_textChanged();

    void on_btnReplace_clicked();

    void on_btnMinimize_clicked();

    void on_btnClear_clicked();

    void on_btnInfo_clicked();

    void on_ta_textChanged(const QString &arg1);

    void on_tb_textChanged(const QString &arg1);

    void on_tc_textChanged(const QString &arg1);

    void on_td_textChanged(const QString &arg1);

    void on_te_textChanged(const QString &arg1);

    void on_tf_textChanged(const QString &arg1);

    void on_tg_textChanged(const QString &arg1);

    void on_th_textChanged(const QString &arg1);

    void on_ti_textChanged(const QString &arg1);

    void on_tj_textChanged(const QString &arg1);

    void on_tk_textChanged(const QString &arg1);

    void on_tl_textChanged(const QString &arg1);

    void on_tm_textChanged(const QString &arg1);

    void on_tn_textChanged(const QString &arg1);

    void on_to_textChanged(const QString &arg1);

    void on_tp_textChanged(const QString &arg1);

    void on_tq_textChanged(const QString &arg1);

    void on_tr_textChanged(const QString &arg1);

    void on_ts_textChanged(const QString &arg1);

    void on_tt_textChanged(const QString &arg1);

    void on_tu_textChanged(const QString &arg1);

    void on_tv_textChanged(const QString &arg1);

    void on_tw_textChanged(const QString &arg1);

    void on_tx_textChanged(const QString &arg1);

    void on_ty_textChanged(const QString &arg1);

    void on_tz_textChanged(const QString &arg1);

private:
    Ui::Widget *ui;

};
#endif // WIDGET_H
