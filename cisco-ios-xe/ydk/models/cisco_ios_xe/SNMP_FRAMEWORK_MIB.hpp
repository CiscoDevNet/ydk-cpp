#ifndef _SNMP_FRAMEWORK_MIB_
#define _SNMP_FRAMEWORK_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace ydk {
namespace SNMP_FRAMEWORK_MIB {

class SnmpprivprotocolsIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        SnmpprivprotocolsIdentity();
        ~SnmpprivprotocolsIdentity();


}; // SnmpprivprotocolsIdentity

class SnmpauthprotocolsIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        SnmpauthprotocolsIdentity();
        ~SnmpauthprotocolsIdentity();


}; // SnmpauthprotocolsIdentity

class SnmpFrameworkMib : public Entity
{
    public:
        SnmpFrameworkMib();
        ~SnmpFrameworkMib();

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

        class Snmpengine; //type: SnmpFrameworkMib::Snmpengine

        std::shared_ptr<SNMP_FRAMEWORK_MIB::SnmpFrameworkMib::Snmpengine> snmpengine_;
        
}; // SnmpFrameworkMib


class SnmpFrameworkMib::Snmpengine : public Entity
{
    public:
        Snmpengine();
        ~Snmpengine();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf snmpengineid; //type: binary
        YLeaf snmpengineboots; //type: int32
        YLeaf snmpenginetime; //type: int32
        YLeaf snmpenginemaxmessagesize; //type: int32

}; // SnmpFrameworkMib::Snmpengine

class SnmpsecuritylevelEnum : public Enum
{
    public:
        static const Enum::YLeaf noAuthNoPriv;
        static const Enum::YLeaf authNoPriv;
        static const Enum::YLeaf authPriv;

};


}
}

#endif /* _SNMP_FRAMEWORK_MIB_ */

