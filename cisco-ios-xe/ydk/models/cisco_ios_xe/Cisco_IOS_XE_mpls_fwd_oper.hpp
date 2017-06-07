#ifndef _CISCO_IOS_XE_MPLS_FWD_OPER_
#define _CISCO_IOS_XE_MPLS_FWD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_mpls_fwd_oper {

class MplsForwardingTable : public Entity
{
    public:
        MplsForwardingTable();
        ~MplsForwardingTable();

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

        class LocalLabelEntry; //type: MplsForwardingTable::LocalLabelEntry

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_fwd_oper::MplsForwardingTable::LocalLabelEntry> > local_label_entry;
        
}; // MplsForwardingTable


class MplsForwardingTable::LocalLabelEntry : public Entity
{
    public:
        LocalLabelEntry();
        ~LocalLabelEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_label; //type: uint32
        class ForwardingInfo; //type: MplsForwardingTable::LocalLabelEntry::ForwardingInfo

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_fwd_oper::MplsForwardingTable::LocalLabelEntry::ForwardingInfo> > forwarding_info;
        
}; // MplsForwardingTable::LocalLabelEntry


class MplsForwardingTable::LocalLabelEntry::ForwardingInfo : public Entity
{
    public:
        ForwardingInfo();
        ~ForwardingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf outgoing_interface; //type: one of string, enumeration
        YLeaf outgoing_label; //type: one of uint32, enumeration
        YLeaf label_switched_bytes; //type: uint64
        YLeaf next_hop; //type: one of union, string, enumeration
        class ConnectionInfo; //type: MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo

        std::shared_ptr<Cisco_IOS_XE_mpls_fwd_oper::MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo> connection_info;
                class OutgoingInterfaceEnum;
        class OutgoingLabelEnum;
        class NextHopEnum;

}; // MplsForwardingTable::LocalLabelEntry::ForwardingInfo


class MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo : public Entity
{
    public:
        ConnectionInfo();
        ~ConnectionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: TypeEnum
        YLeaf ip; //type: string
        YLeaf mask; //type: uint16
        YLeaf tunnel_id; //type: uint32
        YLeaf vrf_id; //type: uint32
        YLeaf nh_id; //type: uint32
        YLeaf l2ckt_id; //type: uint32
        class TunnelTp; //type: MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp

        std::shared_ptr<Cisco_IOS_XE_mpls_fwd_oper::MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp> tunnel_tp;
                class TypeEnum;

}; // MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo


class MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp : public Entity
{
    public:
        TunnelTp();
        ~TunnelTp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel; //type: uint32
        class SrcId; //type: MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId
        class DstId; //type: MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId

        std::shared_ptr<Cisco_IOS_XE_mpls_fwd_oper::MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId> dst_id;
        std::shared_ptr<Cisco_IOS_XE_mpls_fwd_oper::MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId> src_id;
        
}; // MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp


class MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId : public Entity
{
    public:
        SrcId();
        ~SrcId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf global; //type: uint32
        YLeaf node; //type: string

}; // MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId


class MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId : public Entity
{
    public:
        DstId();
        ~DstId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf global; //type: uint32
        YLeaf node; //type: string

}; // MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId

class MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingInterfaceEnum : public Enum
{
    public:
        static const Enum::YLeaf drop;
        static const Enum::YLeaf punt;
        static const Enum::YLeaf aggregate;
        static const Enum::YLeaf exception;
        static const Enum::YLeaf none;

};

class MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingLabelEnum : public Enum
{
    public:
        static const Enum::YLeaf no_label;
        static const Enum::YLeaf pop_label;
        static const Enum::YLeaf aggregate;
        static const Enum::YLeaf explicit_null;
        static const Enum::YLeaf illegal;

};

class MplsForwardingTable::LocalLabelEntry::ForwardingInfo::NextHopEnum : public Enum
{
    public:
        static const Enum::YLeaf point2point;

};

class MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ip;
        static const Enum::YLeaf tunnel;
        static const Enum::YLeaf nh_id;
        static const Enum::YLeaf l2ckt;
        static const Enum::YLeaf ip_vrf;
        static const Enum::YLeaf none;
        static const Enum::YLeaf tunnel_tp;

};


}
}

#endif /* _CISCO_IOS_XE_MPLS_FWD_OPER_ */

