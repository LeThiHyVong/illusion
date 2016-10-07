#include "iltcpoperation.hpp"

namespace il {

ILTcpOperation::ILTcpOperation(ILMessage *rq)
    :   socket_(nullptr),
        request_(rq),
        reply_(nullptr),
        bytesSent_(0),
        bytesReceived_(0)
{

}

void ILTcpOperation::run() {

}

ILTcpOperation::~ILTcpOperation()
{
    if (socket_)
        delete socket_;
    if (request_)
        delete request_;
    if (reply_)
        delete reply_;
}

} // namespace il

