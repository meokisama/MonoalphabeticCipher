#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    cipherText = ui->cipher->toPlainText();
}

Widget::~Widget()
{
    delete ui;
}

QString Widget::cipherText;

void Widget::on_btnClose_clicked()
{
    close();
}

void Widget::on_cipher_textChanged()
{
    QString cipherText = ui->cipher->toPlainText();

    for (int i = 0; i < alphabet.size(); i++) {
        analystic[i].character = alphabet.at(i);
        analystic[i].number = cipherText.count(alphabet.at(i),Qt::CaseInsensitive);
    }

    for (int i = 0; i < analystic.size(); i++)
    {
        for (int j = i+1; j < analystic.size(); j++) {
            if (analystic[i].number < analystic[j].number)
                analystic.swapItemsAt(i,j);
        }
    }

    ui->la->setText(analystic[0].character + " = " + QString::number(analystic[0].number) + " chars");
    ui->lb->setText(analystic[1].character + " = " + QString::number(analystic[1].number) + " chars");
    ui->lc->setText(analystic[2].character + " = " + QString::number(analystic[2].number) + " chars");
    ui->ld->setText(analystic[3].character + " = " + QString::number(analystic[3].number) + " chars");
    ui->le->setText(analystic[4].character + " = " + QString::number(analystic[4].number) + " chars");
    ui->lf->setText(analystic[5].character + " = " + QString::number(analystic[5].number) + " chars");
    ui->lg->setText(analystic[6].character + " = " + QString::number(analystic[6].number) + " chars");
    ui->lh->setText(analystic[7].character + " = " + QString::number(analystic[7].number) + " chars");
    ui->li->setText(analystic[8].character + " = " + QString::number(analystic[8].number) + " chars");
    ui->lj->setText(analystic[9].character + " = " + QString::number(analystic[9].number) + " chars");
    ui->lk->setText(analystic[10].character + " = " + QString::number(analystic[10].number) + " chars");
    ui->ll->setText(analystic[11].character + " = " + QString::number(analystic[11].number) + " chars");
    ui->lm->setText(analystic[12].character + " = " + QString::number(analystic[12].number) + " chars");
    ui->ln->setText(analystic[13].character + " = " + QString::number(analystic[13].number) + " chars");
    ui->lo->setText(analystic[14].character + " = " + QString::number(analystic[14].number) + " chars");
    ui->lp->setText(analystic[15].character + " = " + QString::number(analystic[15].number) + " chars");
    ui->lq->setText(analystic[16].character + " = " + QString::number(analystic[16].number) + " chars");
    ui->lr->setText(analystic[17].character + " = " + QString::number(analystic[17].number) + " chars");
    ui->ls->setText(analystic[18].character + " = " + QString::number(analystic[18].number) + " chars");
    ui->lt->setText(analystic[19].character + " = " + QString::number(analystic[19].number) + " chars");
    ui->lu->setText(analystic[20].character + " = " + QString::number(analystic[20].number) + " chars");
    ui->lv->setText(analystic[21].character + " = " + QString::number(analystic[21].number) + " chars");
    ui->lw->setText(analystic[22].character + " = " + QString::number(analystic[22].number) + " chars");
    ui->lx->setText(analystic[23].character + " = " + QString::number(analystic[23].number) + " chars");
    ui->ly->setText(analystic[24].character + " = " + QString::number(analystic[24].number) + " chars");
    ui->lz->setText(analystic[25].character + " = " + QString::number(analystic[25].number) + " chars");

    ui->plain->clear();
}

void Widget::on_btnReplace_clicked()
{
    cipherText = ui->cipher->toPlainText();

    ui->plain->setText(cipherText);

}

void Widget::on_btnMinimize_clicked()
{
    setWindowState(Qt::WindowMinimized);
}

void Widget::on_btnClear_clicked()
{
    ui->plain->clear();

    ui->ta->clear();
    ui->tb->clear();
    ui->tc->clear();
    ui->td->clear();
    ui->te->clear();
    ui->tf->clear();
    ui->tg->clear();
    ui->th->clear();
    ui->ti->clear();
    ui->tj->clear();
    ui->tk->clear();
    ui->tl->clear();
    ui->tm->clear();
    ui->tn->clear();
    ui->to->clear();
    ui->tp->clear();
    ui->tq->clear();
    ui->tr->clear();
    ui->ts->clear();
    ui->tt->clear();
    ui->tu->clear();
    ui->tv->clear();
    ui->tw->clear();
    ui->tx->clear();
    ui->ty->clear();
    ui->tz->clear();
}

