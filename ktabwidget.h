#ifndef KTABWIDGET_H
#define KTABWIDGET_H

#include <QTableWidget>
#include <memory>
#include <kiwix/reader.h>
#include "kiwixwebview.h"

class KTabWidget : public QTabWidget
{
public:
    KTabWidget(QWidget* parent=nullptr);

    KiwixWebView* createNewTab(bool setCurrent);
    void openUrl(std::shared_ptr<kiwix::Reader> reader, const QUrl &url, bool newTab);
    void setTitleOf(KiwixWebView* webView, const QString& title);
    void setIconOf(KiwixWebView* webView, const QIcon& icon);
};

#endif // KTABWIDGET_H