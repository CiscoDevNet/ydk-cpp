#ifndef _CISCO_IOS_XE_MPLS_FWD_OPER_
#define _CISCO_IOS_XE_MPLS_FWD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_mpls_fwd_oper {

class MplsForwardingTable : public ydk::Entity
{
    public:
        MplsForwardingTable();
        ~MplsForwardingTable();

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

        class LocalLabelEntry; //type: MplsForwardingTable::LocalLabelEntry

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_fwd_oper::MplsForwardingTable::LocalLabelEntry> > local_label_entry;
        
}; // MplsForwardingTable


class MplsForwardingTable::LocalLabelEntry : public ydk::Entity
{
    public:
        LocalLabelEntry();
        ~LocalLabelEntry();

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

        ydk::YLeaf local_label; //type: uint32
        class ForwardingInfo; //type: MplsForwardingTable::LocalLabelEntry::ForwardingInfo

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_fwd_oper::MplsForwardingTable::LocalLabelEntry::ForwardingInfo> > forwarding_info;
        
}; // MplsForwardingTable::LocalLabelEntry


class MplsForwardingTable::LocalLabelEntry::ForwardingInfo : public ydk::Entity
{
    public:
        ForwardingInfo();
        ~ForwardingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outgoing_interface; //type: one of string, enumeration
        ydk::YLeaf outgoing_label; //type: one of uint32, enumeration
        ydk::YLeaf label_switched_bytes; //type: uint64
        ydk::YLeaf next_hop; //type: one of string, union, enumeration
        class ConnectionInfo; //type: MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_fwd_oper::MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo> connection_info;
                class OutgoingInterface;
        class OutgoingLabel;
        class NextHop;

}; // MplsForwardingTable::LocalLabelEntry::ForwardingInfo


class MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo : public ydk::Entity
{
    public:
        ConnectionInfo();
        ~ConnectionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        ydk::YLeaf ip; //type: string
        ydk::YLeaf mask; //type: uint16
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf nh_id; //type: uint32
        ydk::YLeaf l2ckt_id; //type: uint32
        class TunnelTp; //type: MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_fwd_oper::MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp> tunnel_tp;
                class Type;

}; // MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo


class MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp : public ydk::Entity
{
    public:
        TunnelTp();
        ~TunnelTp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: uint32
        class SrcId; //type: MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId
        class DstId; //type: MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_fwd_oper::MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId> src_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_fwd_oper::MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId> dst_id;
        
}; // MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp


class MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId : public ydk::Entity
{
    public:
        SrcId();
        ~SrcId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf global; //type: uint32
        ydk::YLeaf node; //type: string

}; // MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId


class MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId : public ydk::Entity
{
    public:
        DstId();
        ~DstId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf global; //type: uint32
        ydk::YLeaf node; //type: string

}; // MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId

class MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingInterface : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf punt;
        static const ydk::Enum::YLeaf aggregate;
        static const ydk::Enum::YLeaf exception;
        static const ydk::Enum::YLeaf none;

};

class MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingLabel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_label;
        static const ydk::Enum::YLeaf pop_label;
        static const ydk::Enum::YLeaf aggregate;
        static const ydk::Enum::YLeaf explicit_null;
        static const ydk::Enum::YLeaf illegal;

};

class MplsForwardingTable::LocalLabelEntry::ForwardingInfo::NextHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf point2point;

};

class MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf tunnel;
        static const ydk::Enum::YLeaf nh_id;
        static const ydk::Enum::YLeaf l2ckt;
        static const ydk::Enum::YLeaf ip_vrf;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf tunnel_tp;

};


}
}

#endif /* _CISCO_IOS_XE_MPLS_FWD_OPER_ */

