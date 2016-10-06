#include "iloperation.hpp"
#include "ilmanager.hpp"
#include <google/protobuf/message_lite.h>

namespace il {

ILOperation::ILOperation(QObject *parent)
    :   QObject(parent),
        id_(ILManager::instance()->opId(this)),
        state_(State::CREATED),
        startTime_(0),
        finishTime_(0),
        request_(nullptr),
        reply_(nullptr)
{

}

ILOperation::~ILOperation()
{
    ILManager::instance()->removeOperation(this->id());
    delete request_;
    if (reply_) delete reply_;
}

} // namespace il
