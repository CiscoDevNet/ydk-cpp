#ifndef _CISCO_CBP_TARGET_MIB_
#define _CISCO_CBP_TARGET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_CBP_TARGET_MIB {

class CiscoCbpTargetMib : public Entity
{
    public:
        CiscoCbpTargetMib();
        ~CiscoCbpTargetMib();

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

        class Ccbpttargetattachcfg; //type: CiscoCbpTargetMib::Ccbpttargetattachcfg
        class Ccbpttargettable; //type: CiscoCbpTargetMib::Ccbpttargettable

        std::shared_ptr<CISCO_CBP_TARGET_MIB::CiscoCbpTargetMib::Ccbpttargetattachcfg> ccbpttargetattachcfg_;
        std::shared_ptr<CISCO_CBP_TARGET_MIB::CiscoCbpTargetMib::Ccbpttargettable> ccbpttargettable_;
        
}; // CiscoCbpTargetMib


class CiscoCbpTargetMib::Ccbpttargetattachcfg : public Entity
{
    public:
        Ccbpttargetattachcfg();
        ~Ccbpttargetattachcfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ccbptpolicyidnext; //type: uint32
        YLeaf ccbpttargettablelastchange; //type: uint32

}; // CiscoCbpTargetMib::Ccbpttargetattachcfg


class CiscoCbpTargetMib::Ccbpttargettable : public Entity
{
    public:
        Ccbpttargettable();
        ~Ccbpttargettable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ccbpttargetentry; //type: CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry

        std::vector<std::shared_ptr<CISCO_CBP_TARGET_MIB::CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry> > ccbpttargetentry_;
        
}; // CiscoCbpTargetMib::Ccbpttargettable


class CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry : public Entity
{
    public:
        Ccbpttargetentry();
        ~Ccbpttargetentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ccbpttargettype; //type: CcbpttargettypeEnum
        YLeaf ccbpttargetid; //type: binary
        YLeaf ccbpttargetdir; //type: CcbpttargetdirectionEnum
        YLeaf ccbptpolicysourcetype; //type: CcbptpolicysourcetypeEnum
        YLeaf ccbptpolicyid; //type: uint32
        YLeaf ccbpttargetstatus; //type: RowstatusEnum
        YLeaf ccbpttargetstoragetype; //type: StoragetypeEnum
        YLeaf ccbptpolicymap; //type: string
        YLeaf ccbptpolicyinstance; //type: string
        YLeaf ccbptpolicyattachtime; //type: uint32

}; // CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry


}
}

#endif /* _CISCO_CBP_TARGET_MIB_ */

