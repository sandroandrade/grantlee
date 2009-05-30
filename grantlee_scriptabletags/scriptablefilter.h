
#ifndef SCRIPTABLE_FILTER_H
#define SCRIPTABLE_FILTER_H

#include <QScriptValue>

#include "filter.h"

using namespace Grantlee;

class ScriptableFilter : public Filter
{
  Q_OBJECT
public:
  ScriptableFilter(QScriptValue filterObject, QScriptEngine *engine, QObject *parent = 0);
  virtual ~ScriptableFilter();

  QString doFilter(const QVariant &input, const QString &argument) const;

private:
  QScriptValue m_filterObject;
  QScriptEngine *m_scriptEngine;

};

#endif