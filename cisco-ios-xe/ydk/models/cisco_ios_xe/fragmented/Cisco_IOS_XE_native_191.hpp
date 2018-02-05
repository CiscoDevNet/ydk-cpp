#ifndef _CISCO_IOS_XE_NATIVE_191_
#define _CISCO_IOS_XE_NATIVE_191_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Exception : public ydk::Entity
{
    public:
        Exception();
        ~Exception();

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

        class Crashinfo; //type: Native::Exception::Crashinfo

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Exception::Crashinfo> crashinfo; // presence node
        
}; // Native::Exception


class Native::Exception::Crashinfo : public ydk::Entity
{
    public:
        Crashinfo();
        ~Crashinfo();

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

        ydk::YLeaf buffersize; //type: uint16

}; // Native::Exception::Crashinfo


class Native::Iox : public ydk::Entity
{
    public:
        Iox();
        ~Iox();

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


}; // Native::Iox


class Native::Arp : public ydk::Entity
{
    public:
        Arp();
        ~Arp();

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

        class ArpEntry; //type: Native::Arp::ArpEntry

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::ArpEntry> > arp_entry;
        
}; // Native::Arp


class Native::Arp::ArpEntry : public ydk::Entity
{
    public:
        ArpEntry();
        ~ArpEntry();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf hardware_address; //type: string
        ydk::YLeaf arp_type; //type: ArpType
        class ArpType;

}; // Native::Arp::ArpEntry


class Native::Esmc : public ydk::Entity
{
    public:
        Esmc();
        ~Esmc();

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

        ydk::YLeaf process; //type: empty

}; // Native::Esmc


class Native::BbaGroup : public ydk::Entity
{
    public:
        BbaGroup();
        ~BbaGroup();

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

        class Pppoe; //type: Native::BbaGroup::Pppoe

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BbaGroup::Pppoe> > pppoe;
        
}; // Native::BbaGroup


class Native::BbaGroup::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

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

        ydk::YLeaf id; //type: one of string, enumeration
        ydk::YLeaf virtual_template; //type: uint16
        class VendorTag; //type: Native::BbaGroup::Pppoe::VendorTag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BbaGroup::Pppoe::VendorTag> vendor_tag;
                class Id;

}; // Native::BbaGroup::Pppoe


class Native::BbaGroup::Pppoe::VendorTag : public ydk::Entity
{
    public:
        VendorTag();
        ~VendorTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf strip; //type: empty
        class CircuitId; //type: Native::BbaGroup::Pppoe::VendorTag::CircuitId
        class DslSyncRate; //type: Native::BbaGroup::Pppoe::VendorTag::DslSyncRate
        class RemoteId; //type: Native::BbaGroup::Pppoe::VendorTag::RemoteId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BbaGroup::Pppoe::VendorTag::CircuitId> circuit_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BbaGroup::Pppoe::VendorTag::DslSyncRate> dsl_sync_rate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BbaGroup::Pppoe::VendorTag::RemoteId> remote_id;
        
}; // Native::BbaGroup::Pppoe::VendorTag


class Native::BbaGroup::Pppoe::VendorTag::CircuitId : public ydk::Entity
{
    public:
        CircuitId();
        ~CircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service; //type: empty

}; // Native::BbaGroup::Pppoe::VendorTag::CircuitId


class Native::BbaGroup::Pppoe::VendorTag::DslSyncRate : public ydk::Entity
{
    public:
        DslSyncRate();
        ~DslSyncRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service; //type: empty

}; // Native::BbaGroup::Pppoe::VendorTag::DslSyncRate


class Native::BbaGroup::Pppoe::VendorTag::RemoteId : public ydk::Entity
{
    public:
        RemoteId();
        ~RemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service; //type: empty

}; // Native::BbaGroup::Pppoe::VendorTag::RemoteId


