// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: api/zksnark.proto
#ifndef GRPC_api_2fzksnark_2eproto__INCLUDED
#define GRPC_api_2fzksnark_2eproto__INCLUDED

#include "api/zksnark.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace protocol {

class TronZksnark final {
 public:
  static constexpr char const* service_full_name() {
    return "protocol.TronZksnark";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status CheckZksnarkProof(::grpc::ClientContext* context, const ::protocol::ZksnarkRequest& request, ::protocol::ZksnarkResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protocol::ZksnarkResponse>> AsyncCheckZksnarkProof(::grpc::ClientContext* context, const ::protocol::ZksnarkRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protocol::ZksnarkResponse>>(AsyncCheckZksnarkProofRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protocol::ZksnarkResponse>> PrepareAsyncCheckZksnarkProof(::grpc::ClientContext* context, const ::protocol::ZksnarkRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protocol::ZksnarkResponse>>(PrepareAsyncCheckZksnarkProofRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void CheckZksnarkProof(::grpc::ClientContext* context, const ::protocol::ZksnarkRequest* request, ::protocol::ZksnarkResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void CheckZksnarkProof(::grpc::ClientContext* context, const ::protocol::ZksnarkRequest* request, ::protocol::ZksnarkResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protocol::ZksnarkResponse>* AsyncCheckZksnarkProofRaw(::grpc::ClientContext* context, const ::protocol::ZksnarkRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protocol::ZksnarkResponse>* PrepareAsyncCheckZksnarkProofRaw(::grpc::ClientContext* context, const ::protocol::ZksnarkRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status CheckZksnarkProof(::grpc::ClientContext* context, const ::protocol::ZksnarkRequest& request, ::protocol::ZksnarkResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protocol::ZksnarkResponse>> AsyncCheckZksnarkProof(::grpc::ClientContext* context, const ::protocol::ZksnarkRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protocol::ZksnarkResponse>>(AsyncCheckZksnarkProofRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protocol::ZksnarkResponse>> PrepareAsyncCheckZksnarkProof(::grpc::ClientContext* context, const ::protocol::ZksnarkRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protocol::ZksnarkResponse>>(PrepareAsyncCheckZksnarkProofRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void CheckZksnarkProof(::grpc::ClientContext* context, const ::protocol::ZksnarkRequest* request, ::protocol::ZksnarkResponse* response, std::function<void(::grpc::Status)>) override;
      void CheckZksnarkProof(::grpc::ClientContext* context, const ::protocol::ZksnarkRequest* request, ::protocol::ZksnarkResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::protocol::ZksnarkResponse>* AsyncCheckZksnarkProofRaw(::grpc::ClientContext* context, const ::protocol::ZksnarkRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::protocol::ZksnarkResponse>* PrepareAsyncCheckZksnarkProofRaw(::grpc::ClientContext* context, const ::protocol::ZksnarkRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_CheckZksnarkProof_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status CheckZksnarkProof(::grpc::ServerContext* context, const ::protocol::ZksnarkRequest* request, ::protocol::ZksnarkResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_CheckZksnarkProof : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_CheckZksnarkProof() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_CheckZksnarkProof() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CheckZksnarkProof(::grpc::ServerContext* /*context*/, const ::protocol::ZksnarkRequest* /*request*/, ::protocol::ZksnarkResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCheckZksnarkProof(::grpc::ServerContext* context, ::protocol::ZksnarkRequest* request, ::grpc::ServerAsyncResponseWriter< ::protocol::ZksnarkResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_CheckZksnarkProof<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_CheckZksnarkProof : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_CheckZksnarkProof() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::protocol::ZksnarkRequest, ::protocol::ZksnarkResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::protocol::ZksnarkRequest* request, ::protocol::ZksnarkResponse* response) { return this->CheckZksnarkProof(context, request, response); }));}
    void SetMessageAllocatorFor_CheckZksnarkProof(
        ::grpc::MessageAllocator< ::protocol::ZksnarkRequest, ::protocol::ZksnarkResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::protocol::ZksnarkRequest, ::protocol::ZksnarkResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_CheckZksnarkProof() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CheckZksnarkProof(::grpc::ServerContext* /*context*/, const ::protocol::ZksnarkRequest* /*request*/, ::protocol::ZksnarkResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* CheckZksnarkProof(
      ::grpc::CallbackServerContext* /*context*/, const ::protocol::ZksnarkRequest* /*request*/, ::protocol::ZksnarkResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_CheckZksnarkProof<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_CheckZksnarkProof : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_CheckZksnarkProof() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_CheckZksnarkProof() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CheckZksnarkProof(::grpc::ServerContext* /*context*/, const ::protocol::ZksnarkRequest* /*request*/, ::protocol::ZksnarkResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_CheckZksnarkProof : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_CheckZksnarkProof() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_CheckZksnarkProof() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CheckZksnarkProof(::grpc::ServerContext* /*context*/, const ::protocol::ZksnarkRequest* /*request*/, ::protocol::ZksnarkResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCheckZksnarkProof(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_CheckZksnarkProof : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_CheckZksnarkProof() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->CheckZksnarkProof(context, request, response); }));
    }
    ~WithRawCallbackMethod_CheckZksnarkProof() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CheckZksnarkProof(::grpc::ServerContext* /*context*/, const ::protocol::ZksnarkRequest* /*request*/, ::protocol::ZksnarkResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* CheckZksnarkProof(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CheckZksnarkProof : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_CheckZksnarkProof() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::protocol::ZksnarkRequest, ::protocol::ZksnarkResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::protocol::ZksnarkRequest, ::protocol::ZksnarkResponse>* streamer) {
                       return this->StreamedCheckZksnarkProof(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_CheckZksnarkProof() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CheckZksnarkProof(::grpc::ServerContext* /*context*/, const ::protocol::ZksnarkRequest* /*request*/, ::protocol::ZksnarkResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCheckZksnarkProof(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::protocol::ZksnarkRequest,::protocol::ZksnarkResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_CheckZksnarkProof<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_CheckZksnarkProof<Service > StreamedService;
};

}  // namespace protocol


#endif  // GRPC_api_2fzksnark_2eproto__INCLUDED
