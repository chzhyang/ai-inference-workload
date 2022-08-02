/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef MediaFilterService_H
#define MediaFilterService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "social_network_types.h"

namespace social_network {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class MediaFilterServiceIf {
 public:
  virtual ~MediaFilterServiceIf() {}
  virtual void MediaFilter(std::vector<bool> & _return, const int64_t req_id, const std::vector<int64_t> & media_ids, const std::vector<std::string> & media_types, const std::vector<std::string> & media_data_list, const std::map<std::string, std::string> & carrier) = 0;
};

class MediaFilterServiceIfFactory {
 public:
  typedef MediaFilterServiceIf Handler;

  virtual ~MediaFilterServiceIfFactory() {}

  virtual MediaFilterServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(MediaFilterServiceIf* /* handler */) = 0;
};

class MediaFilterServiceIfSingletonFactory : virtual public MediaFilterServiceIfFactory {
 public:
  MediaFilterServiceIfSingletonFactory(const ::apache::thrift::stdcxx::shared_ptr<MediaFilterServiceIf>& iface) : iface_(iface) {}
  virtual ~MediaFilterServiceIfSingletonFactory() {}

  virtual MediaFilterServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(MediaFilterServiceIf* /* handler */) {}

 protected:
  ::apache::thrift::stdcxx::shared_ptr<MediaFilterServiceIf> iface_;
};

class MediaFilterServiceNull : virtual public MediaFilterServiceIf {
 public:
  virtual ~MediaFilterServiceNull() {}
  void MediaFilter(std::vector<bool> & /* _return */, const int64_t /* req_id */, const std::vector<int64_t> & /* media_ids */, const std::vector<std::string> & /* media_types */, const std::vector<std::string> & /* media_data_list */, const std::map<std::string, std::string> & /* carrier */) {
    return;
  }
};

typedef struct _MediaFilterService_MediaFilter_args__isset {
  _MediaFilterService_MediaFilter_args__isset() : req_id(false), media_ids(false), media_types(false), media_data_list(false), carrier(false) {}
  bool req_id :1;
  bool media_ids :1;
  bool media_types :1;
  bool media_data_list :1;
  bool carrier :1;
} _MediaFilterService_MediaFilter_args__isset;

class MediaFilterService_MediaFilter_args {
 public:

  MediaFilterService_MediaFilter_args(const MediaFilterService_MediaFilter_args&);
  MediaFilterService_MediaFilter_args& operator=(const MediaFilterService_MediaFilter_args&);
  MediaFilterService_MediaFilter_args() : req_id(0) {
  }

  virtual ~MediaFilterService_MediaFilter_args() throw();
  int64_t req_id;
  std::vector<int64_t>  media_ids;
  std::vector<std::string>  media_types;
  std::vector<std::string>  media_data_list;
  std::map<std::string, std::string>  carrier;

  _MediaFilterService_MediaFilter_args__isset __isset;

  void __set_req_id(const int64_t val);

  void __set_media_ids(const std::vector<int64_t> & val);

  void __set_media_types(const std::vector<std::string> & val);

  void __set_media_data_list(const std::vector<std::string> & val);

  void __set_carrier(const std::map<std::string, std::string> & val);

