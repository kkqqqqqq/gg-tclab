/* -*-mode:c++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */

#ifndef NET_CRAIL_HH
#define NET_CRAIL_HH

#include <vector>
#include <string>
#include <functional>

#include "net/requests.hh"

struct CrailClientConfig
{   //ip要视情况而定
    std::string ip{ "0.0.0.0" };//由 endpiont 重新指定
    uint16_t port{ 9060 };
    
 

    size_t max_threads{ 32 };
    size_t max_batch_size{ 32 };
};

class  Crail
{
private:
    CrailClientConfig config_;

public:
    Crail(const RedisClientConfig& config)
        : config_(config)
    {}

    void upload_files(const std::vector<storage::PutRequest>& upload_requests,
        const std::function<void(const storage::PutRequest&)>& success_callback
        = [](const storage::PutRequest&) {});

    void download_files(const std::vector<storage::GetRequest>& download_requests,
        const std::function<void(const storage::GetRequest&)>& success_callback
        = [](const storage::GetRequest&) {});
};

#endif /* NET_CRAIL_HH */
