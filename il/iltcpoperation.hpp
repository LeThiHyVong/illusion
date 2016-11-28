#ifndef ILTCPOPERATION_HPP
#define ILTCPOPERATION_HPP

#include "iloperation.hpp"
#include <asio.hpp>
#include <memory>

namespace il {

typedef asio::ip::tcp::socket ILTcpSocket;

class ILTcpOperation : public ILOperation {
  Q_OBJECT

public:
  explicit ILTcpOperation();
  ~ILTcpOperation();
  
  void connect(const asio::ip::tcp::endpoint& endpoint);

  auto bytesSent() const;
  auto bytesReceived() const;

private:
  virtual void onConnect(const std::error_code& e);

  virtual void write() = 0;
  virtual void read() = 0;

protected:
  std::unique_ptr<ILTcpSocket> socket_;

  std::size_t bytesSent_;
  std::size_t bytesReceived_;
};

} // namespace il

#include "iltcpoperation.ipp"

#endif // ILTCPOPERATION_HPP

