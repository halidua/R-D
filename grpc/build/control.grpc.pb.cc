// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: control.proto

#include "control.pb.h"
#include "control.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace srecon {

static const char* TranslatorControl_method_names[] = {
  "/srecon.TranslatorControl/SetBehaviour",
};

std::unique_ptr< TranslatorControl::Stub> TranslatorControl::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< TranslatorControl::Stub> stub(new TranslatorControl::Stub(channel));
  return stub;
}

TranslatorControl::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SetBehaviour_(TranslatorControl_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status TranslatorControl::Stub::SetBehaviour(::grpc::ClientContext* context, const ::srecon::BehaviourDefinition& request, ::srecon::BehaviourReply* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SetBehaviour_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::srecon::BehaviourReply>* TranslatorControl::Stub::AsyncSetBehaviourRaw(::grpc::ClientContext* context, const ::srecon::BehaviourDefinition& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::srecon::BehaviourReply>::Create(channel_.get(), cq, rpcmethod_SetBehaviour_, context, request);
}

TranslatorControl::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      TranslatorControl_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< TranslatorControl::Service, ::srecon::BehaviourDefinition, ::srecon::BehaviourReply>(
          std::mem_fn(&TranslatorControl::Service::SetBehaviour), this)));
}

TranslatorControl::Service::~Service() {
}

::grpc::Status TranslatorControl::Service::SetBehaviour(::grpc::ServerContext* context, const ::srecon::BehaviourDefinition* request, ::srecon::BehaviourReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace srecon
