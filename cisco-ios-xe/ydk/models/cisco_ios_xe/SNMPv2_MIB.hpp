#ifndef _SNMPV2_MIB_
#define _SNMPV2_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace SNMPv2_MIB {

class Snmpv2Mib : public Entity
{
    public:
        Snmpv2Mib();
        ~Snmpv2Mib();

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

        class System; //type: Snmpv2Mib::System
        class Snmp; //type: Snmpv2Mib::Snmp
        class Snmpset; //type: Snmpv2Mib::Snmpset
        class Sysortable; //type: Snmpv2Mib::Sysortable

        std::shared_ptr<SNMPv2_MIB::Snmpv2Mib::Snmp> snmp_;
        std::shared_ptr<SNMPv2_MIB::Snmpv2Mib::Snmpset> snmpset_;
        std::shared_ptr<SNMPv2_MIB::Snmpv2Mib::Sysortable> sysortable_;
        std::shared_ptr<SNMPv2_MIB::Snmpv2Mib::System> system_;
        
}; // Snmpv2Mib


class Snmpv2Mib::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sysdescr; //type: string
        YLeaf sysobjectid; //type: string
        YLeaf sysuptime; //type: uint32
        YLeaf syscontact; //type: string
        YLeaf sysname; //type: string
        YLeaf syslocation; //type: string
        YLeaf sysservices; //type: int32
        YLeaf sysorlastchange; //type: uint32

}; // Snmpv2Mib::System


class Snmpv2Mib::Snmp : public Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf snmpinpkts; //type: uint32
        YLeaf snmpoutpkts; //type: uint32
        YLeaf snmpinbadversions; //type: uint32
        YLeaf snmpinbadcommunitynames; //type: uint32
        YLeaf snmpinbadcommunityuses; //type: uint32
        YLeaf snmpinasnparseerrs; //type: uint32
        YLeaf snmpintoobigs; //type: uint32
        YLeaf snmpinnosuchnames; //type: uint32
        YLeaf snmpinbadvalues; //type: uint32
        YLeaf snmpinreadonlys; //type: uint32
        YLeaf snmpingenerrs; //type: uint32
        YLeaf snmpintotalreqvars; //type: uint32
        YLeaf snmpintotalsetvars; //type: uint32
        YLeaf snmpingetrequests; //type: uint32
        YLeaf snmpingetnexts; //type: uint32
        YLeaf snmpinsetrequests; //type: uint32
        YLeaf snmpingetresponses; //type: uint32
        YLeaf snmpintraps; //type: uint32
        YLeaf snmpouttoobigs; //type: uint32
        YLeaf snmpoutnosuchnames; //type: uint32
        YLeaf snmpoutbadvalues; //type: uint32
        YLeaf snmpoutgenerrs; //type: uint32
        YLeaf snmpoutgetrequests; //type: uint32
        YLeaf snmpoutgetnexts; //type: uint32
        YLeaf snmpoutsetrequests; //type: uint32
        YLeaf snmpoutgetresponses; //type: uint32
        YLeaf snmpouttraps; //type: uint32
        YLeaf snmpenableauthentraps; //type: SnmpenableauthentrapsEnum
        YLeaf snmpsilentdrops; //type: uint32
        YLeaf snmpproxydrops; //type: uint32
        class SnmpenableauthentrapsEnum;

}; // Snmpv2Mib::Snmp


class Snmpv2Mib::Snmpset : public Entity
{
    public:
        Snmpset();
        ~Snmpset();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf snmpsetserialno; //type: int32

}; // Snmpv2Mib::Snmpset


class Snmpv2Mib::Sysortable : public Entity
{
    public:
        Sysortable();
        ~Sysortable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sysorentry; //type: Snmpv2Mib::Sysortable::Sysorentry

        std::vector<std::shared_ptr<SNMPv2_MIB::Snmpv2Mib::Sysortable::Sysorentry> > sysorentry_;
        
}; // Snmpv2Mib::Sysortable


class Snmpv2Mib::Sysortable::Sysorentry : public Entity
{
    public:
        Sysorentry();
        ~Sysorentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sysorindex; //type: int32
        YLeaf sysorid; //type: string
        YLeaf sysordescr; //type: string
        YLeaf sysoruptime; //type: uint32

}; // Snmpv2Mib::Sysortable::Sysorentry

class Snmpv2Mib::Snmp::SnmpenableauthentrapsEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};


}
}

#endif /* _SNMPV2_MIB_ */

