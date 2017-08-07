#ifndef _SNMP_FRAMEWORK_MIB_
#define _SNMP_FRAMEWORK_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace cisco_ios_xe {
namespace SNMP_FRAMEWORK_MIB {

class Snmpauthprotocols : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Snmpauthprotocols();
        ~Snmpauthprotocols();


}; // Snmpauthprotocols

class Snmpprivprotocols : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Snmpprivprotocols();
        ~Snmpprivprotocols();


}; // Snmpprivprotocols

class SnmpFrameworkMib : public ydk::Entity
{
    public:
        SnmpFrameworkMib();
        ~SnmpFrameworkMib();

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

        class Snmpengine; //type: SnmpFrameworkMib::Snmpengine

        std::shared_ptr<SNMP_FRAMEWORK_MIB::SnmpFrameworkMib::Snmpengine> snmpengine;
        
}; // SnmpFrameworkMib


class SnmpFrameworkMib::Snmpengine : public ydk::Entity
{
    public:
        Snmpengine();
        ~Snmpengine();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snmpengineid; //type: binary
        ydk::YLeaf snmpengineboots; //type: int32
        ydk::YLeaf snmpenginetime; //type: int32
        ydk::YLeaf snmpenginemaxmessagesize; //type: int32

}; // SnmpFrameworkMib::Snmpengine

class Snmpsecuritylevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noAuthNoPriv;
        static const ydk::Enum::YLeaf authNoPriv;
        static const ydk::Enum::YLeaf authPriv;

};


}
}

#endif /* _SNMP_FRAMEWORK_MIB_ */

