#ifndef _CISCO_CBP_TARGET_MIB_
#define _CISCO_CBP_TARGET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_CBP_TARGET_MIB {

class CISCOCBPTARGETMIB : public ydk::Entity
{
    public:
        CISCOCBPTARGETMIB();
        ~CISCOCBPTARGETMIB();

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

        class CcbptTargetAttachCfg; //type: CISCOCBPTARGETMIB::CcbptTargetAttachCfg
        class CcbptTargetTable; //type: CISCOCBPTARGETMIB::CcbptTargetTable

        std::shared_ptr<cisco_ios_xe::CISCO_CBP_TARGET_MIB::CISCOCBPTARGETMIB::CcbptTargetAttachCfg> ccbpttargetattachcfg;
        std::shared_ptr<cisco_ios_xe::CISCO_CBP_TARGET_MIB::CISCOCBPTARGETMIB::CcbptTargetTable> ccbpttargettable;
        
}; // CISCOCBPTARGETMIB


class CISCOCBPTARGETMIB::CcbptTargetAttachCfg : public ydk::Entity
{
    public:
        CcbptTargetAttachCfg();
        ~CcbptTargetAttachCfg();

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

        ydk::YLeaf ccbptpolicyidnext; //type: uint32
        ydk::YLeaf ccbpttargettablelastchange; //type: uint32

}; // CISCOCBPTARGETMIB::CcbptTargetAttachCfg


class CISCOCBPTARGETMIB::CcbptTargetTable : public ydk::Entity
{
    public:
        CcbptTargetTable();
        ~CcbptTargetTable();

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

        class CcbptTargetEntry; //type: CISCOCBPTARGETMIB::CcbptTargetTable::CcbptTargetEntry

        ydk::YList ccbpttargetentry;
        
}; // CISCOCBPTARGETMIB::CcbptTargetTable


class CISCOCBPTARGETMIB::CcbptTargetTable::CcbptTargetEntry : public ydk::Entity
{
    public:
        CcbptTargetEntry();
        ~CcbptTargetEntry();

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

        ydk::YLeaf ccbpttargettype; //type: CcbptTargetType
        ydk::YLeaf ccbpttargetid; //type: binary
        ydk::YLeaf ccbpttargetdir; //type: CcbptTargetDirection
        ydk::YLeaf ccbptpolicysourcetype; //type: CcbptPolicySourceType
        ydk::YLeaf ccbptpolicyid; //type: uint32
        ydk::YLeaf ccbpttargetstatus; //type: RowStatus
        ydk::YLeaf ccbpttargetstoragetype; //type: StorageType
        ydk::YLeaf ccbptpolicymap; //type: string
        ydk::YLeaf ccbptpolicyinstance; //type: string
        ydk::YLeaf ccbptpolicyattachtime; //type: uint32

}; // CISCOCBPTARGETMIB::CcbptTargetTable::CcbptTargetEntry


}
}

#endif /* _CISCO_CBP_TARGET_MIB_ */

