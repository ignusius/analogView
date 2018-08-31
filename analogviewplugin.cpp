#include "analogview.h"
#include "analogviewplugin.h"

#include <QtPlugin>

analogViewPlugin::analogViewPlugin(QObject *parent)
    : QObject(parent)

{
    m_initialized = false;
}

void analogViewPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool analogViewPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *analogViewPlugin::createWidget(QWidget *parent)
{
    return new AnalogView(parent);
}

QString analogViewPlugin::name() const
{
    return QLatin1String("analogView");
}

QString analogViewPlugin::group() const
{
    return QLatin1String("scada");
}

QIcon analogViewPlugin::icon() const
{
    return QIcon();
}

QString analogViewPlugin::toolTip() const
{
    return QLatin1String("");
}

QString analogViewPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool analogViewPlugin::isContainer() const
{
    return false;
}

QString analogViewPlugin::domXml() const
{
    return QLatin1String("<widget class=\"analogView\" name=\"analogView\">\n</widget>\n");
}

QString analogViewPlugin::includeFile() const
{
    return QLatin1String("analogview.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(analogviewplugin, analogViewPlugin)
#endif // QT_VERSION < 0x050000