class Native::Card : public ydk::Entity
{
    public:
        Card();
        ~Card();

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

        ydk::YLeaf type; //type: Type
        ydk::YLeaf slot; //type: uint32
        ydk::YLeaf bay; //type: uint32
        class Type;

}; // Native::Card


class Native::Cef : public ydk::Entity
{
    public:
        Cef();
        ~Cef();

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

        class Table; //type: Native::Cef::Table

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table> table;
        
}; // Native::Cef


class Native::Cef::Table : public ydk::Entity
{
    public:
        Table();
        ~Table();

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

        ydk::YLeaf rate_monitor_period; //type: uint8
        class OutputChain; //type: Native::Cef::Table::OutputChain
        class ConsistencyCheck; //type: Native::Cef::Table::ConsistencyCheck
        class Download; //type: Native::Cef::Table::Download

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::OutputChain> output_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck> consistency_check;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download> download;
        
}; // Native::Cef::Table


class Native::Cef::Table::OutputChain : public ydk::Entity
{
    public:
        OutputChain();
        ~OutputChain();

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

        class Build; //type: Native::Cef::Table::OutputChain::Build

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::OutputChain::Build> build;
        
}; // Native::Cef::Table::OutputChain


class Native::Cef::Table::OutputChain::Build : public ydk::Entity
{
    public:
        Build();
        ~Build();

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

        class Favor; //type: Native::Cef::Table::OutputChain::Build::Favor
        class Indirection; //type: Native::Cef::Table::OutputChain::Build::Indirection
        class InplaceModify; //type: Native::Cef::Table::OutputChain::Build::InplaceModify

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::OutputChain::Build::Favor> favor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::OutputChain::Build::Indirection> indirection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::OutputChain::Build::InplaceModify> inplace_modify;
        
}; // Native::Cef::Table::OutputChain::Build


class Native::Cef::Table::OutputChain::Build::Favor : public ydk::Entity
{
    public:
        Favor();
        ~Favor();

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

        ydk::YLeaf convergence_speed; //type: empty
        ydk::YLeaf memory_utilization; //type: empty

}; // Native::Cef::Table::OutputChain::Build::Favor


class Native::Cef::Table::OutputChain::Build::Indirection : public ydk::Entity
{
    public:
        Indirection();
        ~Indirection();

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

        ydk::YLeaf ipv4_to_mpls; //type: empty
        ydk::YLeaf ipv6_to_mpls; //type: empty
        ydk::YLeaf mpls_end_of_stack; //type: empty
        ydk::YLeaf mpls_non_end_of_stack; //type: empty
        ydk::YLeaf non_recursive_prefix; //type: empty
        ydk::YLeaf recursive_prefix; //type: empty

}; // Native::Cef::Table::OutputChain::Build::Indirection


class Native::Cef::Table::OutputChain::Build::InplaceModify : public ydk::Entity
{
    public:
        InplaceModify();
        ~InplaceModify();

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

        ydk::YLeaf load_sharing; //type: empty
        ydk::YLeaf push_counter; //type: empty

}; // Native::Cef::Table::OutputChain::Build::InplaceModify


class Native::Cef::Table::ConsistencyCheck : public ydk::Entity
{
    public:
        ConsistencyCheck();
        ~ConsistencyCheck();

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

        class Ipv4; //type: Native::Cef::Table::ConsistencyCheck::Ipv4
        class Ipv6; //type: Native::Cef::Table::ConsistencyCheck::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6> ipv6;
        
}; // Native::Cef::Table::ConsistencyCheck


class Native::Cef::Table::ConsistencyCheck::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        ydk::YLeaf data_checking; //type: empty
        ydk::YLeaf error_message; //type: empty
        class AutoRepair; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair
        class Type; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair> auto_repair;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type> type;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv4


class Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair : public ydk::Entity
{
    public:
        AutoRepair();
        ~AutoRepair();

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

