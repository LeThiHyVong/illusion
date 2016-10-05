#ifndef ILOPERATION_IPP
#define ILOPERATION_IPP

#include <QDateTime>
#include "illusion.hpp"

namespace il {

inline void ILOperation::start() {
    startTime_ = QDateTime::currentMSecsSinceEpoch();
}

inline void ILOperation::finish() {
    finishTime_ = QDateTime::currentMSecsSinceEpoch();
    emit finished(id_);
}

inline quint32 ILOperation::id() const {
    return id_;
}

inline State ILOperation::state() const {
    return state_;
}

inline quint64 ILOperation::startTime() const {
    return startTime_;
}

inline quint64 ILOperation::finishTime() const {
    return finishTime_;
}

inline ILMessage*& ILOperation::request() {
    return request_;
}

inline ILMessage* ILOperation::reply() const {
    return reply_;
}

} // namespace il

#endif // ILOPERATION_IPP
