#ifndef ILBENCHMARK_IPP
#define ILBENCHMARK_IPP

namespace il {

inline void ILBenchmark::setOperationHook(OperationHook&& hook) {
    hook_ = std::move(hook);
}

inline quint64 ILBenchmark::totalOps() const {
    return totalOps_;
}

inline ILOperation* ILBenchmark::fastestOp() const {
    return fastestOp_;
}

inline ILOperation* ILBenchmark::slowestOp() const {
    return slowestOp_;
}

inline quint64 ILBenchmark::speed() const {
    return speed_;
}

}

#endif // ILBENCHMARK_IPP