void Widget::on_btnInfo_clicked()
{
    QMessageBox::information(this, tr("  Phoenix Legion"), tr("Copyright - Phoenix Legion. \t\n\n[NT219.L21.ANTT] Letter Frequency Attack.\t\n"), QMessageBox::Ok);
}

void Widget::on_ta_textChanged(const QString &arg1)
{
    cipherText.replace("a", arg1, Qt::CaseInsensitive);

}

void Widget::on_tb_textChanged(const QString &arg1)
{
    cipherText.replace("b", arg1, Qt::CaseInsensitive);
}

void Widget::on_tc_textChanged(const QString &arg1)
{
    cipherText.replace("c", arg1, Qt::CaseInsensitive);
}

void Widget::on_td_textChanged(const QString &arg1)
{
    cipherText.replace("d", arg1, Qt::CaseInsensitive);
}

void Widget::on_te_textChanged(const QString &arg1)
{
    cipherText.replace("e", arg1, Qt::CaseInsensitive);
}

void Widget::on_tf_textChanged(const QString &arg1)
{
    cipherText.replace("f", arg1, Qt::CaseInsensitive);
}

void Widget::on_tg_textChanged(const QString &arg1)
{
    cipherText.replace("g", arg1, Qt::CaseInsensitive);
}

void Widget::on_th_textChanged(const QString &arg1)
{
    cipherText.replace("h", arg1, Qt::CaseInsensitive);
}

void Widget::on_ti_textChanged(const QString &arg1)
{
    cipherText.replace("i", arg1, Qt::CaseInsensitive);
}

void Widget::on_tj_textChanged(const QString &arg1)
{
    cipherText.replace("j", arg1, Qt::CaseInsensitive);
}

void Widget::on_tk_textChanged(const QString &arg1)
{
    cipherText.replace("k", arg1, Qt::CaseInsensitive);
}

void Widget::on_tl_textChanged(const QString &arg1)
{
    cipherText.replace("l", arg1, Qt::CaseInsensitive);
}

void Widget::on_tm_textChanged(const QString &arg1)
{
    cipherText.replace("m", arg1, Qt::CaseInsensitive);
}

void Widget::on_tn_textChanged(const QString &arg1)
{
    cipherText.replace("n", arg1, Qt::CaseInsensitive);
}

void Widget::on_to_textChanged(const QString &arg1)
{
    cipherText.replace("o", arg1, Qt::CaseInsensitive);
}

void Widget::on_tp_textChanged(const QString &arg1)
{
    cipherText.replace("p", arg1, Qt::CaseInsensitive);
}

void Widget::on_tq_textChanged(const QString &arg1)
{
    cipherText.replace("q", arg1, Qt::CaseInsensitive);
}

void Widget::on_tr_textChanged(const QString &arg1)
{
    cipherText.replace("r", arg1, Qt::CaseInsensitive);
}

void Widget::on_ts_textChanged(const QString &arg1)
{
    cipherText.replace("s", arg1, Qt::CaseInsensitive);
}

void Widget::on_tt_textChanged(const QString &arg1)
{
    cipherText.replace("t", arg1, Qt::CaseInsensitive);
}

void Widget::on_tu_textChanged(const QString &arg1)
{
    cipherText.replace("u", arg1, Qt::CaseInsensitive);
}

void Widget::on_tv_textChanged(const QString &arg1)
{
    cipherText.replace("v", arg1, Qt::CaseInsensitive);
}

void Widget::on_tw_textChanged(const QString &arg1)
{
    cipherText.replace("w", arg1, Qt::CaseInsensitive);
}

void Widget::on_tx_textChanged(const QString &arg1)
{
    cipherText.replace("x", arg1, Qt::CaseInsensitive);
}

void Widget::on_ty_textChanged(const QString &arg1)
{
    cipherText.replace("y", arg1, Qt::CaseInsensitive);
}

void Widget::on_tz_textChanged(const QString &arg1)
{
    cipherText.replace("z", arg1, Qt::CaseInsensitive);
}