  bool operator == (const MediaFilterService_MediaFilter_args & rhs) const
  {
    if (!(req_id == rhs.req_id))
      return false;
    if (!(media_ids == rhs.media_ids))
      return false;
    if (!(media_types == rhs.media_types))
      return false;
    if (!(media_data_list == rhs.media_data_list))
      return false;
    if (!(carrier == rhs.carrier))
      return false;
    return true;
  }
  bool operator != (const MediaFilterService_MediaFilter_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MediaFilterService_MediaFilter_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MediaFilterService_MediaFilter_pargs {
 public:


  virtual ~MediaFilterService_MediaFilter_pargs() throw();
  const int64_t* req_id;
  const std::vector<int64_t> * media_ids;
  const std::vector<std::string> * media_types;
  const std::vector<std::string> * media_data_list;
  const std::map<std::string, std::string> * carrier;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MediaFilterService_MediaFilter_result__isset {
  _MediaFilterService_MediaFilter_result__isset() : success(false), se(false) {}
  bool success :1;
  bool se :1;
} _MediaFilterService_MediaFilter_result__isset;

class MediaFilterService_MediaFilter_result {
 public:

  MediaFilterService_MediaFilter_result(const MediaFilterService_MediaFilter_result&);
  MediaFilterService_MediaFilter_result& operator=(const MediaFilterService_MediaFilter_result&);
  MediaFilterService_MediaFilter_result() {
  }

  virtual ~MediaFilterService_MediaFilter_result() throw();
  std::vector<bool>  success;
  ServiceException se;

  _MediaFilterService_MediaFilter_result__isset __isset;

  void __set_success(const std::vector<bool> & val);

  void __set_se(const ServiceException& val);

  bool operator == (const MediaFilterService_MediaFilter_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(se == rhs.se))
      return false;
    return true;
  }
  bool operator != (const MediaFilterService_MediaFilter_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MediaFilterService_MediaFilter_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MediaFilterService_MediaFilter_presult__isset {
  _MediaFilterService_MediaFilter_presult__isset() : success(false), se(false) {}
  bool success :1;
  bool se :1;
} _MediaFilterService_MediaFilter_presult__isset;

class MediaFilterService_MediaFilter_presult {
 public:


  virtual ~MediaFilterService_MediaFilter_presult() throw();
  std::vector<bool> * success;
  ServiceException se;

  _MediaFilterService_MediaFilter_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class MediaFilterServiceClient : virtual public MediaFilterServiceIf {
 public:
  MediaFilterServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  MediaFilterServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void MediaFilter(std::vector<bool> & _return, const int64_t req_id, const std::vector<int64_t> & media_ids, const std::vector<std::string> & media_types, const std::vector<std::string> & media_data_list, const std::map<std::string, std::string> & carrier);
  void send_MediaFilter(const int64_t req_id, const std::vector<int64_t> & media_ids, const std::vector<std::string> & media_types, const std::vector<std::string> & media_data_list, const std::map<std::string, std::string> & carrier);
  void recv_MediaFilter(std::vector<bool> & _return);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class MediaFilterServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::apache::thrift::stdcxx::shared_ptr<MediaFilterServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (MediaFilterServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_MediaFilter(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  MediaFilterServiceProcessor(::apache::thrift::stdcxx::shared_ptr<MediaFilterServiceIf> iface) :
    iface_(iface) {
    processMap_["MediaFilter"] = &MediaFilterServiceProcessor::process_MediaFilter;
  }

  virtual ~MediaFilterServiceProcessor() {}
};

class MediaFilterServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  MediaFilterServiceProcessorFactory(const ::apache::thrift::stdcxx::shared_ptr< MediaFilterServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::apache::thrift::stdcxx::shared_ptr< MediaFilterServiceIfFactory > handlerFactory_;
};

class MediaFilterServiceMultiface : virtual public MediaFilterServiceIf {
 public:
  MediaFilterServiceMultiface(std::vector<apache::thrift::stdcxx::shared_ptr<MediaFilterServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~MediaFilterServiceMultiface() {}
 protected:
  std::vector<apache::thrift::stdcxx::shared_ptr<MediaFilterServiceIf> > ifaces_;
  MediaFilterServiceMultiface() {}
  void add(::apache::thrift::stdcxx::shared_ptr<MediaFilterServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void MediaFilter(std::vector<bool> & _return, const int64_t req_id, const std::vector<int64_t> & media_ids, const std::vector<std::string> & media_types, const std::vector<std::string> & media_data_list, const std::map<std::string, std::string> & carrier) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->MediaFilter(_return, req_id, media_ids, media_types, media_data_list, carrier);
    }
    ifaces_[i]->MediaFilter(_return, req_id, media_ids, media_types, media_data_list, carrier);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class MediaFilterServiceConcurrentClient : virtual public MediaFilterServiceIf {
 public:
  MediaFilterServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  MediaFilterServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void MediaFilter(std::vector<bool> & _return, const int64_t req_id, const std::vector<int64_t> & media_ids, const std::vector<std::string> & media_types, const std::vector<std::string> & media_data_list, const std::map<std::string, std::string> & carrier);
  int32_t send_MediaFilter(const int64_t req_id, const std::vector<int64_t> & media_ids, const std::vector<std::string> & media_types, const std::vector<std::string> & media_data_list, const std::map<std::string, std::string> & carrier);
  void recv_MediaFilter(std::vector<bool> & _return, const int32_t seqid);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

} // namespace

#endif
