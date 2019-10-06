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

class SnmpPrivProtocols : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        SnmpPrivProtocols();
        ~SnmpPrivProtocols();


}; // SnmpPrivProtocols

class SnmpAuthProtocols : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        SnmpAuthProtocols();
        ~SnmpAuthProtocols();


}; // SnmpAuthProtocols

class SNMPFRAMEWORKMIB : public ydk::Entity
{
    public:
        SNMPFRAMEWORKMIB();
        ~SNMPFRAMEWORKMIB();

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

        class SnmpEngine; //type: SNMPFRAMEWORKMIB::SnmpEngine

        std::shared_ptr<cisco_ios_xe::SNMP_FRAMEWORK_MIB::SNMPFRAMEWORKMIB::SnmpEngine> snmpengine;
        
}; // SNMPFRAMEWORKMIB


class SNMPFRAMEWORKMIB::SnmpEngine : public ydk::Entity
{
    public:
        SnmpEngine();
        ~SnmpEngine();

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

        ydk::YLeaf snmpengineid; //type: binary
        ydk::YLeaf snmpengineboots; //type: int32
        ydk::YLeaf snmpenginetime; //type: int32
        ydk::YLeaf snmpenginemaxmessagesize; //type: int32

}; // SNMPFRAMEWORKMIB::SnmpEngine

class SnmpSecurityLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noAuthNoPriv;
        static const ydk::Enum::YLeaf authNoPriv;
        static const ydk::Enum::YLeaf authPriv;

        static int get_enum_value(const std::string & name) {
            if (name == "noAuthNoPriv") return 1;
            if (name == "authNoPriv") return 2;
            if (name == "authPriv") return 3;
            return -1;
        }
};


}
}

#endif /* _SNMP_FRAMEWORK_MIB_ */

