#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>

namespace Ui {
class notepad;
}

class notepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit notepad(QWidget *parent = 0);
    ~notepad();

private slots:
    void on_action_triggered();

    void on_action_2_triggered();

    void on_action_3_triggered();

    void on_action_4_triggered();

    void on_action_5_triggered();

    void on_action_6_triggered();

    void on_action_9_triggered();

    void on_action_10_triggered();

    void on_action_11_triggered();

    void on_action_7_triggered();

    void on_action_13_triggered();

    void on_action_12_triggered();

    void on_action_16_triggered();

    void on_action_19_triggered();

    void on_action_20_triggered();

    void on_action_18_triggered();

    void on_action_14_triggered();

    void on_action_15_triggered();

    void on_action_17_triggered();

    void on_action_21_triggered();

    void on_action_22_triggered();

private:
    Ui::notepad *ui;
    QString _copytext;
};

#endif // NOTEPAD_H
