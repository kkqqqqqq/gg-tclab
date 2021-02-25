/* -*-mode:c++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */

#ifndef STORAGE_BACKEND_CRAIL_HH
#define STORAGE_BACKEND_CRAIL_HH

#include "backend.hh"
//#include "net/aws.hh"
//#include "net/s3.hh"

class CrailStorageBackend : public StorageBackend
{
private:
    //S3Client client_;
    //std::string bucket_;
    //这个部分需要思量究竟需要什么，要看crail的代码

public:
    /*
    S3StorageBackend(const AWSCredentials& credentials,
        const std::string& s3_bucket,
        const std::string& s3_region);
    */
    //crail有多个功能，本项目主要实现存取

    //以上注释部分需要了解crail
    //以下是对于Storagebackend的纯虚函数put\get的实现  各个storage都一样，在.cc中会再写
    void put(const std::vector<storage::PutRequest>& requests,
        const PutCallback& success_callback = [](const storage::PutRequest&) {}) override;

    void get(const std::vector<storage::GetRequest>& requests,
        const GetCallback& success_callback = [](const storage::GetRequest&) {}) override;
    
};

#endif /* STORAGE_BACKEND_CRAIL_HH */
