#ifndef _CISCO_ETHERLIKE_EXT_MIB_
#define _CISCO_ETHERLIKE_EXT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ETHERLIKE_EXT_MIB {

class CISCOETHERLIKEEXTMIB : public ydk::Entity
{
    public:
        CISCOETHERLIKEEXTMIB();
        ~CISCOETHERLIKEEXTMIB();

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

        class CeeDot3PauseExtTable; //type: CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable
        class CeeSubInterfaceTable; //type: CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable

        std::shared_ptr<cisco_ios_xe::CISCO_ETHERLIKE_EXT_MIB::CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable> ceedot3pauseexttable;
        std::shared_ptr<cisco_ios_xe::CISCO_ETHERLIKE_EXT_MIB::CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable> ceesubinterfacetable;
        
}; // CISCOETHERLIKEEXTMIB


class CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable : public ydk::Entity
{
    public:
        CeeDot3PauseExtTable();
        ~CeeDot3PauseExtTable();

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

        class CeeDot3PauseExtEntry; //type: CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::CeeDot3PauseExtEntry

        ydk::YList ceedot3pauseextentry;
        
}; // CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable


class CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::CeeDot3PauseExtEntry : public ydk::Entity
{
    public:
        CeeDot3PauseExtEntry();
        ~CeeDot3PauseExtEntry();

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

        //type: int32 (refers to cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::dot3statsindex)
        ydk::YLeaf dot3statsindex;
        ydk::YLeaf ceedot3pauseextadminmode; //type: CeeDot3PauseExtAdminMode
        ydk::YLeaf ceedot3pauseextopermode; //type: CeeDot3PauseExtOperMode

}; // CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::CeeDot3PauseExtEntry


class CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable : public ydk::Entity
{
    public:
        CeeSubInterfaceTable();
        ~CeeSubInterfaceTable();

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

        class CeeSubInterfaceEntry; //type: CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::CeeSubInterfaceEntry

        ydk::YList ceesubinterfaceentry;
        
}; // CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable


class CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::CeeSubInterfaceEntry : public ydk::Entity
{
    public:
        CeeSubInterfaceEntry();
        ~CeeSubInterfaceEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf ceesubinterfacecount; //type: uint32

}; // CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::CeeSubInterfaceEntry


}
}

#endif /* _CISCO_ETHERLIKE_EXT_MIB_ */

