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

        class Cfcrequest; //type: CISCOFTPCLIENTMIB::Cfcrequest
        class Cfcrequesttable; //type: CISCOFTPCLIENTMIB::Cfcrequesttable

        std::shared_ptr<cisco_ios_xe::CISCO_FTP_CLIENT_MIB::CISCOFTPCLIENTMIB::Cfcrequest> cfcrequest;
        std::shared_ptr<cisco_ios_xe::CISCO_FTP_CLIENT_MIB::CISCOFTPCLIENTMIB::Cfcrequesttable> cfcrequesttable;
        
}; // CISCOFTPCLIENTMIB


class CISCOFTPCLIENTMIB::Cfcrequest : public ydk::Entity
{
    public:
        Cfcrequest();
        ~Cfcrequest();

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

}; // CISCOFTPCLIENTMIB::Cfcrequest


class CISCOFTPCLIENTMIB::Cfcrequesttable : public ydk::Entity
{
    public:
        Cfcrequesttable();
        ~Cfcrequesttable();

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

        class Cfcrequestentry; //type: CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_FTP_CLIENT_MIB::CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry> > cfcrequestentry;
        
}; // CISCOFTPCLIENTMIB::Cfcrequesttable


class CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry : public ydk::Entity
{
    public:
        Cfcrequestentry();
        ~Cfcrequestentry();

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
        ydk::YLeaf cfcrequestoperation; //type: Cfcrequestoperation
        ydk::YLeaf cfcrequestlocalfile; //type: string
        ydk::YLeaf cfcrequestremotefile; //type: string
        ydk::YLeaf cfcrequestserver; //type: string
        ydk::YLeaf cfcrequestuser; //type: string
        ydk::YLeaf cfcrequestpassword; //type: string
        ydk::YLeaf cfcrequestresult; //type: Cfcrequestresult
        ydk::YLeaf cfcrequestcompletiontime; //type: uint32
        ydk::YLeaf cfcrequeststop; //type: Cfcrequeststop
        ydk::YLeaf cfcrequestoperationstate; //type: Cfcrequestoperationstate
        ydk::YLeaf cfcrequestentrystatus; //type: RowStatus
        class Cfcrequestoperation;
        class Cfcrequestresult;
        class Cfcrequeststop;
        class Cfcrequestoperationstate;

}; // CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry

class CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestoperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf putBinary;
        static const ydk::Enum::YLeaf putASCII;

};

class CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestresult : public ydk::Enum
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

};

class CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequeststop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf stop;

};

class CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestoperationstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf stopping;
        static const ydk::Enum::YLeaf stopped;

};


}
}

#endif /* _CISCO_FTP_CLIENT_MIB_ */

