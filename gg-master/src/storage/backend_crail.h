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
    //���������Ҫ˼��������Ҫʲô��Ҫ��crail�Ĵ���

public:
    /*
    S3StorageBackend(const AWSCredentials& credentials,
        const std::string& s3_bucket,
        const std::string& s3_region);
    */
    //crail�ж�����ܣ�����Ŀ��Ҫʵ�ִ�ȡ

    //����ע�Ͳ�����Ҫ�˽�crail
    //�����Ƕ���Storagebackend�Ĵ��麯��put\get��ʵ��  ����storage��һ������.cc�л���д
    void put(const std::vector<storage::PutRequest>& requests,
        const PutCallback& success_callback = [](const storage::PutRequest&) {}) override;

    void get(const std::vector<storage::GetRequest>& requests,
        const GetCallback& success_callback = [](const storage::GetRequest&) {}) override;
    
};

#endif /* STORAGE_BACKEND_CRAIL_HH */
