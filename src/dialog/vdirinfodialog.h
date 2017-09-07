#ifndef VDIRINFODIALOG_H
#define VDIRINFODIALOG_H

#include <QDialog>

class QLabel;
class QLineEdit;
class QDialogButtonBox;
class QString;
class VDirectory;

class VDirInfoDialog : public QDialog
{
    Q_OBJECT
public:
    VDirInfoDialog(const QString &title,
                   const QString &info,
                   const VDirectory *directory,
                   VDirectory *parentDirectory,
                   QWidget *parent = 0);

    QString getNameInput() const;

private slots:
    void handleInputChanged();

private:
    void setupUI();

    QLabel *infoLabel;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *m_warnLabel;
    QDialogButtonBox *m_btnBox;

    QString title;
    QString info;

    VDirectory *m_parentDirectory;
    const VDirectory *m_directory;
};
#endif // VDIRINFODIALOG_H
