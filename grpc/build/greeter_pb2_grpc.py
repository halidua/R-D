# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
import grpc

import greeter_pb2 as greeter__pb2


class GreeterStub(object):
  """The greeting service definition.
  """

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.SayHello = channel.unary_unary(
        '/srecon.Greeter/SayHello',
        request_serializer=greeter__pb2.HelloRequest.SerializeToString,
        response_deserializer=greeter__pb2.HelloReply.FromString,
        )
    self.ManyHellos = channel.stream_stream(
        '/srecon.Greeter/ManyHellos',
        request_serializer=greeter__pb2.HelloRequest.SerializeToString,
        response_deserializer=greeter__pb2.HelloReply.FromString,
        )


class GreeterServicer(object):
  """The greeting service definition.
  """

  def SayHello(self, request, context):
    """Sends a greeting
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def ManyHellos(self, request_iterator, context):
    """Sends all matching greetings for the requests.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_GreeterServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'SayHello': grpc.unary_unary_rpc_method_handler(
          servicer.SayHello,
          request_deserializer=greeter__pb2.HelloRequest.FromString,
          response_serializer=greeter__pb2.HelloReply.SerializeToString,
      ),
      'ManyHellos': grpc.stream_stream_rpc_method_handler(
          servicer.ManyHellos,
          request_deserializer=greeter__pb2.HelloRequest.FromString,
          response_serializer=greeter__pb2.HelloReply.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'srecon.Greeter', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))