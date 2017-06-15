#ifndef _CISCO_FTP_CLIENT_MIB_
#define _CISCO_FTP_CLIENT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_FTP_CLIENT_MIB {

class CiscoFtpClientMib : public Entity
{
    public:
        CiscoFtpClientMib();
        ~CiscoFtpClientMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Cfcrequest; //type: CiscoFtpClientMib::Cfcrequest
        class Cfcrequesttable; //type: CiscoFtpClientMib::Cfcrequesttable

        std::shared_ptr<CISCO_FTP_CLIENT_MIB::CiscoFtpClientMib::Cfcrequest> cfcrequest_;
        std::shared_ptr<CISCO_FTP_CLIENT_MIB::CiscoFtpClientMib::Cfcrequesttable> cfcrequesttable_;
        
}; // CiscoFtpClientMib


class CiscoFtpClientMib::Cfcrequest : public Entity
{
    public:
        Cfcrequest();
        ~Cfcrequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cfcrequestmaximum; //type: uint32
        YLeaf cfcrequests; //type: uint32
        YLeaf cfcrequestshigh; //type: uint32
        YLeaf cfcrequestsbumped; //type: uint32

}; // CiscoFtpClientMib::Cfcrequest


class CiscoFtpClientMib::Cfcrequesttable : public Entity
{
    public:
        Cfcrequesttable();
        ~Cfcrequesttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cfcrequestentry; //type: CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry

        std::vector<std::shared_ptr<CISCO_FTP_CLIENT_MIB::CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry> > cfcrequestentry_;
        
}; // CiscoFtpClientMib::Cfcrequesttable


class CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry : public Entity
{
    public:
        Cfcrequestentry();
        ~Cfcrequestentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cfcrequestindex; //type: uint32
        YLeaf cfcrequestoperation; //type: CfcrequestoperationEnum
        YLeaf cfcrequestlocalfile; //type: string
        YLeaf cfcrequestremotefile; //type: string
        YLeaf cfcrequestserver; //type: string
        YLeaf cfcrequestuser; //type: string
        YLeaf cfcrequestpassword; //type: string
        YLeaf cfcrequestresult; //type: CfcrequestresultEnum
        YLeaf cfcrequestcompletiontime; //type: uint32
        YLeaf cfcrequeststop; //type: CfcrequeststopEnum
        YLeaf cfcrequestoperationstate; //type: CfcrequestoperationstateEnum
        YLeaf cfcrequestentrystatus; //type: RowstatusEnum
        class CfcrequestoperationEnum;
        class CfcrequestresultEnum;
        class CfcrequeststopEnum;
        class CfcrequestoperationstateEnum;

}; // CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry

class CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestoperationEnum : public Enum
{
    public:
        static const Enum::YLeaf putBinary;
        static const Enum::YLeaf putASCII;

};

class CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestresultEnum : public Enum
{
    public:
        static const Enum::YLeaf pending;
        static const Enum::YLeaf success;
        static const Enum::YLeaf aborted;
        static const Enum::YLeaf fileOpenFailLocal;
        static const Enum::YLeaf fileOpenFailRemote;
        static const Enum::YLeaf badDomainName;
        static const Enum::YLeaf unreachableIpAddress;
        static const Enum::YLeaf linkFailed;
        static const Enum::YLeaf fileReadFailed;
        static const Enum::YLeaf fileWriteFailed;

};

class CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequeststopEnum : public Enum
{
    public:
        static const Enum::YLeaf ready;
        static const Enum::YLeaf stop;

};

class CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestoperationstateEnum : public Enum
{
    public:
        static const Enum::YLeaf running;
        static const Enum::YLeaf stopping;
        static const Enum::YLeaf stopped;

};


}
}

#endif /* _CISCO_FTP_CLIENT_MIB_ */

