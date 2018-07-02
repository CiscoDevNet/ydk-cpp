#ifndef _P_BRIDGE_MIB_
#define _P_BRIDGE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace P_BRIDGE_MIB {

class PBRIDGEMIB : public ydk::Entity
{
    public:
        PBRIDGEMIB();
        ~PBRIDGEMIB();

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

        class Dot1dExtBase; //type: PBRIDGEMIB::Dot1dExtBase
        class Dot1dTpHCPortTable; //type: PBRIDGEMIB::Dot1dTpHCPortTable
        class Dot1dTpPortOverflowTable; //type: PBRIDGEMIB::Dot1dTpPortOverflowTable
        class Dot1dUserPriorityRegenTable; //type: PBRIDGEMIB::Dot1dUserPriorityRegenTable
        class Dot1dTrafficClassTable; //type: PBRIDGEMIB::Dot1dTrafficClassTable
        class Dot1dPortOutboundAccessPriorityTable; //type: PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable

        std::shared_ptr<cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1dExtBase> dot1dextbase;
        std::shared_ptr<cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1dTpHCPortTable> dot1dtphcporttable;
        std::shared_ptr<cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1dTpPortOverflowTable> dot1dtpportoverflowtable;
        std::shared_ptr<cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1dUserPriorityRegenTable> dot1duserpriorityregentable;
        std::shared_ptr<cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1dTrafficClassTable> dot1dtrafficclasstable;
        std::shared_ptr<cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable> dot1dportoutboundaccessprioritytable;
        
}; // PBRIDGEMIB


class PBRIDGEMIB::Dot1dExtBase : public ydk::Entity
{
    public:
        Dot1dExtBase();
        ~Dot1dExtBase();

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

        ydk::YLeaf dot1ddevicecapabilities; //type: Dot1dDeviceCapabilities
        ydk::YLeaf dot1dtrafficclassesenabled; //type: boolean
        ydk::YLeaf dot1dgmrpstatus; //type: EnabledStatus

}; // PBRIDGEMIB::Dot1dExtBase


class PBRIDGEMIB::Dot1dTpHCPortTable : public ydk::Entity
{
    public:
        Dot1dTpHCPortTable();
        ~Dot1dTpHCPortTable();

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

        class Dot1dTpHCPortEntry; //type: PBRIDGEMIB::Dot1dTpHCPortTable::Dot1dTpHCPortEntry

        ydk::YList dot1dtphcportentry;
        
}; // PBRIDGEMIB::Dot1dTpHCPortTable


class PBRIDGEMIB::Dot1dTpHCPortTable::Dot1dTpHCPortEntry : public ydk::Entity
{
    public:
        Dot1dTpHCPortEntry();
        ~Dot1dTpHCPortEntry();

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

        //type: int32 (refers to cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry::dot1dtpport)
        ydk::YLeaf dot1dtpport;
        ydk::YLeaf dot1dtphcportinframes; //type: uint64
        ydk::YLeaf dot1dtphcportoutframes; //type: uint64
        ydk::YLeaf dot1dtphcportindiscards; //type: uint64

}; // PBRIDGEMIB::Dot1dTpHCPortTable::Dot1dTpHCPortEntry


class PBRIDGEMIB::Dot1dTpPortOverflowTable : public ydk::Entity
{
    public:
        Dot1dTpPortOverflowTable();
        ~Dot1dTpPortOverflowTable();

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

        class Dot1dTpPortOverflowEntry; //type: PBRIDGEMIB::Dot1dTpPortOverflowTable::Dot1dTpPortOverflowEntry

        ydk::YList dot1dtpportoverflowentry;
        
}; // PBRIDGEMIB::Dot1dTpPortOverflowTable


class PBRIDGEMIB::Dot1dTpPortOverflowTable::Dot1dTpPortOverflowEntry : public ydk::Entity
{
    public:
        Dot1dTpPortOverflowEntry();
        ~Dot1dTpPortOverflowEntry();

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

        //type: int32 (refers to cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry::dot1dtpport)
        ydk::YLeaf dot1dtpport;
        ydk::YLeaf dot1dtpportinoverflowframes; //type: uint32
        ydk::YLeaf dot1dtpportoutoverflowframes; //type: uint32
        ydk::YLeaf dot1dtpportinoverflowdiscards; //type: uint32

}; // PBRIDGEMIB::Dot1dTpPortOverflowTable::Dot1dTpPortOverflowEntry


class PBRIDGEMIB::Dot1dUserPriorityRegenTable : public ydk::Entity
{
    public:
        Dot1dUserPriorityRegenTable();
        ~Dot1dUserPriorityRegenTable();

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

        class Dot1dUserPriorityRegenEntry; //type: PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenEntry

        ydk::YList dot1duserpriorityregenentry;
        
}; // PBRIDGEMIB::Dot1dUserPriorityRegenTable


class PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenEntry : public ydk::Entity
{
    public:
        Dot1dUserPriorityRegenEntry();
        ~Dot1dUserPriorityRegenEntry();

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

        //type: int32 (refers to cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        ydk::YLeaf dot1duserpriority; //type: int32
        ydk::YLeaf dot1dregenuserpriority; //type: int32

}; // PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenEntry


class PBRIDGEMIB::Dot1dTrafficClassTable : public ydk::Entity
{
    public:
        Dot1dTrafficClassTable();
        ~Dot1dTrafficClassTable();

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

        class Dot1dTrafficClassEntry; //type: PBRIDGEMIB::Dot1dTrafficClassTable::Dot1dTrafficClassEntry

        ydk::YList dot1dtrafficclassentry;
        
}; // PBRIDGEMIB::Dot1dTrafficClassTable


class PBRIDGEMIB::Dot1dTrafficClassTable::Dot1dTrafficClassEntry : public ydk::Entity
{
    public:
        Dot1dTrafficClassEntry();
        ~Dot1dTrafficClassEntry();

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

        //type: int32 (refers to cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        ydk::YLeaf dot1dtrafficclasspriority; //type: int32
        ydk::YLeaf dot1dtrafficclass; //type: int32

}; // PBRIDGEMIB::Dot1dTrafficClassTable::Dot1dTrafficClassEntry


class PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable : public ydk::Entity
{
    public:
        Dot1dPortOutboundAccessPriorityTable();
        ~Dot1dPortOutboundAccessPriorityTable();

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

        class Dot1dPortOutboundAccessPriorityEntry; //type: PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::Dot1dPortOutboundAccessPriorityEntry

        ydk::YList dot1dportoutboundaccesspriorityentry;
        
}; // PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable


class PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::Dot1dPortOutboundAccessPriorityEntry : public ydk::Entity
{
    public:
        Dot1dPortOutboundAccessPriorityEntry();
        ~Dot1dPortOutboundAccessPriorityEntry();

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

        //type: int32 (refers to cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        //type: int32 (refers to cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenEntry::dot1dregenuserpriority)
        ydk::YLeaf dot1dregenuserpriority;
        ydk::YLeaf dot1dportoutboundaccesspriority; //type: int32

}; // PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::Dot1dPortOutboundAccessPriorityEntry

class EnabledStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};


}
}

#endif /* _P_BRIDGE_MIB_ */

