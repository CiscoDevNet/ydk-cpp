#ifndef _SNMPV2_MIB_
#define _SNMPV2_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace SNMPv2_MIB {

class Snmpv2Mib : public ydk::Entity
{
    public:
        Snmpv2Mib();
        ~Snmpv2Mib();

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

        class System; //type: Snmpv2Mib::System
        class Snmp; //type: Snmpv2Mib::Snmp
        class Snmpset; //type: Snmpv2Mib::Snmpset
        class Sysortable; //type: Snmpv2Mib::Sysortable

        std::shared_ptr<SNMPv2_MIB::Snmpv2Mib::Snmp> snmp;
        std::shared_ptr<SNMPv2_MIB::Snmpv2Mib::Snmpset> snmpset;
        std::shared_ptr<SNMPv2_MIB::Snmpv2Mib::Sysortable> sysortable;
        std::shared_ptr<SNMPv2_MIB::Snmpv2Mib::System> system;
        
}; // Snmpv2Mib


class Snmpv2Mib::System : public ydk::Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sysdescr; //type: string
        ydk::YLeaf sysobjectid; //type: string
        ydk::YLeaf sysuptime; //type: uint32
        ydk::YLeaf syscontact; //type: string
        ydk::YLeaf sysname; //type: string
        ydk::YLeaf syslocation; //type: string
        ydk::YLeaf sysservices; //type: int32
        ydk::YLeaf sysorlastchange; //type: uint32

}; // Snmpv2Mib::System


class Snmpv2Mib::Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snmpinpkts; //type: uint32
        ydk::YLeaf snmpoutpkts; //type: uint32
        ydk::YLeaf snmpinbadversions; //type: uint32
        ydk::YLeaf snmpinbadcommunitynames; //type: uint32
        ydk::YLeaf snmpinbadcommunityuses; //type: uint32
        ydk::YLeaf snmpinasnparseerrs; //type: uint32
        ydk::YLeaf snmpintoobigs; //type: uint32
        ydk::YLeaf snmpinnosuchnames; //type: uint32
        ydk::YLeaf snmpinbadvalues; //type: uint32
        ydk::YLeaf snmpinreadonlys; //type: uint32
        ydk::YLeaf snmpingenerrs; //type: uint32
        ydk::YLeaf snmpintotalreqvars; //type: uint32
        ydk::YLeaf snmpintotalsetvars; //type: uint32
        ydk::YLeaf snmpingetrequests; //type: uint32
        ydk::YLeaf snmpingetnexts; //type: uint32
        ydk::YLeaf snmpinsetrequests; //type: uint32
        ydk::YLeaf snmpingetresponses; //type: uint32
        ydk::YLeaf snmpintraps; //type: uint32
        ydk::YLeaf snmpouttoobigs; //type: uint32
        ydk::YLeaf snmpoutnosuchnames; //type: uint32
        ydk::YLeaf snmpoutbadvalues; //type: uint32
        ydk::YLeaf snmpoutgenerrs; //type: uint32
        ydk::YLeaf snmpoutgetrequests; //type: uint32
        ydk::YLeaf snmpoutgetnexts; //type: uint32
        ydk::YLeaf snmpoutsetrequests; //type: uint32
        ydk::YLeaf snmpoutgetresponses; //type: uint32
        ydk::YLeaf snmpouttraps; //type: uint32
        ydk::YLeaf snmpenableauthentraps; //type: Snmpenableauthentraps
        ydk::YLeaf snmpsilentdrops; //type: uint32
        ydk::YLeaf snmpproxydrops; //type: uint32
        class Snmpenableauthentraps;

}; // Snmpv2Mib::Snmp


class Snmpv2Mib::Snmpset : public ydk::Entity
{
    public:
        Snmpset();
        ~Snmpset();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snmpsetserialno; //type: int32

}; // Snmpv2Mib::Snmpset


class Snmpv2Mib::Sysortable : public ydk::Entity
{
    public:
        Sysortable();
        ~Sysortable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sysorentry; //type: Snmpv2Mib::Sysortable::Sysorentry

        std::vector<std::shared_ptr<SNMPv2_MIB::Snmpv2Mib::Sysortable::Sysorentry> > sysorentry;
        
}; // Snmpv2Mib::Sysortable


class Snmpv2Mib::Sysortable::Sysorentry : public ydk::Entity
{
    public:
        Sysorentry();
        ~Sysorentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sysorindex; //type: int32
        ydk::YLeaf sysorid; //type: string
        ydk::YLeaf sysordescr; //type: string
        ydk::YLeaf sysoruptime; //type: uint32

}; // Snmpv2Mib::Sysortable::Sysorentry

class Snmpv2Mib::Snmp::Snmpenableauthentraps : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};


}
}

#endif /* _SNMPV2_MIB_ */
