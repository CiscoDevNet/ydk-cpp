#ifndef _CISCO_IOS_XR_MPLS_OAM_OPER_
#define _CISCO_IOS_XR_MPLS_OAM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_mpls_oam_oper {

class MplsOam : public Entity
{
    public:
        MplsOam();
        ~MplsOam();

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

        class Interface; //type: MplsOam::Interface
        class Packet; //type: MplsOam::Packet
        class Global; //type: MplsOam::Global

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Global> global;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface> interface;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet> packet;
        
}; // MplsOam


class MplsOam::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Briefs; //type: MplsOam::Interface::Briefs
        class Details; //type: MplsOam::Interface::Details

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Briefs> briefs;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details> details;
        
}; // MplsOam::Interface


class MplsOam::Interface::Briefs : public Entity
{
    public:
        Briefs();
        ~Briefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Brief; //type: MplsOam::Interface::Briefs::Brief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Briefs::Brief> > brief;
        
}; // MplsOam::Interface::Briefs


class MplsOam::Interface::Briefs::Brief : public Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf state; //type: LspvBagInterfaceStateEnum
        YLeaf mtu; //type: uint32
        YLeaf prefix_length; //type: uint32
        YLeaf prefix_length_v6; //type: uint32
        YLeaf primary_address; //type: string
        YLeaf primary_address_v6; //type: string

}; // MplsOam::Interface::Briefs::Brief


class MplsOam::Interface::Details : public Entity
{
    public:
        Details();
        ~Details();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Detail; //type: MplsOam::Interface::Details::Detail

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail> > detail;
        
}; // MplsOam::Interface::Details


class MplsOam::Interface::Details::Detail : public Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class InterfaceBrief; //type: MplsOam::Interface::Details::Detail::InterfaceBrief
        class PacketStatistics; //type: MplsOam::Interface::Details::Detail::PacketStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::InterfaceBrief> interface_brief;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics> packet_statistics;
        
}; // MplsOam::Interface::Details::Detail


class MplsOam::Interface::Details::Detail::InterfaceBrief : public Entity
{
    public:
        InterfaceBrief();
        ~InterfaceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name_xr; //type: string
        YLeaf state; //type: LspvBagInterfaceStateEnum
        YLeaf mtu; //type: uint32
        YLeaf prefix_length; //type: uint32
        YLeaf prefix_length_v6; //type: uint32
        YLeaf primary_address; //type: string
        YLeaf primary_address_v6; //type: string

}; // MplsOam::Interface::Details::Detail::InterfaceBrief


class MplsOam::Interface::Details::Detail::PacketStatistics : public Entity
{
    public:
        PacketStatistics();
        ~PacketStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Received; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Received
        class Sent; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Sent
        class WorkingReqSent; //type: MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent
        class WorkingRepSent; //type: MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent
        class ProtectReqSent; //type: MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent
        class ProtectRepSent; //type: MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent> protect_rep_sent;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent> protect_req_sent;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Received> received;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Sent> sent;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent> working_rep_sent;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent> working_req_sent;
        
}; // MplsOam::Interface::Details::Detail::PacketStatistics


class MplsOam::Interface::Details::Detail::PacketStatistics::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ReceivedGoodRequest; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodRequest
        class ReceivedGoodReply; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodReply
        class ReceivedUnknown; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedUnknown
        class ReceivedErrorIpHeader; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorIpHeader
        class ReceivedErrorUdpHeader; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorUdpHeader
        class ReceivedErrorRunt; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorRunt
        class ReceivedErrorQueueFull; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorQueueFull
        class ReceivedErrorGeneral; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorGeneral
        class ReceivedErrorNoInterface; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoInterface
        class ReceivedErrorNoMemory; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoMemory
        class ProtectProtocolReceivedGoodRequest; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodRequest
        class ProtectProtocolReceivedGoodReply; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodReply
        class ReceivedGoodBfdRequest; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdRequest
        class ReceivedGoodBfdReply; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdReply

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodReply> protect_protocol_received_good_reply;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodRequest> protect_protocol_received_good_request;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorGeneral> received_error_general;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorIpHeader> received_error_ip_header;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoInterface> received_error_no_interface;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoMemory> received_error_no_memory;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorQueueFull> received_error_queue_full;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorRunt> received_error_runt;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorUdpHeader> received_error_udp_header;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdReply> received_good_bfd_reply;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdRequest> received_good_bfd_request;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodReply> received_good_reply;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodRequest> received_good_request;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedUnknown> received_unknown;
        
}; // MplsOam::Interface::Details::Detail::PacketStatistics::Received


class MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodRequest : public Entity
{
    public:
        ReceivedGoodRequest();
        ~ReceivedGoodRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodRequest


class MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodReply : public Entity
{
    public:
        ReceivedGoodReply();
        ~ReceivedGoodReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodReply


class MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedUnknown : public Entity
{
    public:
        ReceivedUnknown();
        ~ReceivedUnknown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedUnknown


class MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorIpHeader : public Entity
{
    public:
        ReceivedErrorIpHeader();
        ~ReceivedErrorIpHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorIpHeader


class MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorUdpHeader : public Entity
{
    public:
        ReceivedErrorUdpHeader();
        ~ReceivedErrorUdpHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorUdpHeader


class MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorRunt : public Entity
{
    public:
        ReceivedErrorRunt();
        ~ReceivedErrorRunt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorRunt


class MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorQueueFull : public Entity
{
    public:
        ReceivedErrorQueueFull();
        ~ReceivedErrorQueueFull();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorQueueFull


class MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorGeneral : public Entity
{
    public:
        ReceivedErrorGeneral();
        ~ReceivedErrorGeneral();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorGeneral


class MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoInterface : public Entity
{
    public:
        ReceivedErrorNoInterface();
        ~ReceivedErrorNoInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoInterface


class MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoMemory : public Entity
{
    public:
        ReceivedErrorNoMemory();
        ~ReceivedErrorNoMemory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoMemory


class MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodRequest : public Entity
{
    public:
        ProtectProtocolReceivedGoodRequest();
        ~ProtectProtocolReceivedGoodRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodRequest


class MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodReply : public Entity
{
    public:
        ProtectProtocolReceivedGoodReply();
        ~ProtectProtocolReceivedGoodReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodReply


class MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdRequest : public Entity
{
    public:
        ReceivedGoodBfdRequest();
        ~ReceivedGoodBfdRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdRequest


class MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdReply : public Entity
{
    public:
        ReceivedGoodBfdReply();
        ~ReceivedGoodBfdReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdReply


class MplsOam::Interface::Details::Detail::PacketStatistics::Sent : public Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TransmitGood; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitGood
        class TransmitDrop; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitDrop
        class TransmitBfdGood; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitBfdGood
        class BfdNoReply; //type: MplsOam::Interface::Details::Detail::PacketStatistics::Sent::BfdNoReply

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Sent::BfdNoReply> bfd_no_reply;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitBfdGood> transmit_bfd_good;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitDrop> transmit_drop;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitGood> transmit_good;
        
}; // MplsOam::Interface::Details::Detail::PacketStatistics::Sent


class MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitGood : public Entity
{
    public:
        TransmitGood();
        ~TransmitGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitGood


class MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitDrop : public Entity
{
    public:
        TransmitDrop();
        ~TransmitDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitDrop


class MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitBfdGood : public Entity
{
    public:
        TransmitBfdGood();
        ~TransmitBfdGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitBfdGood


class MplsOam::Interface::Details::Detail::PacketStatistics::Sent::BfdNoReply : public Entity
{
    public:
        BfdNoReply();
        ~BfdNoReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::Sent::BfdNoReply


class MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent : public Entity
{
    public:
        WorkingReqSent();
        ~WorkingReqSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TransmitGood; //type: MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitGood
        class TransmitDrop; //type: MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitDrop
        class TransmitBfdGood; //type: MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitBfdGood
        class BfdNoReply; //type: MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::BfdNoReply

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::BfdNoReply> bfd_no_reply;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitBfdGood> transmit_bfd_good;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitDrop> transmit_drop;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitGood> transmit_good;
        
}; // MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent


class MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitGood : public Entity
{
    public:
        TransmitGood();
        ~TransmitGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitGood


class MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitDrop : public Entity
{
    public:
        TransmitDrop();
        ~TransmitDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitDrop


class MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitBfdGood : public Entity
{
    public:
        TransmitBfdGood();
        ~TransmitBfdGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitBfdGood


class MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::BfdNoReply : public Entity
{
    public:
        BfdNoReply();
        ~BfdNoReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::BfdNoReply


class MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent : public Entity
{
    public:
        WorkingRepSent();
        ~WorkingRepSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TransmitGood; //type: MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitGood
        class TransmitDrop; //type: MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitDrop
        class TransmitBfdGood; //type: MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitBfdGood
        class BfdNoReply; //type: MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::BfdNoReply

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::BfdNoReply> bfd_no_reply;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitBfdGood> transmit_bfd_good;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitDrop> transmit_drop;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitGood> transmit_good;
        
}; // MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent


class MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitGood : public Entity
{
    public:
        TransmitGood();
        ~TransmitGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitGood


class MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitDrop : public Entity
{
    public:
        TransmitDrop();
        ~TransmitDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitDrop


class MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitBfdGood : public Entity
{
    public:
        TransmitBfdGood();
        ~TransmitBfdGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitBfdGood


class MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::BfdNoReply : public Entity
{
    public:
        BfdNoReply();
        ~BfdNoReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::BfdNoReply


class MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent : public Entity
{
    public:
        ProtectReqSent();
        ~ProtectReqSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TransmitGood; //type: MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitGood
        class TransmitDrop; //type: MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitDrop
        class TransmitBfdGood; //type: MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitBfdGood
        class BfdNoReply; //type: MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::BfdNoReply

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::BfdNoReply> bfd_no_reply;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitBfdGood> transmit_bfd_good;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitDrop> transmit_drop;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitGood> transmit_good;
        
}; // MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent


class MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitGood : public Entity
{
    public:
        TransmitGood();
        ~TransmitGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitGood


class MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitDrop : public Entity
{
    public:
        TransmitDrop();
        ~TransmitDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitDrop


class MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitBfdGood : public Entity
{
    public:
        TransmitBfdGood();
        ~TransmitBfdGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitBfdGood


class MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::BfdNoReply : public Entity
{
    public:
        BfdNoReply();
        ~BfdNoReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::BfdNoReply


class MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent : public Entity
{
    public:
        ProtectRepSent();
        ~ProtectRepSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TransmitGood; //type: MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitGood
        class TransmitDrop; //type: MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitDrop
        class TransmitBfdGood; //type: MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitBfdGood
        class BfdNoReply; //type: MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::BfdNoReply

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::BfdNoReply> bfd_no_reply;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitBfdGood> transmit_bfd_good;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitDrop> transmit_drop;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitGood> transmit_good;
        
}; // MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent


class MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitGood : public Entity
{
    public:
        TransmitGood();
        ~TransmitGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitGood


class MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitDrop : public Entity
{
    public:
        TransmitDrop();
        ~TransmitDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitDrop


class MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitBfdGood : public Entity
{
    public:
        TransmitBfdGood();
        ~TransmitBfdGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitBfdGood


class MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::BfdNoReply : public Entity
{
    public:
        BfdNoReply();
        ~BfdNoReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::BfdNoReply


class MplsOam::Packet : public Entity
{
    public:
        Packet();
        ~Packet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Received; //type: MplsOam::Packet::Received
        class Sent; //type: MplsOam::Packet::Sent
        class WorkingReqSent; //type: MplsOam::Packet::WorkingReqSent
        class WorkingRepSent; //type: MplsOam::Packet::WorkingRepSent
        class ProtectReqSent; //type: MplsOam::Packet::ProtectReqSent
        class ProtectRepSent; //type: MplsOam::Packet::ProtectRepSent

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::ProtectRepSent> protect_rep_sent;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::ProtectReqSent> protect_req_sent;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Received> received;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Sent> sent;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::WorkingRepSent> working_rep_sent;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::WorkingReqSent> working_req_sent;
        
}; // MplsOam::Packet


class MplsOam::Packet::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ReceivedGoodRequest; //type: MplsOam::Packet::Received::ReceivedGoodRequest
        class ReceivedGoodReply; //type: MplsOam::Packet::Received::ReceivedGoodReply
        class ReceivedUnknown; //type: MplsOam::Packet::Received::ReceivedUnknown
        class ReceivedErrorIpHeader; //type: MplsOam::Packet::Received::ReceivedErrorIpHeader
        class ReceivedErrorUdpHeader; //type: MplsOam::Packet::Received::ReceivedErrorUdpHeader
        class ReceivedErrorRunt; //type: MplsOam::Packet::Received::ReceivedErrorRunt
        class ReceivedErrorQueueFull; //type: MplsOam::Packet::Received::ReceivedErrorQueueFull
        class ReceivedErrorGeneral; //type: MplsOam::Packet::Received::ReceivedErrorGeneral
        class ReceivedErrorNoInterface; //type: MplsOam::Packet::Received::ReceivedErrorNoInterface
        class ReceivedErrorNoMemory; //type: MplsOam::Packet::Received::ReceivedErrorNoMemory
        class ProtectProtocolReceivedGoodRequest; //type: MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest
        class ProtectProtocolReceivedGoodReply; //type: MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply
        class ReceivedGoodBfdRequest; //type: MplsOam::Packet::Received::ReceivedGoodBfdRequest
        class ReceivedGoodBfdReply; //type: MplsOam::Packet::Received::ReceivedGoodBfdReply

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply> protect_protocol_received_good_reply;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest> protect_protocol_received_good_request;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Received::ReceivedErrorGeneral> received_error_general;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Received::ReceivedErrorIpHeader> received_error_ip_header;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Received::ReceivedErrorNoInterface> received_error_no_interface;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Received::ReceivedErrorNoMemory> received_error_no_memory;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Received::ReceivedErrorQueueFull> received_error_queue_full;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Received::ReceivedErrorRunt> received_error_runt;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Received::ReceivedErrorUdpHeader> received_error_udp_header;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Received::ReceivedGoodBfdReply> received_good_bfd_reply;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Received::ReceivedGoodBfdRequest> received_good_bfd_request;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Received::ReceivedGoodReply> received_good_reply;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Received::ReceivedGoodRequest> received_good_request;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Received::ReceivedUnknown> received_unknown;
        
}; // MplsOam::Packet::Received


class MplsOam::Packet::Received::ReceivedGoodRequest : public Entity
{
    public:
        ReceivedGoodRequest();
        ~ReceivedGoodRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Received::ReceivedGoodRequest


class MplsOam::Packet::Received::ReceivedGoodReply : public Entity
{
    public:
        ReceivedGoodReply();
        ~ReceivedGoodReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Received::ReceivedGoodReply


class MplsOam::Packet::Received::ReceivedUnknown : public Entity
{
    public:
        ReceivedUnknown();
        ~ReceivedUnknown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Received::ReceivedUnknown


class MplsOam::Packet::Received::ReceivedErrorIpHeader : public Entity
{
    public:
        ReceivedErrorIpHeader();
        ~ReceivedErrorIpHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Received::ReceivedErrorIpHeader


class MplsOam::Packet::Received::ReceivedErrorUdpHeader : public Entity
{
    public:
        ReceivedErrorUdpHeader();
        ~ReceivedErrorUdpHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Received::ReceivedErrorUdpHeader


class MplsOam::Packet::Received::ReceivedErrorRunt : public Entity
{
    public:
        ReceivedErrorRunt();
        ~ReceivedErrorRunt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Received::ReceivedErrorRunt


class MplsOam::Packet::Received::ReceivedErrorQueueFull : public Entity
{
    public:
        ReceivedErrorQueueFull();
        ~ReceivedErrorQueueFull();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Received::ReceivedErrorQueueFull


class MplsOam::Packet::Received::ReceivedErrorGeneral : public Entity
{
    public:
        ReceivedErrorGeneral();
        ~ReceivedErrorGeneral();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Received::ReceivedErrorGeneral


class MplsOam::Packet::Received::ReceivedErrorNoInterface : public Entity
{
    public:
        ReceivedErrorNoInterface();
        ~ReceivedErrorNoInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Received::ReceivedErrorNoInterface


class MplsOam::Packet::Received::ReceivedErrorNoMemory : public Entity
{
    public:
        ReceivedErrorNoMemory();
        ~ReceivedErrorNoMemory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Received::ReceivedErrorNoMemory


class MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest : public Entity
{
    public:
        ProtectProtocolReceivedGoodRequest();
        ~ProtectProtocolReceivedGoodRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest


class MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply : public Entity
{
    public:
        ProtectProtocolReceivedGoodReply();
        ~ProtectProtocolReceivedGoodReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply


class MplsOam::Packet::Received::ReceivedGoodBfdRequest : public Entity
{
    public:
        ReceivedGoodBfdRequest();
        ~ReceivedGoodBfdRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Received::ReceivedGoodBfdRequest


class MplsOam::Packet::Received::ReceivedGoodBfdReply : public Entity
{
    public:
        ReceivedGoodBfdReply();
        ~ReceivedGoodBfdReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Received::ReceivedGoodBfdReply


class MplsOam::Packet::Sent : public Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TransmitGood; //type: MplsOam::Packet::Sent::TransmitGood
        class TransmitDrop; //type: MplsOam::Packet::Sent::TransmitDrop
        class TransmitBfdGood; //type: MplsOam::Packet::Sent::TransmitBfdGood
        class BfdNoReply; //type: MplsOam::Packet::Sent::BfdNoReply

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Sent::BfdNoReply> bfd_no_reply;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Sent::TransmitBfdGood> transmit_bfd_good;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Sent::TransmitDrop> transmit_drop;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::Sent::TransmitGood> transmit_good;
        
}; // MplsOam::Packet::Sent


class MplsOam::Packet::Sent::TransmitGood : public Entity
{
    public:
        TransmitGood();
        ~TransmitGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Sent::TransmitGood


class MplsOam::Packet::Sent::TransmitDrop : public Entity
{
    public:
        TransmitDrop();
        ~TransmitDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Sent::TransmitDrop


class MplsOam::Packet::Sent::TransmitBfdGood : public Entity
{
    public:
        TransmitBfdGood();
        ~TransmitBfdGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Sent::TransmitBfdGood


class MplsOam::Packet::Sent::BfdNoReply : public Entity
{
    public:
        BfdNoReply();
        ~BfdNoReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::Sent::BfdNoReply


class MplsOam::Packet::WorkingReqSent : public Entity
{
    public:
        WorkingReqSent();
        ~WorkingReqSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TransmitGood; //type: MplsOam::Packet::WorkingReqSent::TransmitGood
        class TransmitDrop; //type: MplsOam::Packet::WorkingReqSent::TransmitDrop
        class TransmitBfdGood; //type: MplsOam::Packet::WorkingReqSent::TransmitBfdGood
        class BfdNoReply; //type: MplsOam::Packet::WorkingReqSent::BfdNoReply

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::WorkingReqSent::BfdNoReply> bfd_no_reply;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::WorkingReqSent::TransmitBfdGood> transmit_bfd_good;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::WorkingReqSent::TransmitDrop> transmit_drop;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::WorkingReqSent::TransmitGood> transmit_good;
        
}; // MplsOam::Packet::WorkingReqSent


class MplsOam::Packet::WorkingReqSent::TransmitGood : public Entity
{
    public:
        TransmitGood();
        ~TransmitGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::WorkingReqSent::TransmitGood


class MplsOam::Packet::WorkingReqSent::TransmitDrop : public Entity
{
    public:
        TransmitDrop();
        ~TransmitDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::WorkingReqSent::TransmitDrop


class MplsOam::Packet::WorkingReqSent::TransmitBfdGood : public Entity
{
    public:
        TransmitBfdGood();
        ~TransmitBfdGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::WorkingReqSent::TransmitBfdGood


class MplsOam::Packet::WorkingReqSent::BfdNoReply : public Entity
{
    public:
        BfdNoReply();
        ~BfdNoReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::WorkingReqSent::BfdNoReply


class MplsOam::Packet::WorkingRepSent : public Entity
{
    public:
        WorkingRepSent();
        ~WorkingRepSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TransmitGood; //type: MplsOam::Packet::WorkingRepSent::TransmitGood
        class TransmitDrop; //type: MplsOam::Packet::WorkingRepSent::TransmitDrop
        class TransmitBfdGood; //type: MplsOam::Packet::WorkingRepSent::TransmitBfdGood
        class BfdNoReply; //type: MplsOam::Packet::WorkingRepSent::BfdNoReply

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::WorkingRepSent::BfdNoReply> bfd_no_reply;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::WorkingRepSent::TransmitBfdGood> transmit_bfd_good;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::WorkingRepSent::TransmitDrop> transmit_drop;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::WorkingRepSent::TransmitGood> transmit_good;
        
}; // MplsOam::Packet::WorkingRepSent


class MplsOam::Packet::WorkingRepSent::TransmitGood : public Entity
{
    public:
        TransmitGood();
        ~TransmitGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::WorkingRepSent::TransmitGood


class MplsOam::Packet::WorkingRepSent::TransmitDrop : public Entity
{
    public:
        TransmitDrop();
        ~TransmitDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::WorkingRepSent::TransmitDrop


class MplsOam::Packet::WorkingRepSent::TransmitBfdGood : public Entity
{
    public:
        TransmitBfdGood();
        ~TransmitBfdGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::WorkingRepSent::TransmitBfdGood


class MplsOam::Packet::WorkingRepSent::BfdNoReply : public Entity
{
    public:
        BfdNoReply();
        ~BfdNoReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::WorkingRepSent::BfdNoReply


class MplsOam::Packet::ProtectReqSent : public Entity
{
    public:
        ProtectReqSent();
        ~ProtectReqSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TransmitGood; //type: MplsOam::Packet::ProtectReqSent::TransmitGood
        class TransmitDrop; //type: MplsOam::Packet::ProtectReqSent::TransmitDrop
        class TransmitBfdGood; //type: MplsOam::Packet::ProtectReqSent::TransmitBfdGood
        class BfdNoReply; //type: MplsOam::Packet::ProtectReqSent::BfdNoReply

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::ProtectReqSent::BfdNoReply> bfd_no_reply;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::ProtectReqSent::TransmitBfdGood> transmit_bfd_good;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::ProtectReqSent::TransmitDrop> transmit_drop;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::ProtectReqSent::TransmitGood> transmit_good;
        
}; // MplsOam::Packet::ProtectReqSent


class MplsOam::Packet::ProtectReqSent::TransmitGood : public Entity
{
    public:
        TransmitGood();
        ~TransmitGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::ProtectReqSent::TransmitGood


class MplsOam::Packet::ProtectReqSent::TransmitDrop : public Entity
{
    public:
        TransmitDrop();
        ~TransmitDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::ProtectReqSent::TransmitDrop


class MplsOam::Packet::ProtectReqSent::TransmitBfdGood : public Entity
{
    public:
        TransmitBfdGood();
        ~TransmitBfdGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::ProtectReqSent::TransmitBfdGood


class MplsOam::Packet::ProtectReqSent::BfdNoReply : public Entity
{
    public:
        BfdNoReply();
        ~BfdNoReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::ProtectReqSent::BfdNoReply


class MplsOam::Packet::ProtectRepSent : public Entity
{
    public:
        ProtectRepSent();
        ~ProtectRepSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TransmitGood; //type: MplsOam::Packet::ProtectRepSent::TransmitGood
        class TransmitDrop; //type: MplsOam::Packet::ProtectRepSent::TransmitDrop
        class TransmitBfdGood; //type: MplsOam::Packet::ProtectRepSent::TransmitBfdGood
        class BfdNoReply; //type: MplsOam::Packet::ProtectRepSent::BfdNoReply

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::ProtectRepSent::BfdNoReply> bfd_no_reply;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::ProtectRepSent::TransmitBfdGood> transmit_bfd_good;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::ProtectRepSent::TransmitDrop> transmit_drop;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Packet::ProtectRepSent::TransmitGood> transmit_good;
        
}; // MplsOam::Packet::ProtectRepSent


class MplsOam::Packet::ProtectRepSent::TransmitGood : public Entity
{
    public:
        TransmitGood();
        ~TransmitGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::ProtectRepSent::TransmitGood


class MplsOam::Packet::ProtectRepSent::TransmitDrop : public Entity
{
    public:
        TransmitDrop();
        ~TransmitDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::ProtectRepSent::TransmitDrop


class MplsOam::Packet::ProtectRepSent::TransmitBfdGood : public Entity
{
    public:
        TransmitBfdGood();
        ~TransmitBfdGood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::ProtectRepSent::TransmitBfdGood


class MplsOam::Packet::ProtectRepSent::BfdNoReply : public Entity
{
    public:
        BfdNoReply();
        ~BfdNoReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // MplsOam::Packet::ProtectRepSent::BfdNoReply


class MplsOam::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_clients; //type: uint32
        class MessageStatistics; //type: MplsOam::Global::MessageStatistics
        class CollaboratorStatistics; //type: MplsOam::Global::CollaboratorStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Global::CollaboratorStatistics> collaborator_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Global::MessageStatistics> message_statistics;
        
}; // MplsOam::Global


class MplsOam::Global::MessageStatistics : public Entity
{
    public:
        MessageStatistics();
        ~MessageStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf register_messages; //type: uint32
        YLeaf unregister_messages; //type: uint32
        YLeaf echo_submit_messages; //type: uint32
        YLeaf echo_cancel_messages; //type: uint32
        YLeaf get_result_messages; //type: uint32
        YLeaf get_config_messages; //type: uint32
        YLeaf get_response_messages; //type: uint32
        YLeaf property_response_messages; //type: uint32
        YLeaf property_request_messages; //type: uint32
        YLeaf property_block_messages; //type: uint32
        YLeaf thread_request_messages; //type: uint32

}; // MplsOam::Global::MessageStatistics


class MplsOam::Global::CollaboratorStatistics : public Entity
{
    public:
        CollaboratorStatistics();
        ~CollaboratorStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CollaboratorIParm; //type: MplsOam::Global::CollaboratorStatistics::CollaboratorIParm
        class CollaboratorIm; //type: MplsOam::Global::CollaboratorStatistics::CollaboratorIm
        class CollaboratorNetIo; //type: MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo
        class CollaboratorRib; //type: MplsOam::Global::CollaboratorStatistics::CollaboratorRib

        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Global::CollaboratorStatistics::CollaboratorIParm> collaborator_i_parm;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Global::CollaboratorStatistics::CollaboratorIm> collaborator_im;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo> collaborator_net_io;
        std::shared_ptr<Cisco_IOS_XR_mpls_oam_oper::MplsOam::Global::CollaboratorStatistics::CollaboratorRib> collaborator_rib;
        
}; // MplsOam::Global::CollaboratorStatistics


class MplsOam::Global::CollaboratorStatistics::CollaboratorIParm : public Entity
{
    public:
        CollaboratorIParm();
        ~CollaboratorIParm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ups; //type: uint32
        YLeaf downs; //type: uint32

}; // MplsOam::Global::CollaboratorStatistics::CollaboratorIParm


class MplsOam::Global::CollaboratorStatistics::CollaboratorIm : public Entity
{
    public:
        CollaboratorIm();
        ~CollaboratorIm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ups; //type: uint32
        YLeaf downs; //type: uint32

}; // MplsOam::Global::CollaboratorStatistics::CollaboratorIm


class MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo : public Entity
{
    public:
        CollaboratorNetIo();
        ~CollaboratorNetIo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ups; //type: uint32
        YLeaf downs; //type: uint32

}; // MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo


class MplsOam::Global::CollaboratorStatistics::CollaboratorRib : public Entity
{
    public:
        CollaboratorRib();
        ~CollaboratorRib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ups; //type: uint32
        YLeaf downs; //type: uint32

}; // MplsOam::Global::CollaboratorStatistics::CollaboratorRib

class LspvBagInterfaceStateEnum : public Enum
{
    public:
        static const Enum::YLeaf not_ready;
        static const Enum::YLeaf admin_down;
        static const Enum::YLeaf down;
        static const Enum::YLeaf up;
        static const Enum::YLeaf shutdown;
        static const Enum::YLeaf error_disable;
        static const Enum::YLeaf down_immediate;
        static const Enum::YLeaf admin_immediate;
        static const Enum::YLeaf graceful_down;
        static const Enum::YLeaf begin_shutdown;
        static const Enum::YLeaf end_shutdown;
        static const Enum::YLeaf begin_error_disable;
        static const Enum::YLeaf end_error_disable;
        static const Enum::YLeaf begin_graceful_down;
        static const Enum::YLeaf reset;
        static const Enum::YLeaf operational;
        static const Enum::YLeaf not_operational;
        static const Enum::YLeaf not_known;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_OAM_OPER_ */