        ydk::YLeaf delay; //type: uint16
        ydk::YLeaf holddown; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

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

        ydk::YLeaf lc_detect; //type: empty
        class ScanIosRib; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib
        class ScanRibIos; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos
        class ScanLcRp; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp
        class ScanRpLc; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib> scan_ios_rib;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos> scan_rib_ios;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp> scan_lc_rp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc> scan_rp_lc;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib : public ydk::Entity
{
    public:
        ScanIosRib();
        ~ScanIosRib();

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

        class ScanOpt; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt> scan_opt;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt : public ydk::Entity
{
    public:
        ScanOpt();
        ~ScanOpt();

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

        ydk::YLeaf count; //type: uint16
        ydk::YLeaf period; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos : public ydk::Entity
{
    public:
        ScanRibIos();
        ~ScanRibIos();

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

        class ScanOpt; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt> scan_opt;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt : public ydk::Entity
{
    public:
        ScanOpt();
        ~ScanOpt();

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

        ydk::YLeaf count; //type: uint16
        ydk::YLeaf period; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp : public ydk::Entity
{
    public:
        ScanLcRp();
        ~ScanLcRp();

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

        class ScanOpt; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt> scan_opt;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt : public ydk::Entity
{
    public:
        ScanOpt();
        ~ScanOpt();

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

        ydk::YLeaf count; //type: uint16
        ydk::YLeaf period; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc : public ydk::Entity
{
    public:
        ScanRpLc();
        ~ScanRpLc();

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

        class ScanOpt; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt> scan_opt;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt : public ydk::Entity
{
    public:
        ScanOpt();
        ~ScanOpt();

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

        ydk::YLeaf count; //type: uint16
        ydk::YLeaf period; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt


class Native::Cef::Table::ConsistencyCheck::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

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

        ydk::YLeaf data_checking; //type: empty
        ydk::YLeaf error_message; //type: empty
        class AutoRepair; //type: Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair
        class Type; //type: Native::Cef::Table::ConsistencyCheck::Ipv6::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair> auto_repair;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6::Type> type;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv6


class Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair : public ydk::Entity
{
    public:
        AutoRepair();
        ~AutoRepair();

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

        ydk::YLeaf delay; //type: uint16
        ydk::YLeaf holddown; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair


class Native::Cef::Table::ConsistencyCheck::Ipv6::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

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

        ydk::YLeaf lc_detect; //type: empty
        class ScanIosRib; //type: Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib
        class ScanLcRp; //type: Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp
        class ScanRpLc; //type: Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib> scan_ios_rib;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp> scan_lc_rp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc> scan_rp_lc;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv6::Type


class Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib : public ydk::Entity
{
    public:
        ScanIosRib();
        ~ScanIosRib();

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

        class ScanOpt; //type: Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt> scan_opt;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib


class Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt : public ydk::Entity
{
    public:
        ScanOpt();
        ~ScanOpt();

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

        ydk::YLeaf count; //type: uint16
        ydk::YLeaf period; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt


class Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp : public ydk::Entity
{
    public:
        ScanLcRp();
        ~ScanLcRp();

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

        class ScanOpt; //type: Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt> scan_opt;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp


class Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt : public ydk::Entity
{
    public:
        ScanOpt();
        ~ScanOpt();

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

        ydk::YLeaf count; //type: uint16
        ydk::YLeaf period; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt


class Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc : public ydk::Entity
{
    public:
        ScanRpLc();
        ~ScanRpLc();

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

        class ScanOpt; //type: Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt> scan_opt;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc


class Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt : public ydk::Entity
{
    public:
        ScanOpt();
        ~ScanOpt();

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

        ydk::YLeaf count; //type: uint16
        ydk::YLeaf period; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt


class Native::Cef::Table::Download : public ydk::Entity
{
    public:
        Download();
        ~Download();

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

        class CatchAll; //type: Native::Cef::Table::Download::CatchAll
        class ConnectedRoute; //type: Native::Cef::Table::Download::ConnectedRoute
        class DefaultRoute; //type: Native::Cef::Table::Download::DefaultRoute
        class ReceiveRoute; //type: Native::Cef::Table::Download::ReceiveRoute
        class RecursiveDependents; //type: Native::Cef::Table::Download::RecursiveDependents
        class RouteInVrf; //type: Native::Cef::Table::Download::RouteInVrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::CatchAll> catch_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::ConnectedRoute> connected_route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::DefaultRoute> default_route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::ReceiveRoute> receive_route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::RecursiveDependents> recursive_dependents;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::RouteInVrf> route_in_vrf;
        
}; // Native::Cef::Table::Download


class Native::Cef::Table::Download::CatchAll : public ydk::Entity
{
    public:
        CatchAll();
        ~CatchAll();

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

        class Priority; //type: Native::Cef::Table::Download::CatchAll::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::CatchAll::Priority> priority;
        
}; // Native::Cef::Table::Download::CatchAll


class Native::Cef::Table::Download::CatchAll::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

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

        ydk::YLeaf priority1; //type: empty
        ydk::YLeaf priority2; //type: empty
        ydk::YLeaf priority3; //type: empty
        ydk::YLeaf priority4; //type: empty

}; // Native::Cef::Table::Download::CatchAll::Priority


class Native::Cef::Table::Download::ConnectedRoute : public ydk::Entity
{
    public:
        ConnectedRoute();
        ~ConnectedRoute();

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

        class Priority; //type: Native::Cef::Table::Download::ConnectedRoute::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::ConnectedRoute::Priority> priority;
        
}; // Native::Cef::Table::Download::ConnectedRoute


class Native::Cef::Table::Download::ConnectedRoute::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

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

        ydk::YLeaf priority1; //type: empty
        ydk::YLeaf priority2; //type: empty
        ydk::YLeaf priority3; //type: empty
        ydk::YLeaf priority4; //type: empty

}; // Native::Cef::Table::Download::ConnectedRoute::Priority


class Native::Cef::Table::Download::DefaultRoute : public ydk::Entity
{
    public:
        DefaultRoute();
        ~DefaultRoute();

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

        class Priority; //type: Native::Cef::Table::Download::DefaultRoute::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::DefaultRoute::Priority> priority;
        
}; // Native::Cef::Table::Download::DefaultRoute


class Native::Cef::Table::Download::DefaultRoute::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

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

        ydk::YLeaf priority1; //type: empty
        ydk::YLeaf priority2; //type: empty
        ydk::YLeaf priority3; //type: empty
        ydk::YLeaf priority4; //type: empty

}; // Native::Cef::Table::Download::DefaultRoute::Priority


class Native::Cef::Table::Download::ReceiveRoute : public ydk::Entity
{
    public:
        ReceiveRoute();
        ~ReceiveRoute();

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

        class Priority; //type: Native::Cef::Table::Download::ReceiveRoute::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::ReceiveRoute::Priority> priority;
        
}; // Native::Cef::Table::Download::ReceiveRoute


class Native::Cef::Table::Download::ReceiveRoute::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

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

        ydk::YLeaf priority1; //type: empty
        ydk::YLeaf priority2; //type: empty
        ydk::YLeaf priority3; //type: empty
        ydk::YLeaf priority4; //type: empty

}; // Native::Cef::Table::Download::ReceiveRoute::Priority


class Native::Cef::Table::Download::RecursiveDependents : public ydk::Entity
{
    public:
        RecursiveDependents();
        ~RecursiveDependents();

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

        class Priority; //type: Native::Cef::Table::Download::RecursiveDependents::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::RecursiveDependents::Priority> priority;
        
}; // Native::Cef::Table::Download::RecursiveDependents


class Native::Cef::Table::Download::RecursiveDependents::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

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

        ydk::YLeaf priority1; //type: empty
        ydk::YLeaf priority2; //type: empty
        ydk::YLeaf priority3; //type: empty
        ydk::YLeaf priority4; //type: empty

}; // Native::Cef::Table::Download::RecursiveDependents::Priority


class Native::Cef::Table::Download::RouteInVrf : public ydk::Entity
{
    public:
        RouteInVrf();
        ~RouteInVrf();

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

        class Priority; //type: Native::Cef::Table::Download::RouteInVrf::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::RouteInVrf::Priority> priority;
        
}; // Native::Cef::Table::Download::RouteInVrf


class Native::Cef::Table::Download::RouteInVrf::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

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

        ydk::YLeaf priority1; //type: empty
        ydk::YLeaf priority2; //type: empty
        ydk::YLeaf priority3; //type: empty
        ydk::YLeaf priority4; //type: empty

}; // Native::Cef::Table::Download::RouteInVrf::Priority


class Native::Diagnostic : public ydk::Entity
{
    public:
        Diagnostic();
        ~Diagnostic();

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

        class Bootup; //type: Native::Diagnostic::Bootup
        class EventLog; //type: Native::Diagnostic::EventLog
        class Monitor; //type: Native::Diagnostic::Monitor
        class Schedule; //type: Native::Diagnostic::Schedule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Bootup> bootup;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::EventLog> event_log;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor> monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule> schedule;
        
}; // Native::Diagnostic


class Native::Diagnostic::Bootup : public ydk::Entity
{
    public:
        Bootup();
        ~Bootup();

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

        ydk::YLeaf level; //type: Level
        class Level;

}; // Native::Diagnostic::Bootup


class Native::Diagnostic::EventLog : public ydk::Entity
{
    public:
        EventLog();
        ~EventLog();

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

        ydk::YLeaf size; //type: uint16

}; // Native::Diagnostic::EventLog


class Native::Diagnostic::Monitor : public ydk::Entity
{
    public:
        Monitor();
        ~Monitor();

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

        ydk::YLeaf syslog; //type: empty
        class Interval; //type: Native::Diagnostic::Monitor::Interval
        class Switch; //type: Native::Diagnostic::Monitor::Switch
        class Threshold; //type: Native::Diagnostic::Monitor::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Interval> interval;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Switch> > switch_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold> threshold;
        
}; // Native::Diagnostic::Monitor


class Native::Diagnostic::Monitor::Interval : public ydk::Entity
{
    public:
        Interval();
        ~Interval();

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

        class Switch; //type: Native::Diagnostic::Monitor::Interval::Switch

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Interval::Switch> switch_;
        
}; // Native::Diagnostic::Monitor::Interval


class Native::Diagnostic::Monitor::Interval::Switch : public ydk::Entity
{
    public:
        Switch();
        ~Switch();

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

        class Switch_; //type: Native::Diagnostic::Monitor::Interval::Switch::Switch_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Interval::Switch::Switch_> > switch_;
        
}; // Native::Diagnostic::Monitor::Interval::Switch


class Native::Diagnostic::Monitor::Interval::Switch::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

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

        ydk::YLeaf number; //type: uint8
        class Test; //type: Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test> test;
        
}; // Native::Diagnostic::Monitor::Interval::Switch::Switch_


class Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test : public ydk::Entity
{
    public:
        Test();
        ~Test();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TestIds; //type: Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds
        class All; //type: Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds> > test_ids;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All> all;
        
}; // Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test


class Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds : public ydk::Entity
{
    public:
        TestIds();
        ~TestIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf hh_mm_ss; //type: string
        ydk::YLeaf milli_seconds; //type: uint16
        ydk::YLeaf number_of_days; //type: uint16

}; // Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::TestIds


class Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm_ss; //type: string
        ydk::YLeaf milli_seconds; //type: uint16
        ydk::YLeaf number_of_days; //type: uint16

}; // Native::Diagnostic::Monitor::Interval::Switch::Switch_::Test::All


class Native::Diagnostic::Monitor::Switch : public ydk::Entity
{
    public:
        Switch();
        ~Switch();

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

        ydk::YLeaf number; //type: uint8
        class Test; //type: Native::Diagnostic::Monitor::Switch::Test

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Switch::Test> test;
        
}; // Native::Diagnostic::Monitor::Switch


class Native::Diagnostic::Monitor::Switch::Test : public ydk::Entity
{
    public:
        Test();
        ~Test();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf all; //type: empty

}; // Native::Diagnostic::Monitor::Switch::Test


class Native::Diagnostic::Monitor::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

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

        class Switch; //type: Native::Diagnostic::Monitor::Threshold::Switch

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold::Switch> > switch_;
        
}; // Native::Diagnostic::Monitor::Threshold


class Native::Diagnostic::Monitor::Threshold::Switch : public ydk::Entity
{
    public:
        Switch();
        ~Switch();

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

        ydk::YLeaf number; //type: uint8
        class Test; //type: Native::Diagnostic::Monitor::Threshold::Switch::Test

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold::Switch::Test> test;
        
}; // Native::Diagnostic::Monitor::Threshold::Switch


class Native::Diagnostic::Monitor::Threshold::Switch::Test : public ydk::Entity
{
    public:
        Test();
        ~Test();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TestIds; //type: Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds
        class All; //type: Native::Diagnostic::Monitor::Threshold::Switch::Test::All

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds> > test_ids;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold::Switch::Test::All> all;
        
}; // Native::Diagnostic::Monitor::Threshold::Switch::Test


class Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds : public ydk::Entity
{
    public:
        TestIds();
        ~TestIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class Failure; //type: Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure> failure;
        
}; // Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds


class Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure : public ydk::Entity
{
    public:
        Failure();
        ~Failure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Count; //type: Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count> > count;
        
}; // Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure


class Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count : public ydk::Entity
{
    public:
        Count();
        ~Count();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint16
        ydk::YLeaf days; //type: uint32
        ydk::YLeaf hours; //type: uint32
        ydk::YLeaf milli_seconds; //type: uint32
        ydk::YLeaf minutes; //type: uint32
        ydk::YLeaf runs; //type: uint16
        ydk::YLeaf seconds; //type: uint32

}; // Native::Diagnostic::Monitor::Threshold::Switch::Test::TestIds::Failure::Count


class Native::Diagnostic::Monitor::Threshold::Switch::Test::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Failure; //type: Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure> failure;
        
}; // Native::Diagnostic::Monitor::Threshold::Switch::Test::All


class Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure : public ydk::Entity
{
    public:
        Failure();
        ~Failure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Count; //type: Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count> > count;
        
}; // Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure


class Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count : public ydk::Entity
{
    public:
        Count();
        ~Count();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint16
        ydk::YLeaf days; //type: uint32
        ydk::YLeaf hours; //type: uint32
        ydk::YLeaf milli_seconds; //type: uint32
        ydk::YLeaf minutes; //type: uint32
        ydk::YLeaf runs; //type: uint16
        ydk::YLeaf seconds; //type: uint32

}; // Native::Diagnostic::Monitor::Threshold::Switch::Test::All::Failure::Count


class Native::Diagnostic::Schedule : public ydk::Entity
{
    public:
        Schedule();
        ~Schedule();

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

        class Switch; //type: Native::Diagnostic::Schedule::Switch

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch> > switch_;
        
}; // Native::Diagnostic::Schedule


class Native::Diagnostic::Schedule::Switch : public ydk::Entity
{
    public:
        Switch();
        ~Switch();

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

        ydk::YLeaf switch_number; //type: uint8
        class Test; //type: Native::Diagnostic::Schedule::Switch::Test

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test> test;
        
}; // Native::Diagnostic::Schedule::Switch


class Native::Diagnostic::Schedule::Switch::Test : public ydk::Entity
{
    public:
        Test();
        ~Test();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TestIds; //type: Native::Diagnostic::Schedule::Switch::Test::TestIds
        class All; //type: Native::Diagnostic::Schedule::Switch::Test::All
        class Basic; //type: Native::Diagnostic::Schedule::Switch::Test::Basic
        class Complete; //type: Native::Diagnostic::Schedule::Switch::Test::Complete
        class Minimal; //type: Native::Diagnostic::Schedule::Switch::Test::Minimal
        class NonDisruptive; //type: Native::Diagnostic::Schedule::Switch::Test::NonDisruptive
        class PerPort; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::TestIds> > test_ids;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::All> all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Basic> basic;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Complete> complete;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Minimal> minimal;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::NonDisruptive> non_disruptive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort> per_port;
        
}; // Native::Diagnostic::Schedule::Switch::Test


class Native::Diagnostic::Schedule::Switch::Test::TestIds : public ydk::Entity
{
    public:
        TestIds();
        ~TestIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::TestIds::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly
        class Port; //type: Native::Diagnostic::Schedule::Switch::Test::TestIds::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::TestIds::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly> weekly;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::TestIds::Port> port;
        
}; // Native::Diagnostic::Schedule::Switch::Test::TestIds


class Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::TestIds::Daily


class Native::Diagnostic::Schedule::Switch::Test::TestIds::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::TestIds::On


class Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::TestIds::Weekly


class Native::Diagnostic::Schedule::Switch::Test::TestIds::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfacePortNumber; //type: Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber
        class PortNumberList; //type: Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList
        class All; //type: Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber> > interface_port_number;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList> > port_number_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All> all;
        
}; // Native::Diagnostic::Schedule::Switch::Test::TestIds::Port


class Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber : public ydk::Entity
{
    public:
        InterfacePortNumber();
        ~InterfacePortNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber


class Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Daily


class Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::On


class Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::InterfacePortNumber::Weekly


class Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList : public ydk::Entity
{
    public:
        PortNumberList();
        ~PortNumberList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_list; //type: string
        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList


class Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Daily


class Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::On


class Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::PortNumberList::Weekly


class Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All


class Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Daily


class Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::On


class Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::TestIds::Port::All::Weekly


class Native::Diagnostic::Schedule::Switch::Test::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::All::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::All::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::All::Weekly
        class Port; //type: Native::Diagnostic::Schedule::Switch::Test::All::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::All::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::All::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::All::Weekly> weekly;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::All::Port> port;
        
}; // Native::Diagnostic::Schedule::Switch::Test::All


class Native::Diagnostic::Schedule::Switch::Test::All::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::All::Daily


class Native::Diagnostic::Schedule::Switch::Test::All::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::All::On


class Native::Diagnostic::Schedule::Switch::Test::All::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::All::Weekly


class Native::Diagnostic::Schedule::Switch::Test::All::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfacePortNumber; //type: Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber
        class PortNumberList; //type: Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList
        class All_; //type: Native::Diagnostic::Schedule::Switch::Test::All::Port::All_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber> > interface_port_number;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList> > port_number_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::All::Port::All_> all;
        
}; // Native::Diagnostic::Schedule::Switch::Test::All::Port


class Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber : public ydk::Entity
{
    public:
        InterfacePortNumber();
        ~InterfacePortNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber


class Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Daily


class Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::On


class Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::All::Port::InterfacePortNumber::Weekly


class Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList : public ydk::Entity
{
    public:
        PortNumberList();
        ~PortNumberList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_list; //type: string
        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList


class Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Daily


class Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::On


class Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::All::Port::PortNumberList::Weekly


class Native::Diagnostic::Schedule::Switch::Test::All::Port::All_ : public ydk::Entity
{
    public:
        All_();
        ~All_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::All::Port::All_


class Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Daily


class Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::On


class Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::All::Port::All_::Weekly


class Native::Diagnostic::Schedule::Switch::Test::Basic : public ydk::Entity
{
    public:
        Basic();
        ~Basic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::Basic::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::Basic::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly
        class Port; //type: Native::Diagnostic::Schedule::Switch::Test::Basic::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Basic::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Basic::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly> weekly;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Basic::Port> port;
        
}; // Native::Diagnostic::Schedule::Switch::Test::Basic


class Native::Diagnostic::Schedule::Switch::Test::Basic::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Basic::Daily


class Native::Diagnostic::Schedule::Switch::Test::Basic::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Basic::On


class Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Basic::Weekly


class Native::Diagnostic::Schedule::Switch::Test::Basic::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfacePortNumber; //type: Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber
        class PortNumberList; //type: Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList
        class All; //type: Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber> > interface_port_number;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList> > port_number_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All> all;
        
}; // Native::Diagnostic::Schedule::Switch::Test::Basic::Port


class Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber : public ydk::Entity
{
    public:
        InterfacePortNumber();
        ~InterfacePortNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber


class Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Daily


class Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::On


class Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Basic::Port::InterfacePortNumber::Weekly


class Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList : public ydk::Entity
{
    public:
        PortNumberList();
        ~PortNumberList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_list; //type: string
        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList


class Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Daily


class Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::On


class Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Basic::Port::PortNumberList::Weekly


class Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All


class Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Daily


class Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::On


class Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Basic::Port::All::Weekly


class Native::Diagnostic::Schedule::Switch::Test::Complete : public ydk::Entity
{
    public:
        Complete();
        ~Complete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::Complete::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::Complete::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Complete::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Complete::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::Complete


class Native::Diagnostic::Schedule::Switch::Test::Complete::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Complete::Daily


class Native::Diagnostic::Schedule::Switch::Test::Complete::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Complete::On


class Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Complete::Weekly


class Native::Diagnostic::Schedule::Switch::Test::Minimal : public ydk::Entity
{
    public:
        Minimal();
        ~Minimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::Minimal::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Minimal::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::Minimal


class Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Minimal::Daily


class Native::Diagnostic::Schedule::Switch::Test::Minimal::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Minimal::On


class Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::Minimal::Weekly


class Native::Diagnostic::Schedule::Switch::Test::NonDisruptive : public ydk::Entity
{
    public:
        NonDisruptive();
        ~NonDisruptive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly
        class Port; //type: Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly> weekly;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port> port;
        
}; // Native::Diagnostic::Schedule::Switch::Test::NonDisruptive


class Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Daily


class Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::On


class Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Weekly


class Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfacePortNumber; //type: Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber
        class PortNumberList; //type: Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList
        class All; //type: Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber> > interface_port_number;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList> > port_number_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All> all;
        
}; // Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port


class Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber : public ydk::Entity
{
    public:
        InterfacePortNumber();
        ~InterfacePortNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber


class Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Daily


class Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::On


class Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::InterfacePortNumber::Weekly


class Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList : public ydk::Entity
{
    public:
        PortNumberList();
        ~PortNumberList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_list; //type: string
        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList


class Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Daily


class Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::On


class Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::PortNumberList::Weekly

class Native::Arp::ArpEntry::ArpType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ARPA;
        static const ydk::Enum::YLeaf SAP;
        static const ydk::Enum::YLeaf SMDS;
        static const ydk::Enum::YLeaf SNAP;
        static const ydk::Enum::YLeaf SRP_A;
        static const ydk::Enum::YLeaf SRP_B;

};

class Native::BbaGroup::Pppoe::Id : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf global;

};

class Native::Card::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf t1;
        static const ydk::Enum::YLeaf e1;

};

class Native::Diagnostic::Bootup::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf complete;
        static const ydk::Enum::YLeaf minimal;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_191_ */

