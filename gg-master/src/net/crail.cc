/* -*-mode:c++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */

#include "crail.hh"

#include <cassert>
#include <thread>
#include <fcntl.h>
#include <sys/types.h>

#include "socket.hh"
#include "secure_socket.hh"
//#include "http_request.hh"
//#include "http_response_parser.hh"
//#include "awsv4_sig.hh"
#include "util/exception.hh"
#include "util/temp_file.hh"

#include <thread>
#include <memory>
#include <stdexcept>
#include <cstring>
#include <fcntl.h>
#include <sys/time.h>
//#include <hiredis/hiredis.h>

#include "util/file_descriptor.hh"
#include "util/optional.hh"

using namespace std;
using namespace storage;

const static std::string UNSIGNED_PAYLOAD = "UNSIGNED-PAYLOAD";


CrailPutRequest::CrailPutRequest( const string& endpoint,  const string& object, const string& contents,const string& content_hash){
   
}

S3GetRequest::S3GetRequest(onst string& endpoint, const string& object, const string& contents, const string& content_hash) {};
}
//Tcp  socket建立连接
TCPSocket tcp_connection(const Address& address)
{
    TCPSocket sock;
    sock.connect(address);
    return sock;
}
}
