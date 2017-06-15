#ifndef _SNMP_TARGET_MIB_
#define _SNMP_TARGET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace SNMP_TARGET_MIB {

class SnmpTargetMib : public Entity
{
    public:
        SnmpTargetMib();
        ~SnmpTargetMib();

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

        class Snmptargetobjects; //type: SnmpTargetMib::Snmptargetobjects
        class Snmptargetaddrtable; //type: SnmpTargetMib::Snmptargetaddrtable
        class Snmptargetparamstable; //type: SnmpTargetMib::Snmptargetparamstable

        std::shared_ptr<SNMP_TARGET_MIB::SnmpTargetMib::Snmptargetaddrtable> snmptargetaddrtable_;
        std::shared_ptr<SNMP_TARGET_MIB::SnmpTargetMib::Snmptargetobjects> snmptargetobjects_;
        std::shared_ptr<SNMP_TARGET_MIB::SnmpTargetMib::Snmptargetparamstable> snmptargetparamstable_;
        
}; // SnmpTargetMib


class SnmpTargetMib::Snmptargetobjects : public Entity
{
    public:
        Snmptargetobjects();
        ~Snmptargetobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf snmptargetspinlock; //type: int32
        YLeaf snmpunavailablecontexts; //type: uint32
        YLeaf snmpunknowncontexts; //type: uint32

}; // SnmpTargetMib::Snmptargetobjects


class SnmpTargetMib::Snmptargetaddrtable : public Entity
{
    public:
        Snmptargetaddrtable();
        ~Snmptargetaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Snmptargetaddrentry; //type: SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry

        std::vector<std::shared_ptr<SNMP_TARGET_MIB::SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry> > snmptargetaddrentry_;
        
}; // SnmpTargetMib::Snmptargetaddrtable


class SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry : public Entity
{
    public:
        Snmptargetaddrentry();
        ~Snmptargetaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf snmptargetaddrname; //type: string
        YLeaf snmptargetaddrtdomain; //type: string
        YLeaf snmptargetaddrtaddress; //type: binary
        YLeaf snmptargetaddrtimeout; //type: int32
        YLeaf snmptargetaddrretrycount; //type: int32
        YLeaf snmptargetaddrtaglist; //type: string
        YLeaf snmptargetaddrparams; //type: string
        YLeaf snmptargetaddrstoragetype; //type: StoragetypeEnum
        YLeaf snmptargetaddrrowstatus; //type: RowstatusEnum

}; // SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry


class SnmpTargetMib::Snmptargetparamstable : public Entity
{
    public:
        Snmptargetparamstable();
        ~Snmptargetparamstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Snmptargetparamsentry; //type: SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry

        std::vector<std::shared_ptr<SNMP_TARGET_MIB::SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry> > snmptargetparamsentry_;
        
}; // SnmpTargetMib::Snmptargetparamstable


class SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry : public Entity
{
    public:
        Snmptargetparamsentry();
        ~Snmptargetparamsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf snmptargetparamsname; //type: string
        YLeaf snmptargetparamsmpmodel; //type: int32
        YLeaf snmptargetparamssecuritymodel; //type: int32
        YLeaf snmptargetparamssecurityname; //type: string
        YLeaf snmptargetparamssecuritylevel; //type: SnmpsecuritylevelEnum
        YLeaf snmptargetparamsstoragetype; //type: StoragetypeEnum
        YLeaf snmptargetparamsrowstatus; //type: RowstatusEnum

}; // SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry


}
}

#endif /* _SNMP_TARGET_MIB_ */

