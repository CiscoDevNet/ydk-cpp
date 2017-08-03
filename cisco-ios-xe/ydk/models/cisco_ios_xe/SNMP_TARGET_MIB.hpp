#ifndef _SNMP_TARGET_MIB_
#define _SNMP_TARGET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace SNMP_TARGET_MIB {

class SnmpTargetMib : public ydk::Entity
{
    public:
        SnmpTargetMib();
        ~SnmpTargetMib();

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

        class Snmptargetobjects; //type: SnmpTargetMib::Snmptargetobjects
        class Snmptargetaddrtable; //type: SnmpTargetMib::Snmptargetaddrtable
        class Snmptargetparamstable; //type: SnmpTargetMib::Snmptargetparamstable

        std::shared_ptr<SNMP_TARGET_MIB::SnmpTargetMib::Snmptargetaddrtable> snmptargetaddrtable;
        std::shared_ptr<SNMP_TARGET_MIB::SnmpTargetMib::Snmptargetobjects> snmptargetobjects;
        std::shared_ptr<SNMP_TARGET_MIB::SnmpTargetMib::Snmptargetparamstable> snmptargetparamstable;
        
}; // SnmpTargetMib


class SnmpTargetMib::Snmptargetobjects : public ydk::Entity
{
    public:
        Snmptargetobjects();
        ~Snmptargetobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snmptargetspinlock; //type: int32
        ydk::YLeaf snmpunavailablecontexts; //type: uint32
        ydk::YLeaf snmpunknowncontexts; //type: uint32

}; // SnmpTargetMib::Snmptargetobjects


class SnmpTargetMib::Snmptargetaddrtable : public ydk::Entity
{
    public:
        Snmptargetaddrtable();
        ~Snmptargetaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Snmptargetaddrentry; //type: SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry

        std::vector<std::shared_ptr<SNMP_TARGET_MIB::SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry> > snmptargetaddrentry;
        
}; // SnmpTargetMib::Snmptargetaddrtable


class SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry : public ydk::Entity
{
    public:
        Snmptargetaddrentry();
        ~Snmptargetaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snmptargetaddrname; //type: string
        ydk::YLeaf snmptargetaddrtdomain; //type: string
        ydk::YLeaf snmptargetaddrtaddress; //type: binary
        ydk::YLeaf snmptargetaddrtimeout; //type: int32
        ydk::YLeaf snmptargetaddrretrycount; //type: int32
        ydk::YLeaf snmptargetaddrtaglist; //type: string
        ydk::YLeaf snmptargetaddrparams; //type: string
        ydk::YLeaf snmptargetaddrstoragetype; //type: Storagetype
        ydk::YLeaf snmptargetaddrrowstatus; //type: Rowstatus

}; // SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry


class SnmpTargetMib::Snmptargetparamstable : public ydk::Entity
{
    public:
        Snmptargetparamstable();
        ~Snmptargetparamstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Snmptargetparamsentry; //type: SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry

        std::vector<std::shared_ptr<SNMP_TARGET_MIB::SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry> > snmptargetparamsentry;
        
}; // SnmpTargetMib::Snmptargetparamstable


class SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry : public ydk::Entity
{
    public:
        Snmptargetparamsentry();
        ~Snmptargetparamsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snmptargetparamsname; //type: string
        ydk::YLeaf snmptargetparamsmpmodel; //type: int32
        ydk::YLeaf snmptargetparamssecuritymodel; //type: int32
        ydk::YLeaf snmptargetparamssecurityname; //type: string
        ydk::YLeaf snmptargetparamssecuritylevel; //type: Snmpsecuritylevel
        ydk::YLeaf snmptargetparamsstoragetype; //type: Storagetype
        ydk::YLeaf snmptargetparamsrowstatus; //type: Rowstatus

}; // SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry


}
}

#endif /* _SNMP_TARGET_MIB_ */

