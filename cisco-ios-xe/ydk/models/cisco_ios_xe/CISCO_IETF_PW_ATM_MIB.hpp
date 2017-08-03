#ifndef _CISCO_IETF_PW_ATM_MIB_
#define _CISCO_IETF_PW_ATM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_PW_ATM_MIB {

class CiscoIetfPwAtmMib : public ydk::Entity
{
    public:
        CiscoIetfPwAtmMib();
        ~CiscoIetfPwAtmMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Cpwvcatmtable; //type: CiscoIetfPwAtmMib::Cpwvcatmtable

        std::shared_ptr<CISCO_IETF_PW_ATM_MIB::CiscoIetfPwAtmMib::Cpwvcatmtable> cpwvcatmtable;
        
}; // CiscoIetfPwAtmMib


class CiscoIetfPwAtmMib::Cpwvcatmtable : public ydk::Entity
{
    public:
        Cpwvcatmtable();
        ~Cpwvcatmtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpwvcatmentry; //type: CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_ATM_MIB::CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry> > cpwvcatmentry;
        
}; // CiscoIetfPwAtmMib::Cpwvcatmtable


class CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry : public ydk::Entity
{
    public:
        Cpwvcatmentry();
        ~Cpwvcatmentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwatmif; //type: int32
        ydk::YLeaf cpwatmvpi; //type: int32
        ydk::YLeaf cpwatmvci; //type: int32
        ydk::YLeaf cpwatmclpqosmapping; //type: boolean
        ydk::YLeaf cpwatmrowstatus; //type: Rowstatus
        ydk::YLeaf cpwatmoamcellsupported; //type: boolean
        ydk::YLeaf cpwatmqosscalingfactor; //type: int32
        ydk::YLeaf cpwatmcellpacking; //type: boolean
        ydk::YLeaf cpwatmmncp; //type: int32
        ydk::YLeaf cpwatmpeermncp; //type: int32
        ydk::YLeaf cpwatmencap; //type: Cpwatmencap
        ydk::YLeaf cpwatmmcpttimeout; //type: int32
        ydk::YLeaf cpwatmcellsreceived; //type: uint32
        ydk::YLeaf cpwatmcellssent; //type: uint32
        ydk::YLeaf cpwatmcellsrejected; //type: uint32
        ydk::YLeaf cpwatmcellstagged; //type: uint32
        ydk::YLeaf cpwatmhccellsreceived; //type: uint64
        ydk::YLeaf cpwatmhccellsrejected; //type: uint64
        ydk::YLeaf cpwatmhccellstagged; //type: uint64
        ydk::YLeaf cpwatmavgcellspacked; //type: uint32
        ydk::YLeaf cpwatmpktsreceived; //type: uint32
        ydk::YLeaf cpwatmpktssent; //type: uint32
        ydk::YLeaf cpwatmpktsrejected; //type: uint32
        class Cpwatmencap;

}; // CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry

class CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::Cpwatmencap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf unknown;

};


}
}

#endif /* _CISCO_IETF_PW_ATM_MIB_ */

