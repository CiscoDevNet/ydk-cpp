#ifndef _CISCO_FTP_CLIENT_MIB_
#define _CISCO_FTP_CLIENT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_FTP_CLIENT_MIB {

class CISCOFTPCLIENTMIB : public ydk::Entity
{
    public:
        CISCOFTPCLIENTMIB();
        ~CISCOFTPCLIENTMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class CfcRequest; //type: CISCOFTPCLIENTMIB::CfcRequest
        class CfcRequestTable; //type: CISCOFTPCLIENTMIB::CfcRequestTable

        std::shared_ptr<cisco_ios_xe::CISCO_FTP_CLIENT_MIB::CISCOFTPCLIENTMIB::CfcRequest> cfcrequest;
        std::shared_ptr<cisco_ios_xe::CISCO_FTP_CLIENT_MIB::CISCOFTPCLIENTMIB::CfcRequestTable> cfcrequesttable;
        
}; // CISCOFTPCLIENTMIB


class CISCOFTPCLIENTMIB::CfcRequest : public ydk::Entity
{
    public:
        CfcRequest();
        ~CfcRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cfcrequestmaximum; //type: uint32
        ydk::YLeaf cfcrequests; //type: uint32
        ydk::YLeaf cfcrequestshigh; //type: uint32
        ydk::YLeaf cfcrequestsbumped; //type: uint32

}; // CISCOFTPCLIENTMIB::CfcRequest


class CISCOFTPCLIENTMIB::CfcRequestTable : public ydk::Entity
{
    public:
        CfcRequestTable();
        ~CfcRequestTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CfcRequestEntry; //type: CISCOFTPCLIENTMIB::CfcRequestTable::CfcRequestEntry

        ydk::YList cfcrequestentry;
        
}; // CISCOFTPCLIENTMIB::CfcRequestTable


class CISCOFTPCLIENTMIB::CfcRequestTable::CfcRequestEntry : public ydk::Entity
{
    public:
        CfcRequestEntry();
        ~CfcRequestEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cfcrequestindex; //type: uint32
        ydk::YLeaf cfcrequestoperation; //type: CfcRequestOperation
        ydk::YLeaf cfcrequestlocalfile; //type: string
        ydk::YLeaf cfcrequestremotefile; //type: string
        ydk::YLeaf cfcrequestserver; //type: string
        ydk::YLeaf cfcrequestuser; //type: string
        ydk::YLeaf cfcrequestpassword; //type: string
        ydk::YLeaf cfcrequestresult; //type: CfcRequestResult
        ydk::YLeaf cfcrequestcompletiontime; //type: uint32
        ydk::YLeaf cfcrequeststop; //type: CfcRequestStop
        ydk::YLeaf cfcrequestoperationstate; //type: CfcRequestOperationState
        ydk::YLeaf cfcrequestentrystatus; //type: RowStatus
        class CfcRequestOperation;
        class CfcRequestResult;
        class CfcRequestStop;
        class CfcRequestOperationState;

}; // CISCOFTPCLIENTMIB::CfcRequestTable::CfcRequestEntry

class CISCOFTPCLIENTMIB::CfcRequestTable::CfcRequestEntry::CfcRequestOperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf putBinary;
        static const ydk::Enum::YLeaf putASCII;

        static int get_enum_value(const std::string & name) {
            if (name == "putBinary") return 1;
            if (name == "putASCII") return 2;
            return -1;
        }
};

class CISCOFTPCLIENTMIB::CfcRequestTable::CfcRequestEntry::CfcRequestResult : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf aborted;
        static const ydk::Enum::YLeaf fileOpenFailLocal;
        static const ydk::Enum::YLeaf fileOpenFailRemote;
        static const ydk::Enum::YLeaf badDomainName;
        static const ydk::Enum::YLeaf unreachableIpAddress;
        static const ydk::Enum::YLeaf linkFailed;
        static const ydk::Enum::YLeaf fileReadFailed;
        static const ydk::Enum::YLeaf fileWriteFailed;

        static int get_enum_value(const std::string & name) {
            if (name == "pending") return 1;
            if (name == "success") return 2;
            if (name == "aborted") return 3;
            if (name == "fileOpenFailLocal") return 4;
            if (name == "fileOpenFailRemote") return 5;
            if (name == "badDomainName") return 6;
            if (name == "unreachableIpAddress") return 7;
            if (name == "linkFailed") return 8;
            if (name == "fileReadFailed") return 9;
            if (name == "fileWriteFailed") return 10;
            return -1;
        }
};

class CISCOFTPCLIENTMIB::CfcRequestTable::CfcRequestEntry::CfcRequestStop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf stop;

        static int get_enum_value(const std::string & name) {
            if (name == "ready") return 1;
            if (name == "stop") return 2;
            return -1;
        }
};

class CISCOFTPCLIENTMIB::CfcRequestTable::CfcRequestEntry::CfcRequestOperationState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf stopping;
        static const ydk::Enum::YLeaf stopped;

        static int get_enum_value(const std::string & name) {
            if (name == "running") return 1;
            if (name == "stopping") return 2;
            if (name == "stopped") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_FTP_CLIENT_MIB_ */

