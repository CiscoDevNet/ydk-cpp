#ifndef _CISCO_CBP_TARGET_MIB_
#define _CISCO_CBP_TARGET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_CBP_TARGET_MIB {

class CiscoCbpTargetMib : public ydk::Entity
{
    public:
        CiscoCbpTargetMib();
        ~CiscoCbpTargetMib();

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

        class Ccbpttargetattachcfg; //type: CiscoCbpTargetMib::Ccbpttargetattachcfg
        class Ccbpttargettable; //type: CiscoCbpTargetMib::Ccbpttargettable

        std::shared_ptr<CISCO_CBP_TARGET_MIB::CiscoCbpTargetMib::Ccbpttargetattachcfg> ccbpttargetattachcfg;
        std::shared_ptr<CISCO_CBP_TARGET_MIB::CiscoCbpTargetMib::Ccbpttargettable> ccbpttargettable;
        
}; // CiscoCbpTargetMib


class CiscoCbpTargetMib::Ccbpttargetattachcfg : public ydk::Entity
{
    public:
        Ccbpttargetattachcfg();
        ~Ccbpttargetattachcfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccbptpolicyidnext; //type: uint32
        ydk::YLeaf ccbpttargettablelastchange; //type: uint32

}; // CiscoCbpTargetMib::Ccbpttargetattachcfg


class CiscoCbpTargetMib::Ccbpttargettable : public ydk::Entity
{
    public:
        Ccbpttargettable();
        ~Ccbpttargettable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ccbpttargetentry; //type: CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry

        std::vector<std::shared_ptr<CISCO_CBP_TARGET_MIB::CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry> > ccbpttargetentry;
        
}; // CiscoCbpTargetMib::Ccbpttargettable


class CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry : public ydk::Entity
{
    public:
        Ccbpttargetentry();
        ~Ccbpttargetentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccbpttargettype; //type: Ccbpttargettype
        ydk::YLeaf ccbpttargetid; //type: binary
        ydk::YLeaf ccbpttargetdir; //type: Ccbpttargetdirection
        ydk::YLeaf ccbptpolicysourcetype; //type: Ccbptpolicysourcetype
        ydk::YLeaf ccbptpolicyid; //type: uint32
        ydk::YLeaf ccbpttargetstatus; //type: Rowstatus
        ydk::YLeaf ccbpttargetstoragetype; //type: Storagetype
        ydk::YLeaf ccbptpolicymap; //type: string
        ydk::YLeaf ccbptpolicyinstance; //type: string
        ydk::YLeaf ccbptpolicyattachtime; //type: uint32

}; // CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry


}
}

#endif /* _CISCO_CBP_TARGET_MIB_ */

