#ifndef _SNMP_PROXY_MIB_
#define _SNMP_PROXY_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace SNMP_PROXY_MIB {

class SnmpProxyMib : public Entity
{
    public:
        SnmpProxyMib();
        ~SnmpProxyMib();

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

        class Snmpproxytable; //type: SnmpProxyMib::Snmpproxytable

        std::shared_ptr<SNMP_PROXY_MIB::SnmpProxyMib::Snmpproxytable> snmpproxytable;
        
}; // SnmpProxyMib


class SnmpProxyMib::Snmpproxytable : public Entity
{
    public:
        Snmpproxytable();
        ~Snmpproxytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Snmpproxyentry; //type: SnmpProxyMib::Snmpproxytable::Snmpproxyentry

        std::vector<std::shared_ptr<SNMP_PROXY_MIB::SnmpProxyMib::Snmpproxytable::Snmpproxyentry> > snmpproxyentry;
        
}; // SnmpProxyMib::Snmpproxytable


class SnmpProxyMib::Snmpproxytable::Snmpproxyentry : public Entity
{
    public:
        Snmpproxyentry();
        ~Snmpproxyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf snmpproxyname; //type: string
        YLeaf snmpproxytype; //type: SnmpproxytypeEnum
        YLeaf snmpproxycontextengineid; //type: binary
        YLeaf snmpproxycontextname; //type: string
        YLeaf snmpproxytargetparamsin; //type: string
        YLeaf snmpproxysingletargetout; //type: string
        YLeaf snmpproxymultipletargetout; //type: string
        YLeaf snmpproxystoragetype; //type: StoragetypeEnum
        YLeaf snmpproxyrowstatus; //type: RowstatusEnum
        class SnmpproxytypeEnum;

}; // SnmpProxyMib::Snmpproxytable::Snmpproxyentry

class SnmpProxyMib::Snmpproxytable::Snmpproxyentry::SnmpproxytypeEnum : public Enum
{
    public:
        static const Enum::YLeaf read;
        static const Enum::YLeaf write;
        static const Enum::YLeaf trap;
        static const Enum::YLeaf inform;

};


}
}

#endif /* _SNMP_PROXY_MIB_ */

