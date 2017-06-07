#ifndef _CISCO_IETF_PW_ATM_MIB_
#define _CISCO_IETF_PW_ATM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_IETF_PW_ATM_MIB {

class CiscoIetfPwAtmMib : public Entity
{
    public:
        CiscoIetfPwAtmMib();
        ~CiscoIetfPwAtmMib();

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

        class Cpwvcatmtable; //type: CiscoIetfPwAtmMib::Cpwvcatmtable

        std::shared_ptr<CISCO_IETF_PW_ATM_MIB::CiscoIetfPwAtmMib::Cpwvcatmtable> cpwvcatmtable;
        
}; // CiscoIetfPwAtmMib


class CiscoIetfPwAtmMib::Cpwvcatmtable : public Entity
{
    public:
        Cpwvcatmtable();
        ~Cpwvcatmtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwvcatmentry; //type: CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_ATM_MIB::CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry> > cpwvcatmentry;
        
}; // CiscoIetfPwAtmMib::Cpwvcatmtable


class CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry : public Entity
{
    public:
        Cpwvcatmentry();
        ~Cpwvcatmentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        YLeaf cpwvcindex;
        YLeaf cpwatmif; //type: int32
        YLeaf cpwatmvpi; //type: int32
        YLeaf cpwatmvci; //type: int32
        YLeaf cpwatmclpqosmapping; //type: boolean
        YLeaf cpwatmrowstatus; //type: RowstatusEnum
        YLeaf cpwatmoamcellsupported; //type: boolean
        YLeaf cpwatmqosscalingfactor; //type: int32
        YLeaf cpwatmcellpacking; //type: boolean
        YLeaf cpwatmmncp; //type: int32
        YLeaf cpwatmpeermncp; //type: int32
        YLeaf cpwatmencap; //type: CpwatmencapEnum
        YLeaf cpwatmmcpttimeout; //type: int32
        YLeaf cpwatmcellsreceived; //type: uint32
        YLeaf cpwatmcellssent; //type: uint32
        YLeaf cpwatmcellsrejected; //type: uint32
        YLeaf cpwatmcellstagged; //type: uint32
        YLeaf cpwatmhccellsreceived; //type: uint64
        YLeaf cpwatmhccellsrejected; //type: uint64
        YLeaf cpwatmhccellstagged; //type: uint64
        YLeaf cpwatmavgcellspacked; //type: uint32
        YLeaf cpwatmpktsreceived; //type: uint32
        YLeaf cpwatmpktssent; //type: uint32
        YLeaf cpwatmpktsrejected; //type: uint32
        class CpwatmencapEnum;

}; // CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry

class CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::CpwatmencapEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;
        static const Enum::YLeaf unknown;

};


}
}

#endif /* _CISCO_IETF_PW_ATM_MIB_ */

